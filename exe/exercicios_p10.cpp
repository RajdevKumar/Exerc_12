#include<stdio.h>
#include<locale.h>
#include<string.h>
main(){
	setlocale(LC_ALL,"portuguese");
	int n_apples_compadas;
	printf("indique o n�mero de ma�as compradas: ");
	scanf("%d",&n_apples_compadas);
	if(n_apples_compadas<12){
		float custo_apple =0.30;
		float preco = n_apples_compadas*custo_apple;
		printf("O pre�o pago foi %.2f",preco);
		
		
	}
	else{
				float custo_apple =0.25;
		float preco = n_apples_compadas*custo_apple;
		printf("O pre�o pago foi %.2f",preco);
		
	}
	
}
