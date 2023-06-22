3) (URI – 1038) Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade 
deste item. A seguir, calcule e mostre o valor da conta a pagar.

Entrada: O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um 
item conforme tabela acima.

Saída: O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas 
após o ponto decimal. 



#include<stdio.h> //Atividade 3
#include<locale.h> 

int	cod;
float qtd;

/* CÓDIGOS & PREÇOS
COD1 HOT DOG	R$4
COD2 X-SALADA	R$4,5
COD3 X-BACON	R$5
COD4 TORRADA SIMPLES	R$2
COD5 REFRIGERANTE	R$1,5 */

int main(){
setlocale(LC_ALL, "Portuguese");

	printf("Insira o código do produto e a quantidade desejada:\n");
	scanf("%d %f",&cod,&qtd);

if(cod>0&&cod<=5 && qtd>0){
	if(cod==1){
		printf("\nVocê selecionou %.0f Cachorro(s) Quente(s);\n",qtd);
		printf("\nTotal de R$%.2f.\n",qtd*4.00);
	}
		else if(cod==2){
		printf("\nVocê selecionou %.0f X Salada;\n",qtd);
		printf("\nTotal de R$%.2f.\n",qtd*4.50);		
		}
		else if(cod==3){
		printf("\nVocê selecionou %.0f X Salada;\n",qtd);
		printf("\nTotal de R$%.2f.\n",qtd*5.00);	
		}
		else if(cod==4){
		printf("\nVocê selecionou %.0f Torrada Simples;\n",qtd);
		printf("\nTotal de R$%.2f.\n",qtd*2.00);		
		}
		else if(cod==5){
		printf("\nVocê selecionou %.0f Refrigerante(s);\n",qtd);
		printf("\nTotal de R$%.2f.\n",qtd*1.50);		
		}
	}
else{
	printf("\nEntrada inválida;");
	printf("\nInsira o código e a quantidade do produto.");
}
return 0;
}
