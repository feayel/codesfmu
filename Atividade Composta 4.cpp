4) Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O 
programa deve mostrar uma mensagem de permissão de acesso ou não.

#include<stdio.h> //Atividade composta 4- reconhecer senha
#include<math.h>

int senha;

int main(){
	printf("*****************SEJA BEM-VINDO*****************\n");
	printf("INSIRA A SENHA:\n");
	scanf("%d",&senha);
	
if (senha==4531){
	printf("\n*****************ACESSO LIBERADO*****************\n");
}

else {
	printf("\n*****************SENHA INCORRETA*****************\n");
}

return 0;
}
