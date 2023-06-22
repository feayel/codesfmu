1- URI – 1020 - Faça um programa que leia um valor inteiro correspondente à idade de
uma pessoa em dias e informe-a em anos, meses e dias

Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 
30 dias. Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns 
dias, como 360, 363 ou 364. Este é apenas um exercício com objetivo de testar 
raciocínio matemático simples

#include<stdio.h>
#include<locale.h>

int anos,meses,dias;

int main(){;
	setlocale(LC_ALL, "Portuguese");

printf("Insira a sua idade em DIAS:\n");
scanf("%d",&dias);

anos=dias/365;
meses=anos*12;

if(dias>=1){
	printf("Você possui: \n%d Ano(s) \n%d Mes(es) \n%d Dia(s)\n",anos,meses,dias);
}
else{
	printf("Quantidade de dias inválidos.\n");
}

return 0;
}
