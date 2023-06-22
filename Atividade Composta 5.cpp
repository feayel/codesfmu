5) João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário 
de seu trabalho. Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca 
do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente. João precisa que 
você faça um programa que leia a variável peso (peso de peixes) e calcule o excesso. Gravar na 
variável excesso a quantidade de quilos além do limite e na variável multa o valor da multa que João deverá 
pagar. Imprima os dados do programa com as mensagens adequadas.

#include<stdio.h>	// 4 reais por kilo excedido
#include<math.h> 	//peso maximo 50 kilos

float peso,sobra,multa;

int main(){
	printf("Senhor Joao, insira a quantidade de kilos de peixe pescados:\n");
	scanf("%f",&peso);
	
	printf("Peso dos peixes: %2.fKg.\n",peso);

if (peso>50){
	sobra=(peso-50);
	multa=(sobra*4.00);
	printf("\nExcesso de peso: %.2fkg.\n",sobra);
	printf("\nValor da multa: R$%.2f.",multa);
}

else{
	printf("\nSem excesso. Nao havera multa.\n");
}

return 0;
}
