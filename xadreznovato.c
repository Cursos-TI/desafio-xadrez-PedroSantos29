#include <stdio.h>

int main(){
    int i;

    printf("Movimento do Bispo:\n");
   
    // mover peça Bispo: 5 casas na diagonal superior direita (usando FOR)
    for (i = 1; i < 6; i++)
    {
        printf("Diagonal superior direita - Passo %d\n", i); //Imprime a direção do movimento
    }
    printf("\n"); // Quebra Linha

    // Movimento da Torre - 5 casas para a direita (usando WHILE)
    printf("Movimento da Torre:\n");
    i = 1;
    while (i <= 5) {
        printf("Direita - Passo %d\n", i); //Imprime a direção do movimento
        i++;
    }
    printf("\n"); // Quebra Linha

    // Movimento da Rainha - 8 casas para a esquerda (usando DO WHILE)
    printf("Movimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda - Passo %d\n", i); //Imprime a direção do movimento
        i++;
    } while (i <= 8);
    printf("\n"); // Quebra Linha

    return 0;
}