2) Calcule o desconto que uma loja dará a seus clientes. O desconto é dado da seguinte forma:

a) Compras até R$ 100 desconto de 5%
b) Compras acima de R$ 101 desconto de 10%

#include<stdio.h> //Calcular descontos
#include<math.h>

float compra,desc1,desc2,final1,final2;

int main(){
	printf("Insira o valor gasto na compra:\n");
	scanf("%f",&compra);
	
desc1=compra*0.05; //Desconto de 5% até 100$
desc2=compra*0.10; //Desconto de 10% Acima de 100$
final1=compra-desc1; //Valor final com desconto de 5% 
final2=compra-desc2; //Valor final com desconto de 10%


if(compra<=100){
	printf("\nCompra ate R$100.\n");
	printf("Desconto de R$%.2f(5 por cento).\n",desc1);
	printf("Valor a pagar:R$%.2f.",final1);
	
}

else{
	printf("\nCompra acima de  R$100.\n");
	printf("Desconto de R$%.2f(10 por cento).\n",desc2);
	printf("Valor a pagar:R$%.2f.",final2);
}


return 0;
}
