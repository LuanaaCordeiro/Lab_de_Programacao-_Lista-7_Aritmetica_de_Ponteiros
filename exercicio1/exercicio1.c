#include <stdio.h>
#include <stdlib.h>

void imprimir_vetor_ponteiro(int *v, int tamanho)
{

    for (int i = 0; i < tamanho; i++)
    {

        printf("O valor eh: %d\n", *v);
        v++;
    }
}

int main()
{
    int v[6];
    int tamanho = 6;

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o valor do numero: ");
        scanf("%d", &v[i]);
    }

    imprimir_vetor_ponteiro(v, tamanho);

    return 0;
}