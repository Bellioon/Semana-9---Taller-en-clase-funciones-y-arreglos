#include <stdio.h>

int calidad_Puntos();

int main(){
    int nota, calidad=0;
    do
    {
        printf("Ingrese la nota del alumno:\n");
        scanf("%d",&nota);
        if(nota<0||nota>100)
            printf("Error, ingrese un valor dentro del rango de calificacion: 0-100\n");
    } while (nota<0||nota>100);
    calidad=calidad_Puntos(nota);
    printf("La calidad del promedio de la nota es: %d\n",calidad);
    return 0;
}

int calidad_Puntos(int nota){
    if (nota>=90&&nota<=100)
    {
        return 4;
    }
    if (nota>=80&&nota<=89)
    {
        return 3;
    }
    if (nota>=70&&nota<=79)
    {
        return 2;
    }
    if (nota>=60&&nota<=69)
    {
        return 1;
    }
    if (nota<60)
    {
        return 0;
    }
}