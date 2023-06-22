2) Faça um programa que transforme a temperatura de Fahrenheit para Celsius, utilizando a seguinte formula:
Celsius = ((Fahrenheit -32) * 5 ) / 9

#include<stdio.h> //Atividade 2 - Graus Celsius e Fahrenheit
#include<math.h>

int fah,cel;

int main(){
	printf("Insira os graus em Fahrenheit:\n");
	scanf("%d",&fah);
	
cel=((fah-32)*5)/9;

  printf("\n%d graus Fahrenheit e equivalente a %d graus Celsius.\n",fah,cel);
	
return 0;
} 
