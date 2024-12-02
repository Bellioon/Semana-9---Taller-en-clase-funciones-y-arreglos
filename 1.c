#include <stdio.h>
#define MAX 5

void par(int arr[]);

int main()
{
    int serieDeNumeros[MAX];
    for (int i = 0; i < MAX; i++)
    {
        printf("Ingrese el numero %i de la serie:\n",i+1);
        scanf("%d",&serieDeNumeros[i]);
    }
    par(serieDeNumeros);

    return 0;
}

void par(int arr[]){
    for (int i = 0; i < MAX; i++)
    {
        if (arr[i]%2==0)
        {
            printf("El numero %d es PAR.\n",arr[i]);
        }
        else
        {
            printf("El numero %d es IMPAR.\n",arr[i]);
        }
    }
}