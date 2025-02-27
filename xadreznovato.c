#include <stdio.h>

#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8
#define CAVALO_MOV_X 2
#define CAVALO_MOV_Y 1

int main() {
    // Movimentação do Bispo (Diagonal Superior Direita)
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < BISPO_MOV; i++) {
        printf("Direita\n");
        printf("Cima\n");
    }
    printf("\n");

    // Movimentação da Torre (Direita)
    printf("Movimentação da Torre:\n");
    for (int i = 0; i < TORRE_MOV; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimentação da Rainha (Esquerda)
    printf("Movimentação da Rainha:\n");
    for (int i = 0; i < RAINHA_MOV; i++) {
        printf("Esquerda\n");
    }
    printf("\n");

    // Movimentação do Cavalo em L (Baixo e Esquerda) com loops aninhados (FOR e WHILE) 
    printf("Movimentação do Cavalo:\n");
    for (int i = 0; i < CAVALO_MOV_X; i++) {
        printf("Baixo\n");
    }
    int j = 0;
    while (j < CAVALO_MOV_Y) {
        printf("Esquerda\n");
        j++;
    }
    
    return 0;
}