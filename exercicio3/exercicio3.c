#include <stdio.h>
#include <stdlib.h>

void inverter_vetor(int *v, int n)
{
    int *inicio = v;
    int *fim = (v + n - 1);
    int aux;

    while (inicio < fim)
    {
        aux = *inicio;
        *inicio = *fim;
        *fim = aux;

        inicio++;
        fim--;
    }
}

void imprimir_vetor(int *v, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(v + i));
    }
    printf("\n");
}

int main()
{

   int tamanho_par;
   int tamanho_impar;

    printf("Digite um tamanho par para o vetor: ");
    scanf("%d", &tamanho_par);

    int vetor_par[tamanho_par];

    for (int i = 0; i < tamanho_par; i++)
    {
        printf("Digite o valor: ");
        scanf("%d", &vetor_par[i]);
    }
    
    printf("\nVetor par original: ");
    imprimir_vetor(vetor_par, tamanho_par);
    
    inverter_vetor(vetor_par, tamanho_par);
    
    printf("Vetor par invertido: ");
    imprimir_vetor(vetor_par, tamanho_par);
    

    printf("Digite um tamanho impar para o vetor: ");
    scanf("%d", &tamanho_impar);

    int vetor_impar[tamanho_impar];

    for (int i = 0; i < tamanho_impar; i++)
    {
        printf("Digite o valor: ");
        scanf("%d", &vetor_impar[i]);
    }

    
    printf("\nVetor impar original: ");
    imprimir_vetor(vetor_impar, tamanho_impar);
    
    inverter_vetor(vetor_impar, tamanho_impar);
    
    printf("Vetor impar invertido: ");
    imprimir_vetor(vetor_impar, tamanho_impar);

    return 0;
}