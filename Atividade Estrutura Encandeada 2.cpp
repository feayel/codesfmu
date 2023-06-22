2) (URI- 1037) Você deve fazer um programa que leia um valor qualquer e apresente uma mensagem dizendo 
em qual dos seguintes intervalos ([0,25], (25,50], (50,75], (75,100]) este valor se encontra. Obviamente se o 
valor não estiver em nenhum destes intervalos, deverá ser impressa a mensagem “Fora de intervalo”.
O símbolo (representa "maior que". Por exemplo:

[0,25] indica valores entre 0 e 25.0000, inclusive eles.

(25,50] indica valores maiores que 25 Ex: 25.00001 até o valor 50.0000000 

Entrada: O arquivo de entrada contém um número com ponto flutuante qualquer. 
Saída: A saída deve ser uma mensagem conforme exemplo abaixo.

#include<stdio.h>	// atividade 2
#include<locale.h>

float valor;

int main(){
setlocale(LC_ALL, "Portuguese");

	printf("Insira um valor:\n");
	scanf("%f",&valor);

if(valor>0 && valor<=25){
	printf("\nIntervalo entre 0 e 25");
}
	else if(valor>25 && valor<=50){
		printf("\nIntervalo entre 25 e 50");
	}
	else if(valor>50 && valor <=75){
		printf("\nIntervalo entre 50 e 75");
	}
else if(valor>75 && valor<=100){
	printf("\nIntervalo entre 75 e 100");
	}
else{
	printf("\nFora do intervalo.");
}
return 0;
}
