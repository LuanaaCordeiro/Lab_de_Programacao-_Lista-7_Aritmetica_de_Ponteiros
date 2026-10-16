#include <stdio.h>
#include <stdlib.h>

int filtrar_positivos(int *origem, int n, int *destino)
{
    int *p_origem = origem;
    int *p_destino = destino;
    int contador = 0;

    for (int i = 0; i < n; i++)
    {
        if (*p_origem > 0)
        {
            *p_destino = *p_origem;
            p_destino++;
            contador++; 
        }
        
        p_origem++;
    }

    return contador;
}

int main()
{
    int n;

    printf("Introduza o tamanho do vetor: ");
    scanf("%d", &n);

    int origem[n];
    int destino[n];

    for (int i = 0; i < n; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &origem[i]);
    }

    int qtd_copiados = filtrar_positivos(origem, n, destino);

    printf("\nQuantidade de elementos positivos copiados: %d\n", qtd_copiados);
    
    printf("Vetor destino: ");
    for (int i = 0; i < qtd_copiados; i++)
    {
        printf("%d ", destino[i]);
    }


    return 0;
}