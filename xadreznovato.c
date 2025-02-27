#include <stdio.h>

#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8
#define CAVALO_MOV_X 2
#define CAVALO_MOV_Y 1

// Função recursiva para o movimento do Bispo
void mover_bispo(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    printf("Cima\n");
    mover_bispo(passos - 1);
}

// Função recursiva para o movimento da Torre
void mover_torre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    mover_torre(passos - 1);
}

// Função recursiva para o movimento da Rainha
void mover_rainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    mover_rainha(passos - 1);
}

int main() {
    // Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    mover_bispo(BISPO_MOV);
    printf("\n");

    // Movimentação da Torre
    printf("Movimentação da Torre:\n");
    mover_torre(TORRE_MOV);
    printf("\n");

    // Movimentação da Rainha
    printf("Movimentação da Rainha:\n");
    mover_rainha(RAINHA_MOV);
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