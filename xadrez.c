#include <stdio.h>

// Programa para simular a movimentação de peças de xadrez

int main() {
    const int CASAS_BISPO = 5;
    const int CASAS_TORRE = 5;
    const int CASAS_RAINHA = 8;
    const int MOVIMENTOS_CAVALO_L = 3;

    printf("Movimento do Bispo (5 casas na diagonal superior direita):\n");
    for (int i = 1; i <= CASAS_BISPO; i++) {
        printf("Passo %d do Bispo:\n", i);
        printf("  Cima\n");
        printf("  Direita\n");
    }
    printf("\n");

    printf("Movimento da Torre (5 casas para a direita):\n");
    int contador_torre = 0;
    while (contador_torre < CASAS_TORRE) {
        printf("Passo %d da Torre: Direita\n", contador_torre + 1);
        contador_torre++;
    }
    printf("\n");

    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int contador_rainha = 0;
    do {
        printf("Passo %d da Rainha: Esquerda\n", contador_rainha + 1);
        contador_rainha++;
    } while (contador_rainha < CASAS_RAINHA);
    printf("\n");

    printf("Movimento do Cavalo (2 p/ baixo, 1 p/ esquerda):\n");
    for (int i = 1; i <= MOVIMENTOS_CAVALO_L; i++) {
        printf("Movimento em L #%d\n", i);

        for (int j = 1; j <= 2; j++) {
            printf("  Passo vertical: Baixo\n");
        }
        
        int passo_horizontal = 0;
        while(passo_horizontal < 1){
            printf("  Passo horizontal: Esquerda\n");
            passo_horizontal++;
        }
        printf("\n");
    }

    return 0;
}
