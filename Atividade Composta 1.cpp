1) Faça um programa para introduzir 2 números e fazer a soma destes 2 números. Se a soma for maior que 
10, calcular o dobro deste valor. Caso a soma destes 2 números for menor que 10, calcular o triplo desta 
soma.

#include<stdio.h> //Atividades composta - dobro ou triplo
#include<math.h>

int num1,num2,resul,db,tp;


int main(){
	printf("Insira o primeiro numero:\n");
	scanf("%d",&num1);
	
	printf("Insira o segundo numero:\n");
	scanf("%d",&num2);
	
resul=num1+num2;
db=resul*2;
tp=resul*3;

if(resul>10){
	printf("\nComo o resultado foi maior, aqui esta o dobro do resultado:%d.\n",db);

}

else{
	printf("\nComo o resultado foi menor, aqui esta o triplo do resultado:%d.\n",tp);
}


return 0;
}
