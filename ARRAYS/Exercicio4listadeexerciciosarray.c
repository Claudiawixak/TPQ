// 4. Contagem de Números Pares:
// Desenvolva um programa que leia 6 números inteiros, armazene-os em um array e conte
// quantos desses números são pares.
#include <stdio.h>

int main()
{
    // Declaração das variáveis
    int numerosInteiros[6], quantidadeNumerosPares = 0;

    // Solicita ao usuário...

    for (int i = 0; i < 6; i++)
    {
        printf("\n Informe o numero %d \n", i + 1);
        scanf("%d", &numerosInteiros[i]);
    }
    for (int i = 0; i < 6; i++)
    {

        if (numerosInteiros[i] % 2 == 0)
        {
            quantidadeNumerosPares++;
        }
    }

    printf("\n A quantidade de numeros pares eh: %d", quantidadeNumerosPares);

    return 0;
}