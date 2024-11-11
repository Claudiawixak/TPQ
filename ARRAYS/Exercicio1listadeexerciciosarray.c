// 1. Soma dos Elementos de um Array:
// Escreva um programa em C que leia 5 números inteiros, armazene-os em um array e
// calcule a soma de todos os elementos do array.
#include <stdio.h>

int main()
{
    // Declaração das variáveis
    int numerosInteiros[5], soma = 0;

    // Solicita ao usuário...
    for (int i = 0; i < 5; i++)
    {
        printf("Informe o numero %d\n", i + 1);
        scanf("%d", &numerosInteiros[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        soma = numerosInteiros[i] + soma;
    }
    
    printf ("\no valor da soma eh: %d", soma);

    return 0;
}