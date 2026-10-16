#include <stdio.h>
#include <stdlib.h>

int eh_palindromo_vetor(int *v, int n)
{
    int *inicio = v;
    int *fim = v + n - 1;

    while (inicio < fim)
    {
        if (*inicio != *fim)
        {
            return 0;
        }
        inicio++;
        fim--;
    }

    return 1;
}

int main()
{
   
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];

    for (int i = 0; i < n; i++)
    {
        printf("Digite os valores: ");
        scanf("%d", &v[i]);
    }

    int resultado = eh_palindromo_vetor(v, n);

    if (resultado == 1)
    {
        printf("O vetor eh um palindromo!\n");
    }
    else
    {
        printf("O vetor nao eh um palindromo.\n");
    }

    return 0;
}