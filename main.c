#include <stdio.h>

// Constantes de movimento
const int MOV_BISPO = 5;
const int MOV_TORRE = 5;
const int MOV_RAINHA = 8;

int main() {
    // Bispo: diagonal superior direita (Cima + Direita)
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < MOV_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    printf("\n");

    // Torre: apenas Direita (5 vezes)
    printf("Movimentação da Torre:\n");
    int j = 0;
    while (j < MOV_TORRE) {
        printf("Direita\n");
        j++;
    }

    printf("\n");

    // Rainha: apenas Esquerda (8 vezes)
    printf("Movimentação da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < MOV_RAINHA);

    return 0;
}
