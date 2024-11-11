//6. Fusão de Dois Arrays:
//Crie um programa que leia dois arrays de 5 elementos cada, e depois crie um terceiro
//array que contenha os elementos dos dois primeiros arrays, resultando em um array de
//10 elementos.
#include <stdio.h>

int main() {
    // Declaração das variáveis
    int arrayUm[5], arrayDois[5], terceiroArray[10];

    // Para o primeiro array:
    for (int i = 0; i < 5; i++){
        printf("\nInforme o numero%d do primeiro array:\n", i+1);
        scanf("%d", &arrayUm[i]); 
    }
    
    //Para o segundo array:
    for (int i = 0; i < 5; i++)
    {
        printf("\nInforme o numero%d do segundo array:\n", i+1);
        scanf("%d", &arrayDois[i]);
    }

    //Para o terceiro array:
    for (int i = 0; i < 10; i++)
    {
        terceiroArray[i] = arrayUm[i];
    } 
    
    for (int i = 0; i < 5; i++)
    {
       terceiroArray[i+5] = arrayDois[i];
    }
    
    printf("\nA juncao dos dois arrays eh igual ah: \n");

    for (int i = 0; i < 10; i++)
    {
        printf ("%d ", terceiroArray[i]);
    }
    

    return 0;
}