#include <stdio.h>

// Definições de constantes para o Nível Novato (Tab. 5x5)
#define TAMANHO_TABULEIRO_NOVATO 5
#define TAMANHO_NAVIO_NOVATO 3

// --- NOVAS DEFINIÇÕES PARA O NÍVEL AVENTUREIRO ---
#define TAMANHO_TABULEIRO_AVENTUREIRO 10
#define TAMANHO_NAVIO_AVENTUREIRO 3

// Valores de representação
#define AGUA 0
#define NAVIO 3


// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    // Nível Novato - Posicionamento dos Navios
    // Neste nível, focamos em um tabuleiro 5x5 e posicionamento Horizontal/Vertical.
    
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    int tabuleiro_novato[TAMANHO_TABULEIRO_NOVATO][TAMANHO_TABULEIRO_NOVATO] = {0};

    // Coordenadas iniciais para os navios (Inseridas manualmente)
    // Navio 1: Horizontal (Tamanho 3)
    int n1_lin = 1; // Linha inicial (Y)
    int n1_col = 0; // Coluna inicial (X)
    
    // Navio 2: Vertical (Tamanho 3)
    int n2_lin = 2; // Linha inicial (Y)
    int n2_col = 3; // Coluna inicial (X)
    
    printf("--- NÍVEL NOVATO: Posicionamento Básico (5x5) ---\n");

    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    
    // Posicionamento e Exibição do Navio 1 (Horizontal)
    printf("\n[Navio 1: Horizontal - Inicio: (X=%d, Y=%d)]\n", n1_col, n1_lin);
    for (int i = 0; i < TAMANHO_NAVIO_NOVATO; i++) {
        int linha_atual = n1_lin;
        int coluna_atual = n1_col + i; // A coluna (X) avança
        
        tabuleiro_novato[linha_atual][coluna_atual] = NAVIO;
        
        // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
        printf(" -> Parte %d em: (X=%d, Y=%d)\n", i + 1, coluna_atual, linha_atual); 
    }

    // Posicionamento e Exibição do Navio 2 (Vertical)
    printf("\n[Navio 2: Vertical - Inicio: (X=%d, Y=%d)]\n", n2_col, n2_lin);
    for (int i = 0; i < TAMANHO_NAVIO_NOVATO; i++) {
        int linha_atual = n2_lin + i; // A linha (Y) avança
        int coluna_atual = n2_col;    
        
        tabuleiro_novato[linha_atual][coluna_atual] = NAVIO;
        
        // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
        printf(" -> Parte %d em: (X=%d, Y=%d)\n", i + 1, coluna_atual, linha_atual); 
    }
    
    // Exibição do Tabuleiro Final
    printf("\n--- Visualização do Tabuleiro 5x5 ---\n");
    printf("   0 1 2 3 4 (X)\n");
    
    for (int i = 0; i < TAMANHO_TABULEIRO_NOVATO; i++) {
        printf("%d |", i); // Número da Linha (Y)
        for (int j = 0; j < TAMANHO_TABULEIRO_NOVATO; j++) {
            printf("%d ", tabuleiro_novato[i][j]); 
        }
        printf("|\n");
    }
    printf("Legenda: %d = Água | %d = Navio\n", AGUA, NAVIO);
    printf("\n");

    // --------------------------------------------------------------------------------
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // --------------------------------------------------------------------------------
    
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    int tabuleiro_aventureiro[TAMANHO_TABULEIRO_AVENTUREIRO][TAMANHO_TABULEIRO_AVENTUREIRO] = {0};

    // Coordenadas dos 4 navios (tamanho 3)
    // Navio A: Horizontal
    int na_lin = 0, na_col = 0;
    // Navio B: Vertical
    int nb_lin = 6, nb_col = 9;
    // Navio C: Diagonal Principal (Linha e Coluna aumentam)
    int nc_lin = 3, nc_col = 3;
    // Navio D: Diagonal Secundária (Linha aumenta, Coluna diminui)
    int nd_lin = 1, nd_col = 7; 
    
    printf("========================================================\n");
    printf("--- NÍVEL AVENTUREIRO: Posicionamento Diagonal (10x10) ---\n");
    printf("========================================================\n");

    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    
    // 1. Posicionamento Navio A (Horizontal)
    printf("\n[Navio A: Horizontal - Inicio: (X=%d, Y=%d)]\n", na_col, na_lin);
    for (int i = 0; i < TAMANHO_NAVIO_AVENTUREIRO; i++) {
        tabuleiro_aventureiro[na_lin][na_col + i] = NAVIO;
        printf(" -> Parte %d em: (X=%d, Y=%d)\n", i + 1, na_col + i, na_lin);
    }
    
    // 2. Posicionamento Navio B (Vertical)
    printf("\n[Navio B: Vertical - Inicio: (X=%d, Y=%d)]\n", nb_col, nb_lin);
    for (int i = 0; i < TAMANHO_NAVIO_AVENTUREIRO; i++) {
        tabuleiro_aventureiro[nb_lin + i][nb_col] = NAVIO;
        printf(" -> Parte %d em: (X=%d, Y=%d)\n", i + 1, nb_col, nb_lin + i);
    }

    // 3. Posicionamento Navio C (Diagonal Principal: Y++ e X++)
    printf("\n[Navio C: Diagonal Principal - Inicio: (X=%d, Y=%d)]\n", nc_col, nc_lin);
    for (int i = 0; i < TAMANHO_NAVIO_AVENTUREIRO; i++) {
        tabuleiro_aventureiro[nc_lin + i][nc_col + i] = NAVIO;
        printf(" -> Parte %d em: (X=%d, Y=%d)\n", i + 1, nc_col + i, nc_lin + i);
    }

    // 4. Posicionamento Navio D (Diagonal Secundária: Y++ e X--)
    printf("\n[Navio D: Diagonal Secundária - Inicio: (X=%d, Y=%d)]\n", nd_col, nd_lin);
    for (int i = 0; i < TAMANHO_NAVIO_AVENTUREIRO; i++) {
        tabuleiro_aventureiro[nd_lin + i][nd_col - i] = NAVIO;
        printf(" -> Parte %d em: (X=%d, Y=%d)\n", i + 1, nd_col - i, nd_lin + i);
    }


    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    printf("\n--- Visualização do Tabuleiro 10x10 (Aventureiro) ---\n");
    printf("     0  1  2  3  4  5  6  7  8  9 (X)\n");
    
    for (int i = 0; i < TAMANHO_TABULEIRO_AVENTUREIRO; i++) {
        printf("%2d |", i); // Número da Linha (Y)
        for (int j = 0; j < TAMANHO_TABULEIRO_AVENTUREIRO; j++) {
            printf("%2d ", tabuleiro_aventureiro[i][j]); 
        }
        printf("|\n");
    }
    printf("Legenda: %d = Água | %d = Navio\n", AGUA, NAVIO);
    printf("\n");


    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    return 0;
}
