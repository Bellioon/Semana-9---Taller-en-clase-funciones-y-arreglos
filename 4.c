#include <stdio.h>
#include <math.h>

float distancia(float x1, float y1, float x2, float y2);

int main(){
    float distan;
    float x1,x2,y1,y2;
    printf("Ingrese la primera coordenada bidimensional: (Primero X, luego Y):\n");
    scanf("%f%f",&x1,&y1);
    printf("Ingrese la segunda coordenada bidimensional: (Primero X, luego Y):\n");
    scanf("%f%f",&x2,&y2);
    
    distan=distancia(x1,y1,x2,y2);
    printf("La distancia entre ambos puntos es: %.2f",distan);

    return 0;
}

float distancia(float x1, float y1, float x2, float y2){
    return sqrtf((powf((x2-x1),2))+(powf((y2-y1),2)));
}