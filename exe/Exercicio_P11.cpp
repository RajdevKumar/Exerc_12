#include<stdio.h>
#include<locale.h>
#include<string.h>
main()
{
    setlocale(LC_ALL,"portuguese");
    int codigo;
    char classificacao[100];
    printf("digite o código do produto: ");
    scanf("%d",&codigo);

    switch (codigo)
    {
    case 1:
    case 2:
    case 3:
        strcpy(classificacao,"Alimentação");
        break;
    case 4:
    case 5:
        strcpy(classificacao,"Produtos de Higiene Pessoal");
        break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    strcpy(classificacao,"Artigos para o Lar");
    break;
    case 13:
    case 14:
     strcpy(classificacao,"Vestuário");
     break;

     case 15:
     strcpy(classificacao,"Outros");
     break;
    
    default:
    strcpy(classificacao,"SEM");
        break;
    }

    printf("%s",classificacao);
    
}
