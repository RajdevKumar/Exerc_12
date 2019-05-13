/*

Escreva um programa que verifique a validade de uma senha fornecida pelo utilizador. A senha válida
é o número 1234. Devem ser impressas as seguintes mensagens:
- ACESSO PERMITIDO caso a senha seja válida.
- ACESSO NEGADO caso a senha seja inválida.
Guarde o programa com o nome Exercicio_P9.




*/ 



#include<stdio.h>
#include<locale.h>
#include<string.h>
main(){
	setlocale(LC_ALL,"portuguese");
	char in_senha[100];
	char log_senha[]="1234";
	printf("Digite a senha:");
	gets(in_senha);
	int i = strcmp(in_senha,log_senha);
	if(i==0)
	printf("Acesso Permitido");
	else{
	
	printf("Acesso negado\n");
	puts(in_senha);
	printf("\n");
	puts(log_senha);
}
}
