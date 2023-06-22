2- URI -1036 (adaptado) - Faça um programa que calcule e imprima as raízes de uma
equação do segundo grau, do tipo ax2 + bx + c = 0, onde a, b e c representam os
coeficientes da equação (dados de entrada), e x1 e x2 são as variáveis onde devem ser
guardadas as raízes da equação.
Dicas para o cálculo: 
- A variável a deve ser diferente de zero
- Fórmula do delta: ((b*b) - (4*(a*c)))
- Se delta < 0, não existe raiz real, logo, x1=0 e x2 =0;
- Se delta = 0, existe apenas uma raiz real, logo, x1=raiz e x2 =0;
- Se delta > 0, existem duas raízes reais, logo, x1 = ((-b) + raiz(delta)) / (2*a);
x2 = ((-b) - raiz(delta)) / (2*a)

#include<stdio.h>
#include<locale.h>
#include<math.h>

float a, b, c, delta, x1, x2;

int main(){;
	setlocale(LC_ALL, "Portuguese");

printf("ax² + bx + c\n");

printf("Valor de a: \n"); 
scanf("%f",&a);

printf("Valor de b: \n"); 
scanf("%f",&b);

printf("Valor de c: \n"); 
scanf("%f",&c);
 
delta =(( b*b )- (4 *( a * c)));

if(a!=0){
	if(delta<0){
		printf("Delta menor que 0.\n");
		printf("Não existe raiz real, logo, x1= 0 e x2= 0.");
	}
	else if(delta==0){
		x1=(-b + sqrt (delta))/(2*a);
		printf("Delta igual a 0;\n");
		printf("x1 e x2 = %.2f",x1);
	}
	else if(delta>0){
		x1= (-b + sqrt (delta))/(2*a);
		x2= (-b - sqrt (delta))/(2*a);
		printf("Delta maior que 0;\n");
		printf("Existem duas raízes reais, logo x1= %.2f e x2= %.2f.",x1,x2);
	}
}
else{
	printf("\nValor de 'a' não pode ser 0.\n");
}

return 0;
}
