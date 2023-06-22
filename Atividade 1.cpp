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
