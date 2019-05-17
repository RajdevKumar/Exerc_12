#include<stdio.h>
#include<locale.h>


main(){
	//setlocale(LC_ALL,"portuguese");
	int n_apples_compradas;
	float preco;
	printf("indique o número de maças compradas: ");
	scanf("%d",&n_apples_compradas);
	if(n_apples_compradas<12)
	{
		float custo_apple =0.30;
	    preco = n_apples_compradas*custo_apple;
	
	}

	else
	{
		float custo_apple =0.25;
		preco = n_apples_compradas*custo_apple;
	
		
	}
	printf("O preço pago foi %.2f",preco);
}
