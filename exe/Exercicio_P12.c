#include<stdio.h>
#include<locale.h>
#include<string.h>
main()
{
    setlocale(LC_ALL,"portuguese");
    int codigo;
    char classificacao[100];
    printf("digite um valor: ");
    scanf("%d",&codigo);

    switch (codigo)
    {
    case 1:
            strcpy(classificacao,"Detectável apenas pelo sismógrafo");
            break;
    case 2:
                    strcpy(classificacao,"Sentido por algumas pessoas");
                break;
    case 3:
        strcpy(classificacao,"Sentido pela maioria das pessoas");
        break;
    case 4:
        strcpy(classificacao,"Vidros partidos");
        break;
    case 5:
        strcpy(classificacao,"Queda de mobiliário");
        break;
    case 6:
        strcpy(classificacao,"Fendas no chão e queda de mobiliário");
        break;
    case 7:
        strcpy(classificacao,"Queda de pontes e barragens");
        break;
    case 8:
        strcpy(classificacao,"Desastre em larga escala");
        break;
    
    default:
    strcpy(classificacao,"Valor apenas de 1 a 8");
        break;
    }

    printf("%s\n",classificacao);
    
}
