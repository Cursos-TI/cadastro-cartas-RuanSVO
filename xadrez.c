#include <stdio.h>

int main() {
    // Definindo o número de casas a serem movidas
    int casasTorre = 5;   // Torre se move 5 casas para a direita
    int casasBispo = 5;   // Bispo se move 5 casas na diagonal (cima-direita)
    int casasRainha = 8;  // Rainha se move 8 casas para a esquerda

    // =========================
    // Movimento da Torre
    // =========================
    // Usando 'for' para simular o movimento da Torre
    printf("Movimento da Torre (Direita):\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }
    printf("\n");

    // =========================
    // Movimento do Bispo
    // =========================
    // Usando 'while' para simular o movimento do Bispo
    printf("Movimento do Bispo (Diagonal Cima-Direita):\n");
    int i = 1;  // contador de casas percorridas
    while (i <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }
    printf("\n");

    // =========================
    // Movimento da Rainha
    // =========================
    // Usando 'do-while' para simular o movimento da Rainha
    printf("Movimento da Rainha (Esquerda):\n");
    int j = 1;  // contador de casas percorridas
    do {
        printf("Casa %d: Esquerda\n", j);
        j++;
    } while (j <= casasRainha);

    return 0;
}
