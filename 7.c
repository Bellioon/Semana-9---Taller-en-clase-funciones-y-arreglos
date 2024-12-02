#include <stdio.h>

int multiplo(int a, int b);

int main(){
    int pares;
    printf("Ingrese cuantos pares de numeros quiere ingresar:\n");
    scanf("%d",&pares);
    for (int i = 0; i < pares; i++)
    {
        int a,b,valor;
        printf("Ingrese el par de numeros %d:\n",i+1);
        scanf("%d%d",&a,&b);
        valor=multiplo(a,b);
        if (valor==1)
        {
            printf("El segundo numero es multiplo del primero.\n");
        }
        else{
            printf("El segundo numero no es multiplo del primero.\n");
        }
    }
    
    return 0;
}

int multiplo(int a, int b){
    if (b%a==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}