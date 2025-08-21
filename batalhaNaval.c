#include <stdio.h>

int main() {
    // Tabuleiro de Batalha Naval 10x10
    printf("Tabuleiro Batalha Naval\n");
    char coluna[10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };
    int tabuleiro[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;// Inicializa o tabuleiro com água (0)
        }
    }
    // Valores: 0 = água, 1 = especial, 3 = navio
    // Navio 1: horizontal na linha 1 (B1, C1, D1)
    tabuleiro[0][1] = 3;
    tabuleiro[0][2] = 3;
    tabuleiro[0][3] = 3;
    // Navio 2: vertical na coluna F (F5, F6, F7)
    tabuleiro[4][5] = 3;
    tabuleiro[5][5] = 3;
    tabuleiro[6][5] = 3;
    // Navio 3: diagonal cima direita (H3, I2, J1)
    tabuleiro[2][7] = 3;
    tabuleiro[1][8] = 3;
    tabuleiro[0][9] = 3;
    // Navio 4: diagonal cima esquerda (D10, C9, B8)
    tabuleiro[9][3] = 3;
    tabuleiro[8][2] = 3;
    tabuleiro[7][1] = 3;

    // Imprime cabeçalho das colunas (A-J)
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf(" %c", coluna[j]);
    }
    printf("\n");

    // Imprime linhas numeradas de 1 a 10
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}