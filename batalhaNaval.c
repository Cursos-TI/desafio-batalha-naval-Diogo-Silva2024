#include <stdio.h>

// Definições de constantes para o Nível Novato (Tab. 5x5)
#define TAMANHO_TABULEIRO_NOVATO 5
#define TAMANHO_NAVIO_NOVATO 3
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

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    return 0;
}
