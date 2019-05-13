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
