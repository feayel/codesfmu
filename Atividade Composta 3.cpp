3) Faça um programa que receba o nome, a altura e o gênero (M ou F) de uma pessoa, calcule e mostre seu 
peso ideal, utilizando as seguintes fórmulas:
- para sexo masculino: peso ideal = (72.7 *altura) - 58
- para sexo feminino: peso ideal = (62.1 *altura) – 44.7
  

#include<stdio.h> //Ativdade composta 3 - Peso ideal pra sexo
#include<math.h>

float alt,pesom,pesof;
char nome[50],gen;

int main(){
	printf("Insira o seu nome:\n");
	scanf(" %[^\n]",&nome);

	printf("Insira sua altura:\n");
	scanf("%f",&alt);
	
	printf("Insira seu genero [F] ou [M]:\n");
	scanf(" %c",&gen);
	
pesom=(72.7*alt)-58;
pesof=(62.1*alt)-44.7;

if (gen=='M'){
	
	printf("\n%s de acordo com sua altura de %.2f e de %.2fkg.\n",nome,alt,pesom);
	
}

else if(gen=='F'){
	
	printf("\n%s de acordo com sua altura de %.2f e de %.2fkg.\n",nome,alt,pesof);
	
}

return 0;
}
