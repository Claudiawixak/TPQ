//5. Invertendo a Ordem dos Elementos:
//Faça um programa que leia 7 números inteiros e os armazene em um array. O programa
//deve, em seguida, imprimir os elementos na ordem inversa à da leitura
#include <stdio.h>

int main() {
    // Declaração das variáveis 
    int numerosInteiros[7];

    // Solicita ao usuário...
    for (int i = 0; i < 7; i++)
    {
        printf("Infome o numero: %d \n", i + 1);
        scanf("%d", &numerosInteiros[i]);
    }

    printf("\nO array de tras para frente eh: \n");

    for (int i = 6; i >= 0; i--)
    {
        printf("\n %d", numerosInteiros[i]);
        
    }
    
    
    printf("\nAordem inversa eh:");

    return 0;
}