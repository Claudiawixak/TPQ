
#include <stdio.h>
//4. Contagem de Números Pares:
//Desenvolva um programa que leia 6 números inteiros, armazene-os em um array e conte
//quantos desses números são pares.
int main() {
    // Declaração das variáveis
    int numerosInteiros[6], quantidadedeNumerosPares = 0;
    

    // Solicita ao usuário...

    for (int i =0; i < 6; i++)
    {
    printf("\nInforme o numero %d\n", i+1);
    scanf("%d", &numerosInteiros[i]);

    }

    for (int i = 0; i < 6; i++)
    {
        if(numerosInteiros[i] %2 == 0)
        {
            quantidadedeNumerosPares++;
        }
    }
    

    printf("\nA quantidade de numeros pares eh: %d", quantidadedeNumerosPares);
    
    return 0;
} 