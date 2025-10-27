#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Definições de constantes para o Nível Novato (Tab. 5x5)
#define TAMANHO_TABULEIRO 5
#define TAMANHO_NAVIO 3
#define AGUA 0
#define NAVIO 3

// Função de Ajuda para exibir o tabuleiro
void exibir_tabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("   ");
    for (int c = 0; c < TAMANHO_TABULEIRO; c++) {
        printf("%d ", c);
    }
    printf("\n");
    
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%d |", i); 
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]); 
        }
        printf("|\n");
    }
}
    
int main() {
    // Nível Novato - Posicionamento dos Navios

    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Tabuleiro 5x5 inicializado com 0 (Água)
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    // Definição das coordenadas
    // Navio 1: Horizontal (Tamanho 3)
    int n1_lin = 1; // Linha 1
    int n1_col = 0; // Coluna 0 (Vai de (1,0) até (1,2))

    // Navio 2: Vertical (Tamanho 3)
    // Coordenadas que não se sobrepõem: (2,3), (3,3), (4,3)
    int n2_lin = 2; // Linha 2
    int n2_col = 3; // Coluna 3 
    
    printf("--- Posicionamento dos Navios ---\n");
    
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    
    // NAVIO 1: HORIZONTAL (Tamanho 3)
    printf("\nNavio 1 (Horizontal) - Coordenadas:\n");
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        int linha_atual = n1_lin;
        int coluna_atual = n1_col + i;
        
        // Coloca o valor do navio (3) no tabuleiro
        tabuleiro[linha_atual][coluna_atual] = NAVIO;
        
        // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
        printf(" -> (%d, %d)\n", linha_atual, coluna_atual);
    }

    // NAVIO 2: VERTICAL (Tamanho 3)
    printf("\nNavio 2 (Vertical) - Coordenadas:\n");
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        int linha_atual = n2_lin + i;
        int coluna_atual = n2_col;

        // Coloca o valor do navio (3) no tabuleiro
        tabuleiro[linha_atual][coluna_atual] = NAVIO;
        
        // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
        printf(" -> (%d, %d)\n", linha_atual, coluna_atual);
    }
    
    // Exibição do Tabuleiro 5x5
    printf("\n--- Tabuleiro Final (Nível Novato 5x5) ---\n");
    exibir_tabuleiro(tabuleiro);
    printf("\nLegenda: 0 = Água | 3 = Navio\n");

    
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
