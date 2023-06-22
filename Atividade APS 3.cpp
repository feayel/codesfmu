3- URI – 1048 - A empresa ABC resolveu conceder um aumento de salários a seus
funcionários de acordo com a tabela abaixo:
Salário Percentual de Reajuste
0 - 400.00              15%
400.01 - 800.00         12% 
800.01 - 1200.00        10% 
1200.01 - 2000.00        7% 
Acima de 2000.00         4%

Leia o salário do funcionário e calcule e mostre o novo salário, bem como o valor de 
reajuste ganho e o percentual de reajuste.


#include<stdio.h>
#include<locale.h>

float salario;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
printf("Insira o salario:\n");
scanf("%f", &salario);
 
if(salario>0){
	if (salario<= 400.00){
	  printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", salario*1.15,salario*1.15-salario);
	  }
	 	else if (salario <= 800.00){
	 	printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",salario*1.12,salario*1.12-salario);
	 	}
		else if (salario <= 1200.00){
	 	printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",salario*1.10,salario*1.10-salario);
	 	}
		else if (salario <= 2000.00){
	 	printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",salario*1.07,salario*1.07-salario);
		}
	else{
	printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",salario*1.04,salario*1.04-salario);
	}
}
else{
	printf("Salário inválido.\n");
}
 return 0;
}
