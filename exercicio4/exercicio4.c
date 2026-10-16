#include <stdio.h>
#include <stdlib.h>

int encontrar_indice_maior(int *v, int n, int *valor_maior)
{

    int *ptr_maior = v;

    for (int i = 1; i < n; i++)
    {
        if (*(v + i) > *ptr_maior)
        {
            ptr_maior = v + i;
        }
    }

    *valor_maior = *ptr_maior;

    return (int)(ptr_maior - v);
}

int main()
{

    int vetor[10];
    int tamanho = 10;
    int maior_valor;
    int indice;

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite os valores: ");
        scanf("%d", &vetor[i]);
    }

    indice = encontrar_indice_maior(vetor, tamanho, &maior_valor);

    printf("\nMaior valor encontrado: %d\n", maior_valor);
    printf("Indice do maior elemento: %d\n", indice);
    return 0;
}