#include <stdio.h>

int numeroPerfecto(int a);

int main()
{
    for (int i = 1; i < 1000; i++)
    {
        if (numeroPerfecto(i) == 1)
        {
            printf("El numero %i es un numero perfecto.\n", i);
            printf("Sus factores son:\n");
            for (int j = 1; j < i; j++)
            {
                if (i % j == 0)
                {
                    printf("%d | ",j);
                }
            }
            printf("\n");
        }
    }

    return 0;
}

int numeroPerfecto(int a)
{
    int sumFactores=0;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            sumFactores += i;
        }
    }
    if (sumFactores == a)
    {
        return 1;
    }
    else{
        return 0;
    }
}