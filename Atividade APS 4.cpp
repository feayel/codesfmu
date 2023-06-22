4- (URI-1078) Leia 1 valor inteiro N (2<N<1000). A seguir, mostre a tabuada de N:
1 x N = N 2 x N = 2N ... 10 x N = 10N
  
Entrada: A entrada contém um valor inteiro N (2 < N < 1000). 
Saída: Imprima a tabuada de N, conforme o exemplo fornecido

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

 int num1, num2;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Insira um número:\n>> ");
	scanf("%d",&num1);

if(num1>=2 && num1<=1000){
	printf("TABOADA DO %d:\n",num1);
	
	for(num2=0;num2<=10;num2++){
		printf("%d x %d = %d\n",num1,num2,num1*num2);
	}
}
else{
	printf("Número %d não está no intervalo de 2 e 1000.",num1);
}

system("pause");
return 0;
}
