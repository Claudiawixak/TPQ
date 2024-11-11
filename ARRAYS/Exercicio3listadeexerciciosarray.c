//3. Média dos Elementos:
//Escreva um programa que leia 8 números inteiros, armazene-os em um array, calcule e
//imprima a média dos valores armazenados.
#include <stdio.h>

int main() {
    // Declaração das variáveis
    int numerosInteiros[8], soma = 0, mediaValores;

    // Solicita ao usuário...
    for(int i = 0; i < 8; i++)
   {
        printf("Informe o numero %d\n", i + 1);
        scanf("%d", &numerosInteiros[i]);
   }
    
     for (int i = 0; i < 8; i++)
    {
       soma = numerosInteiros[i] + soma;
    }
    mediaValores = soma / 8;
    printf ("\nOvalor da soma eh: %d", soma);
    printf ("\nOvalor da mediaValores eh: %d", mediaValores);

    return 0;
}