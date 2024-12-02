#include <stdio.h>

void cuadro(char a);

int main(){
    char a;
    printf("Ingrese el caracter:\n");
    scanf("%c",&a);
    cuadro(a);
    return 0;
}

void cuadro(char a){
    int lados;
    printf("Ingrese el tamanio de los lados:\n");
    scanf("%d",&lados);
    for (int i = 0; i < lados; i++)
    {
        for (int j = 0; j < lados; j++)
        {
            printf("%c",a);
        }
        printf("\n");   
    }
    
}