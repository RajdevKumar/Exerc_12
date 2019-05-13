#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"portuguese");
	float angulos[3];
	printf("digite a amplitude de um grau: ");
	scanf("%f",&angulos[0]);
	printf("\ndigite a amplitude de um grau");
	scanf("%f",&angulos[1]);
		printf("\ndigite a amplitude de um grau");
	scanf("%f",&angulos[2]);
	 if((angulos[0]+angulos[1]+angulos[2])>180){
		char triangulo[30] = "Não existe";
		printf("O triangulo %s",triangulo);
	}
	else if(angulos[0]==90 || angulos[1]==90 || angulos[2]==90){
		char triangulo[30] = "Retangulo";
		printf("\n o Triango é %s ",triangulo);
		
	}
	else if(angulos[0]>90 || angulos[1]>90 || angulos[2]>90){
		char triangulo[30] = "Obtusângulo";
		printf("\n o Triango é %s ",triangulo);
		
	}
	else if(angulos[0]<90 && angulos[1]<90 && angulos[2]<90){
		char triangulo[30] = "Acutangulo";
		printf("\n o Triango é %s ",triangulo);	
	}
	
}
