7) Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:

a) o produto do dobro do primeiro com metade do segundo.
b) a soma do triplo do primeiro com o terceiro.
c) o terceiro elevado ao cubo.


#include<stdio.h>	//Atividade 7- 2 numeros inteiros e 1 real
#include<math.h>

int num1,num2;
float num3,resp1,resp2,resp3;

int main(){
	printf("Insira o primeiro numero [inteiro]:\n");
	scanf("%d",&num1);
	
	printf("Insira o segundo numero [inteiro]:\n");
	scanf("%d",&num2);

	printf("Insira o terceiro numero [real]:\n");
	scanf("%f",&num3);
	

resp1=((num1*2)*(num2/2));
resp2=(num1*3)+num3;
resp3=cbrt(num3);

	printf("\nO produto do dobro do primeiro numero com metade do segundo;\n");
	printf("%.2f\n",resp1);
	
	printf("\nA soma do triplo do primeiro numero com o terceiro;\n");
	printf("%.2f\n",resp2);
	
	printf("\nO terceiro elevado ao cubo;\n");
	printf("%.2f\n",resp3);

return 0;	
}
