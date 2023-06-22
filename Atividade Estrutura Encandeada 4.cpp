4) Ler dois números (considere que não serão lidos valores iguais) e escreva o maior deles.

#include<stdio.h> //Atividade 4
#include<locale.h>

float num1,num2;

int main(){
setlocale(LC_ALL, "Portuguese");

	printf("Digite 2 números de sua escolha:\n");
	scanf("%f %f",&num1,&num2);

if(num1>num2||num2>num1){
	if(num1>num2){
		printf("\nNúmero maior: %.0f.",num1);
	}
	else if(num2>num1){
		printf("\nNúmero maior: %.0f.",num2);
	}
}
else{
	printf("\nEntrada inválida... Números iguais.");
}
return 0;
}
