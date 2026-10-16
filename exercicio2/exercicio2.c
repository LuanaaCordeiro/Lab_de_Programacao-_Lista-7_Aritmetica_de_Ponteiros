#include <stdio.h>
#include <stdlib.h>

float calcular_media_deslocamento(float *dados, int n)
{
    float soma = 0.0;
    float media;
    
    for (int i = 0; i < n; i++)
    {
        soma += *(dados + i); 
    }
    
    media = soma/n;
    
    return media;
}

int main()
{
    float notas[8];
    int n = 8;

    for (int i = 0; i < n; i++)
    {
        printf("Digite a nota: ");
        scanf("%f", &notas[i]);
    }

    printf("A media das notas eh: %f", calcular_media_deslocamento(notas, n));

    return 0;
}