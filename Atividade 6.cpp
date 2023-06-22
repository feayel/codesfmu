6) Faça um programa para calcular o valor pago a um aplicativo de taxi. A taxa inicial da corrida é de 
R$ 4,90 mais R$ 3,00 o km rodado. Faça um programa para calcular o valor da corrida de uma pessoa. 
Mostre na tela o km rodado e o preço a ser pago pelo passageiro

#include<stdio.h>	//Atividade 6 taxas taxi
#include<math.h>

float kms,taxa,pfinal;

int main(){
	printf("Quantos quilometros deseja percorrer:\n");
	scanf("%f",&kms);
	
taxa=4.90;
pfinal=(kms*3)+taxa;

	printf("\nVoce percorreu %.0fkm's e o preco foi de R$%.2f.\n",kms,pfinal);
	
return 0;
}
