6) Ler dois números (considere que não serão lidos valores iguais) e escreva o maior deles.

#include<stdio.h>
#include<math.h>

int num1,num2,maior,menor;

int main(){
	printf("Insira o primeiro numero: \n");
	scanf("%d",&num1);
	
	printf("Insira o segundo numero: \n");
	scanf("%d",&num2);
	
if(num1>num2){
	printf("\Maior numero: %d\n",num1);
}
else if(num2>num1){
	printf("\nMaior numero: %d\n",num2);
}
	
return 0;
}
