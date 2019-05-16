#include<stdio.h>
#include<locale.h>
main()
{
    setlocale(LC_ALL,"portuguese");
    int numero1,numero2,numero3;
    printf("Insira 3 números: ");
    scanf("%d%d%d",&numero1,&numero2,&numero3);

    if(numero1==numero2 && numero1==numero3)
        printf("três são números iguais");

    else{

        if(numero1>numero2 && numero1>numero3)
        {
            if(numero2>numero3)
            {
                printf("Ordem cresente é %d<%d<%d\n",numero3,numero2,numero1);
                printf("ordem decresente é %d>%d>%d\n",numero1,numero2,numero3);
            }
            else 
            {
                printf("Ordem cresente é %d<%d<%d\n",numero2,numero3,numero1);
                printf("ordem decresente é %d>%d>%d\n",numero1,numero3,numero2);
            }
        }


        if(numero2>numero1 && numero2>numero3)
        {
            if(numero1>numero3)
            {
                printf("Ordem cresente é %d<%d<%d\n",numero3,numero1,numero2);
                printf("ordem decresente é %d>%d>%d\n",numero2,numero1,numero3);
            }
            else 
            {
                printf("Ordem cresente é %d<%d<%d\n",numero1,numero3,numero2);
                printf("ordem decresente é %d>%d>%d\n",numero2,numero3,numero1);
            }
        }


        if(numero3>numero1 && numero3>numero2)
        {
            if(numero1>numero2)
            {
            
                printf("Ordem cresente é %d<%d<%d\n",numero2,numero1,numero3);
                printf("ordem decresente é %d>%d>%d\n",numero3,numero1,numero2);
            }
            else 
            {
                printf("Ordem cresente é %d<%d<%d\n",numero1,numero2,numero3);
                printf("ordem decresente é %d>%d>%d\n",numero3,numero2,numero1);
            }
        }

        }
        
}
