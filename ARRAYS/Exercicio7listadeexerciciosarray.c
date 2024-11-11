// 7. Cálculo da Soma e do Produto dos Elementos:
// Escreva um programa que leia 5 números inteiros e armazene-os em um array. Em
// seguida, calcule e imprima a soma e o produto de todos os elementos do array.

#include <stdio.h>

int main()
{
    // Declaração das variáveis
    int numerosInteiros[5], somaDosNumeros = 0, produtoDosNumeros = 1;

    // Peça ao usuário ...
    for (int i = 0; i < 5; i++)
    {
        printf("\nInforme o numero %d: \n", i + 1);
        scanf("%d", &numerosInteiros[i]);
    }

    // Execução
    for (int i = 0; i < 5; i++)
    {
        somaDosNumeros = somaDosNumeros + numerosInteiros[i];
        produtoDosNumeros = produtoDosNumeros * numerosInteiros[i];
    }

    printf("\nA soma dos numeros inteiros: %d\n", somaDosNumeros);
    printf("\nO produto dos numeros inteiros: %d\n", produtoDosNumeros);

    return 0;
}