1) (URI- 1050) Leia um número inteiro que representa um código de DDD para discagem interurbana. Em 
seguida, informe à qual cidade o DDD pertence, considerando a tabela abaixo:

Se a entrada for qualquer outro DDD que não esteja presente na tabela acima, o programa deverá informar: 
DDD não cadastrado

Entrada: A entrada consiste de um único valor inteiro.
  
Saída: Imprima o nome da cidade correspondente ao DDD existente na entrada. Imprima DDD nao cadastrado 
caso não existir DDD correspondente ao número digitado.

#include<stdio.h>
#include<locale.h>

int ddd;

int main(){
setlocale(LC_ALL, "Portuguese");

	printf("Digite o DDD do númeredo desejado:\n");
	scanf("%d",&ddd);
	
if(ddd==61){
	printf("\nBrasília.");	
}
	else if(ddd==71){
		printf("\n Salvador\n");
	}
	else if(ddd==11){
		printf("\nSão Paulo\n");
	}
	else if(ddd==21){
		printf("\nRio de Janeiro\n");
	}
	else if(ddd==32){
		printf("\nJuiz de Fora\n");
	}
	else if(ddd==19){
		printf("\nCampinas\n");
	}
	else if(ddd==27){
		printf("\nVitória\n");
	}
	else if(ddd==31){
		printf("\nBelo Horizonte\n");
	}
else{
	printf("\DDD Não cadastrado.\n");
}
return 0;
}
