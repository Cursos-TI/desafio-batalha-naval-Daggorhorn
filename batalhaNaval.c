#include <stdio.h>

int main() {
    
printf("Tabuleiro Batalha Naval\n");
char linha[10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };
// Tabuleiro de Batalha Naval em matriz 10x10
int tabuleiro[10][10];
for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
        tabuleiro[i][j] = 0; // Inicializa todas as posições com 0 (água)
    }
}

// Navio 1: horizontal na linha 1, colunas 1-3 (A2, A3, A4)
tabuleiro[0][1] = 3;
tabuleiro[0][2] = 3;
tabuleiro[0][3] = 3;

// Navio 2: vertical na coluna 5, linhas 5-7 (E6, F6, G6)
tabuleiro[4][5] = 3;
tabuleiro[5][5] = 3;
tabuleiro[6][5] = 3;

// Imprime cabeçalho das colunas
printf("  ");
for (int j = 0; j < 10; j++) {
    printf(" %c", linha[j]);
}
printf("\n");

// Imprime linhas com rótulo e valores
for (int i = 0; i < 10; i++) {
    printf("%c ", linha[i]);
    for (int j = 0; j < 10; j++) {
        printf(" %d", tabuleiro[i][j]);
    }
    printf("\n");
}

return 0;
}