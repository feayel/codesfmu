5) Uma fruteira está vendendo frutas com a seguinte tabela de preços:

Até 5 Kg Acima de 5 Kg
Morango R$ 2,50 por Kg R$ 2,20 por Kg 
Maçã R$ 1,80 por Kg R$ 1,50 por Kg 

Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra ultrapassar R$ 25,00, receberá ainda 
um desconto de 10% sobre este total. Escreva um algoritmo para ler a quantidade (em Kg) de morangos e a 
quantidade (em Kg) de maças adquiridas e escreva o valor a ser pago pelo cliente



#include<stdio.h> //Atividade 5
#include<locale.h>

/*  	   Até 5KG	  Acima de 5KG
Morango		R$2,5		 R$2,2
Maçã		R$1,8	 	 R$1,5	 */

float peso_maca,peso_morango,preco_maca,preco_morango,total_morango,total_maca,final;

int main(){
setlocale(LC_ALL, "Portuguese");

	printf("Quantos KG de maçã deseja comprar:\n");
	scanf("%f",&peso_maca);
	
	printf("Quantos KG de morando deseja comprar:\n");
	scanf("%f",&peso_morango);
	
preco_maca=1.8;
preco_morango=2.5;
	
if(peso_maca>0 || peso_morango>0){
	if(peso_morango>5){
		total_morango=(preco_morango-0.3)*peso_morango;
	}
	else{
		total_morango=(preco_morango*peso_morango);
	}
}
	if(peso_maca>5){
		total_maca=(preco_maca-0.3)*peso_maca;
	}
	else{
		total_maca=(preco_maca*peso_maca);
	}

if((total_morango+total_maca>25) || (peso_morango+peso_maca>8)){
	
	final=(total_morango+total_maca)*0.9;
}
	else{
	final =(total_morango+total_maca);
}
	
	printf("\nPreço Final da compra: R$%.2f.",final);
	
return 0;
}
