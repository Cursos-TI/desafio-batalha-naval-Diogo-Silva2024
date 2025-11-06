#include <stdio.h>
#include <stdlib.h> // Incluído para a função abs() usada no Nível Mestre

// Definições de constantes para o Nível Novato (Tab. 5x5)
#define TAMANHO_TABULEIRO_NOVATO 5
#define TAMANHO_NAVIO_NOVATO 3

// --- NOVAS DEFINIÇÕES PARA O NÍVEL AVENTUREIRO/MESTRE ---
#define TAMANHO_TABULEIRO_AVENTUREIRO 10
#define TAMANHO_NAVIO_AVENTUREIRO 3

// Valores de representação
#define AGUA 0
#define NAVIO 3
#define HABILIDADE_ESPECIAL 1 // Novo valor para marcar áreas de habilidade

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
    printf("   0 1 2 3 4 (X)\n");
    
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
    printf("     0  1  2  3  4  5  6  7  8  9 (X)\n");
    
    for (int i = 0; i < TAMANHO_TABULEIRO_AVENTUREIRO; i++) {
        printf("%2d |", i); // Número da Linha (Y)
        for (int j = 0; j < TAMANHO_TABULEIRO_AVENTUREIRO; j++) {
            printf("%2d ", tabuleiro_aventureiro[i][j]); 
        }
        printf("|\n");
    }
    printf("Legenda: %d = Água | %d = Navio\n", AGUA, NAVIO);
    printf("\n");


    // --------------------------------------------------------------------------------
    // Nível Mestre - Habilidades Especiais com Matrizes
    // --------------------------------------------------------------------------------
    
    printf("========================================================\n");
    printf("--- NÍVEL MESTRE: Habilidades Especiais (10x10) ---\n");
    printf("========================================================\n");

    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    int tabuleiro_habilidades[TAMANHO_TABULEIRO_AVENTUREIRO][TAMANHO_TABULEIRO_AVENTUREIRO] = {0};
    int tamanho_mestre = TAMANHO_TABULEIRO_AVENTUREIRO;
    
    // --- HABILIDADE 1: CRUZ (Centro: 5,5, Raio: 3) ---
    int centro_cruz_x = 5;
    int centro_cruz_y = 5;
    int raio_cruz = 3;
    
    printf("\n[Habilidade 1: Cruz - Centro: (X=%d, Y=%d), Raio: %d]\n", centro_cruz_x, centro_cruz_y, raio_cruz);
    
    // 1. Marcar o ponto central
    tabuleiro_habilidades[centro_cruz_y][centro_cruz_x] = HABILIDADE_ESPECIAL;

    // 2. Marcar a linha vertical e horizontal (utilizando loops)
    for (int i = 1; i <= raio_cruz; i++) {
        // Vertical (Y)
        if (centro_cruz_y - i >= 0) { // Para cima
            tabuleiro_habilidades[centro_cruz_y - i][centro_cruz_x] = HABILIDADE_ESPECIAL;
        }
        if (centro_cruz_y + i < tamanho_mestre) { // Para baixo
            tabuleiro_habilidades[centro_cruz_y + i][centro_cruz_x] = HABILIDADE_ESPECIAL;
        }

        // Horizontal (X)
        if (centro_cruz_x - i >= 0) { // Para esquerda
            tabuleiro_habilidades[centro_cruz_y][centro_cruz_x - i] = HABILIDADE_ESPECIAL;
        }
        if (centro_cruz_x + i < tamanho_mestre) { // Para direita
            tabuleiro_habilidades[centro_cruz_y][centro_cruz_x + i] = HABILIDADE_ESPECIAL;
        }
    }


    // --- HABILIDADE 2: CONE (Início: 0, 0, Profundidade: 4, Direção: Diagonal Principal) ---
    int inicio_cone_x = 0;
    int inicio_cone_y = 0;
    int profundidade_cone = 4; 
    
    printf("\n[Habilidade 2: Cone - Início: (X=%d, Y=%d), Profundidade: %d (Diagonal Principal)]\n", inicio_cone_x, inicio_cone_y, profundidade_cone);
    
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    for (int i = 0; i < profundidade_cone; i++) {
        int centro_y = inicio_cone_y + i;
        int centro_x = inicio_cone_x + i;
        
        // A largura do cone aumenta (2*i + 1)
        for (int k = -i; k <= i; k++) {
            int y_atual = centro_y;
            int x_atual = centro_x + k; 
            
            // Verifica limites
            if (y_atual < tamanho_mestre && y_atual >= 0 && x_atual < tamanho_mestre && x_atual >= 0) {
                 tabuleiro_habilidades[y_atual][x_atual] = HABILIDADE_ESPECIAL;
            }
        }
    }


    // --- HABILIDADE 3: OCTAEDRO (Aproximação 2D: Losango de Raio 3) ---
    // O losango (diamante) é a projeção 2D de um octaedro, definida pela Distância de Manhattan.
    int centro_octa_x = 7;
    int centro_octa_y = 2;
    int raio_octa = 3; 
    
    printf("\n[Habilidade 3: Octaedro (Losango) - Centro: (X=%d, Y=%d), Raio: %d]\n", centro_octa_x, centro_octa_y, raio_octa);

    // Percorre todas as células
    for (int i = 0; i < tamanho_mestre; i++) {
        for (int j = 0; j < tamanho_mestre; j++) {
            // Distância de Manhattan: |x - center_x| + |y - center_y| <= raio
            int distancia_manhattan = abs(j - centro_octa_x) + abs(i - centro_octa_y);
            
            if (distancia_manhattan <= raio_octa) {
                tabuleiro_habilidades[i][j] = HABILIDADE_ESPECIAL;
            }
        }
    }

    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.
    printf("\n--- Visualização do Tabuleiro 10x10 (Mestre - Habilidades) ---\n");
    printf("     0  1  2  3  4  5  6  7  8  9 (X)\n");
    
    for (int i = 0; i < TAMANHO_TABULEIRO_AVENTUREIRO; i++) {
        printf("%2d |", i); // Número da Linha (Y)
        for (int j = 0; j < TAMANHO_TABULEIRO_AVENTUREIRO; j++) {
            printf("%2d ", tabuleiro_habilidades[i][j]); // Exibe 0 ou 1
        }
        printf("|\n");
    }
    printf("Legenda: %d = Água | %d = Habilidade Afetada\n", AGUA, HABILIDADE_ESPECIAL);
    printf("\n");


    return 0;
}
