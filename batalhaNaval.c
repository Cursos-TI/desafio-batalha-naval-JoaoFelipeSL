#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

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

    //Desafio Nível Novato: Posicionado Navios no Tabuleiro
    //Tabuleiro: Uma matriz(Array bidimencional 10x10)
    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    };

    //Navios: Dois vetores unidimencionais 

    //Navio 1: Vertical
    int navio1[3] = {3, 3, 3};

    //Navio 2: Vertical
    int navio2[3] = {3, 3, 3};

    //Colocando Navio 1 no tabuleiro
    if (tabuleiro[0][0] == 0 && tabuleiro[1][0] == 0 && tabuleiro[2][0] == 0) {
        tabuleiro[0][0] = navio1[0];
        tabuleiro[1][0] = navio1[1];
        tabuleiro[2][0] = navio1[2];
    }

    //Colocando Navio 2 no tabuleiro
    if (tabuleiro[0][9] == 0 && tabuleiro[0][8] == 0 && tabuleiro[0][7] == 0) {
        tabuleiro[0][9] = navio2[0];
        tabuleiro[0][8] = navio2[1];
        tabuleiro[0][7] = navio2[2];
    }
    //Colocando Navio 3(Diagonal)
    for (int n3 = 5; n3 <= 7; n3++) {
        if (tabuleiro[n3][n3-1] == 0) {
            tabuleiro[n3][n3-1] = 3;
        }
    }
    //Colocando Navio 3(Diagonal)
    for (int n4 = 3; n4 <= 5; n4++) {
        if (tabuleiro[n4-1][n4] == 0) {
            tabuleiro[n4-1][n4] = 3;
        }
    }


    //Mostrando tabuleiro utilizando loops aninhados
    for (int i = 0; i < 10; i++) {
        printf("\n");
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        
        }
    }

}