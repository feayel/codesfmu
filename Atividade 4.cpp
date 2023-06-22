4) Faça um algoritmo que leia três notas de um aluno, calcule e imprima a média final deste aluno. Considerar 
que a média é ponderada e que o peso é 2, 3 e 5. Fórmula = n1*0.2 + n2*0.3 + n3*0.5.

#include<stdio.h> //Atividade 4 - Média de Notas
#include<math.h>

float nota1,nota2,nota3,media;

int main(){
	printf("Insira a primeira nota:\n"); //Nota com peso 2
	scanf("%f",&nota1);
	
	printf("Insira a segunda nota:\n"); //Nota com peso 3
	scanf("%f",&nota2);
	
	printf("Insira a terceira nota:\n"); //Nota com peso 5
	scanf("%f",&nota3);
	
media=nota1*0.2+nota2*0.3+nota3*0.5;

	printf("\nA sua media de nota foi de %.2f.\n",media);
	
		
return 0;	
} 
