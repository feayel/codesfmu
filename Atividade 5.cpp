5) Faça um programa para introduzir um número e verifique se o número é par ou ímpar.

#include<stdio.h> //Atividade 5
#include<math.h>

int num,resul;

int main(){

	printf("Insira o seu numero:\n");
	scanf("%d",&num);

resul=num%2;

if(resul=0){
	printf("\nO numero %d e par.",num);
	
}
else{
	printf("\nO numero %d e impar.",num);
}

return 0;
}
