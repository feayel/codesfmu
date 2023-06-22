6) Faça um programa que leia três valores e apresente os em ordem crescente.

#include<stdio.h> //Atividade 6
#include<locale.h>

int n1,n2,n3;

int main(){
setlocale(LC_ALL, "Portuguese");

	printf("Insira 3 números da sua escolha:\n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);
	
if (n1 <= n2 && n2 <= n3)
    {
      printf("A ordem crescente: %d, %d, %d.\n", n1, n2, n3);
    }
  else if (n1 <= n3 && n3 <= n2)
    {
      printf("A ordem crescente: %d, %d, %d.\n", n1, n3, n2);
    }
  else if (n2 <= n1 && n1 <= n3)
    {
      printf("A ordem crescente: %d, %d, %d.\n", n2, n1, n3);
    }
  else if (n2 <= n3 && n3 <= n1) 
    {
      printf("A ordem crescente: %d, %d, %d.\n", n2, n3, n1);
    }
  else if (n3 <= n1 && n1 <= n2) 
    {
      printf("A ordem crescente: %d, %d, %d.\n", n3, n1, n2);
    }
else /* n3 <= n2 && n2 < n1 */
    {
      printf("A ordem crescente: %d, %d, %d.\n", n3, n2, n1);
}

  return 0;
}
