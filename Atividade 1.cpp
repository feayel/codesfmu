1)(URI-1015) Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, 
p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a 
fórmula:

Fórmula: Distância = j(x2 - x1)2 + (y2 - y1)2

Entrada: O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto 
flutuante: x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2. 

Saída: Calcule e imprima o valor da distância segundo a fórmula fornecida, com 4 casas após o ponto decimal


#include<stdio.h>
#include<math.h>

float x1,y1,x2,y2,dist;	

int main(){
	
	printf("Insira o valor do primeiro x:\n");
	scanf("%f",&x1);
	
	printf("Insira o valor do segundo x:\n");
	scanf("%f",&x2);
	
	printf("Insira o valor do primeiro y:\n");
	scanf("%f",&y1);
	
	printf("Insira o valor do segundo y:\n");
	scanf("%f",&y2);
	
dist=sqrt(pow(x2-x1,2)+pow(y2-y1,2));

	printf("\n%.4f",dist);
	
return 0;
}
