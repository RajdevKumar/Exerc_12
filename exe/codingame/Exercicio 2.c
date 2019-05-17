#include<stdio.h>
#include<locale.h>
#include<math.h>
void main()
{
    setlocale(LC_ALL,"portuguese");

    int energia_comodo[5] = 
    {
        12,
        15,
        18,
        20,
        22,
    

    };

    struct
    {
        int tipo_comodo;
        float largura;
        float comprimento;
    }Comodo;

    printf("Indique O Tipo de Comodo (0-4): ");
    scanf("%d",&Comodo.tipo_comodo);

    if(Comodo.tipo_comodo<0 || Comodo.tipo_comodo>4) return;


    printf("\nIndique a Largura do cômodo (m): ");
    scanf("%f",&Comodo.largura);

    printf("\nIndique a Comprimento do cômodo (m): ");
    scanf("%f",&Comodo.comprimento);

    float areaComodo = ceil(Comodo.comprimento*Comodo.largura);

    printf("A Área do comodo é %.2f\n",areaComodo);

    float Energia_gastar = ceil(energia_comodo[Comodo.tipo_comodo]*areaComodo);

    printf("A Energia gastada pelo comodo é %.2f\n",Energia_gastar);

    float numero_lampadas_necessarias = ceil(Energia_gastar/60);

    if(numero_lampadas_necessarias==1)
        printf("vai ser necessária %.0f lampada de 60 wats",numero_lampadas_necessarias);
    else
        printf("vão ser necessárias %.0f lampadas de 60 wats",numero_lampadas_necessarias);
    

    
}
