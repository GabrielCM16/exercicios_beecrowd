// tabuleiro.c
// Funcoes no qual, cria, sorteia e diversas do jogo
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include "utils.h"

#define NORMAL "\x1b[0m"
#define BRANCO "\033[0;0;7m"


// Gera matriz ordenada com o número vazio na última posição
int **gerar_matriz_ordenada(int linhas, int colunas, int *pos_vazio_x, int *pos_vazio_y) {
    int tamanho = linhas * colunas;

    // Aloca memória para a matriz
    int **matriz = malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = malloc(colunas * sizeof(int));
    }

    // Preenche a matriz de forma ordenada, com o número vazio (0) na última posição
    int idx = 0;
    for (int lin = 0; lin < linhas; lin++) {
        for (int col = 0; col < colunas; col++) {
            if (idx < tamanho - 1) {
                matriz[lin][col] = idx + 1;  // Preenche com números de 1 até (linhas * colunas - 1)
            } else {
                matriz[lin][col] = 0;  // A última posição é o número vazio (0)
                *pos_vazio_x = lin;    // Salva a posição x do vazio
                *pos_vazio_y = col;    // Salva a posição y do vazio
            }
            idx++;
        }
    }

    return matriz;
}


// Libera memória da matriz
void liberar_matriz(int **matriz, int linhas) {
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}


// Função para trocar o número na posição (x, y) com o número vazio (0)
void trocar_com_vazio(int **matriz, int *pos_vazio_x, int *pos_vazio_y, int x, int y, int linhas, int colunas, int *passos) {
    // Verifica se a posição (x, y) está dentro dos limites da matriz
    if (x < 0 || y < 0 || x >= linhas || y >= colunas) {
        printf("Posição inválida para a troca.\n");
        return;
    }

    // Troca os valores
    int temp = matriz[x][y];
    matriz[x][y] = 0;  // Coloca o número vazio na posição (x, y)
    matriz[*pos_vazio_x][*pos_vazio_y] = temp; // Coloca o número na posição do vazio

    // Atualiza a posição do vazio
    *pos_vazio_x = x;
    *pos_vazio_y = y;

    // Incrementa o contador de passos
    (*passos)++;
}



int **sortearMatriz(int **matriz, int linhas, int colunas, int *pos_vazio_x, int *pos_vazio_y, int X) {
    // Cria uma nova matriz para armazenar o tabuleiro sorteado
    int **nova_matriz = malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        nova_matriz[i] = malloc(colunas * sizeof(int));
    }

    // Copia os valores da matriz original para a nova matriz
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            nova_matriz[i][j] = matriz[i][j];
        }
    }

    int passos = 0;

    // Sorteia as posições das peças na nova matriz, mas apenas nas direções válidas
    for (int i = 0; i < X; i++) { // Executa X vezes para tentar sortear uma solução
        int direcao = rand() % 4;  // Sorteia uma direção aleatória

        // Realiza a troca com a célula vazia nas direções válidas
        switch (direcao) {
            case 0: // Cima
                if (*pos_vazio_x > 0) { // Verifica se a troca é válida
                    trocar_com_vazio(nova_matriz, pos_vazio_x, pos_vazio_y, *pos_vazio_x - 1, *pos_vazio_y, linhas, colunas, &passos);
                }
                break;
            case 1: // Baixo
                if (*pos_vazio_x < linhas - 1) { // Verifica se a troca é válida
                    trocar_com_vazio(nova_matriz, pos_vazio_x, pos_vazio_y, *pos_vazio_x + 1, *pos_vazio_y, linhas, colunas, &passos);
                }
                break;
            case 2: // Esquerda
                if (*pos_vazio_y > 0) { // Verifica se a troca é válida
                    trocar_com_vazio(nova_matriz, pos_vazio_x, pos_vazio_y, *pos_vazio_x, *pos_vazio_y - 1, linhas, colunas, &passos);
                }
                break;
            case 3: // Direita
                if (*pos_vazio_y < colunas - 1) { // Verifica se a troca é válida
                    trocar_com_vazio(nova_matriz, pos_vazio_x, pos_vazio_y, *pos_vazio_x, *pos_vazio_y + 1, linhas, colunas, &passos);
                }
                break;
        }
    }

    // Retorna a nova matriz embaralhada
    return nova_matriz;
}


int verificar_se_ordenada(int **matriz, int **matriz_ordenada, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] != matriz_ordenada[i][j]) {
                return 0;  // Retorna 0 se a matriz não estiver ordenada
            }
        }
    }
    liberar_matriz(matriz, linhas);
    liberar_matriz(matriz_ordenada, linhas);
    return 1;  // Retorna 1 se a matriz estiver ordenada
}



// Função para desenhar bordas e números com alinhamento correto
void printsqr(int x1, int y1, int linhas, int colunas, int **numeros, int passos) {
    printf("Use as setinhas para mover\nUse Ctrl+C para sair.\nPassos realizados: %d\n", passos);
    int cell_width = 4; // Largura de cada célula (número + espaçamento)
    int cell_height = 3; // Altura de cada célula (considerando linha superior, número e linha inferior)

    // Desenha as bordas horizontais (superior e inferior)
    gotoxy(x1, y1);
    printf("+");
    for (int i = 0; i < colunas * cell_width; i++) {
        printf("-");
    }
    printf("+");

    for (int lin = 0; lin < linhas; lin++) {
        // Desenha as bordas verticais e preenche os números
        for (int h = 0; h < cell_height; h++) {
            gotoxy(x1, y1 + 1 + lin * cell_height + h);
            printf("|");
            if (h == 1) { // Linha central onde os números aparecem
                for (int col = 0; col < colunas; col++) {
                    int num_x = x1 + 2 + col * cell_width; // Posição horizontal do número
                    gotoxy(num_x, y1 + 1 + lin * cell_height + h);
                    if (numeros[lin][col] != 0) {
                        printf("%2d", numeros[lin][col]); // Imprime o número
                    } else {
                        printf(BRANCO "  " NORMAL);// Espaço vazio para células vazias
                    }
                }
            }
            gotoxy(x1 + 1 + colunas * cell_width, y1 + 1 + lin * cell_height + h);
            printf("|");
        }
    }

    // Desenha a borda inferior
    gotoxy(x1, y1 + linhas * cell_height);
    printf("+");
    for (int i = 0; i < colunas * cell_width; i++) {
        printf("-");
    }
    printf("+");
    printf("\n");
}



void printInicial(int x1, int y1, int linhas, int colunas, int **numeros) {
    printf("Tabuleiro Inicial:\nOrganize os números para retornar a este modelo.\nAperte qualquer tecla para continuar.");
    int cell_width = 4; // Largura de cada célula (número + espaçamento)
    int cell_height = 3; // Altura de cada célula (considerando linha superior, número e linha inferior)

    // Desenha as bordas horizontais (superior e inferior)
    gotoxy(x1, y1);
    printf("+");
    for (int i = 0; i < colunas * cell_width; i++) {
        printf("-");
    }
    printf("+");

    for (int lin = 0; lin < linhas; lin++) {
        // Desenha as bordas verticais e preenche os números
        for (int h = 0; h < cell_height; h++) {
            gotoxy(x1, y1 + 1 + lin * cell_height + h);
            printf("|");
            if (h == 1) { // Linha central onde os números aparecem
                for (int col = 0; col < colunas; col++) {
                    int num_x = x1 + 2 + col * cell_width; // Posição horizontal do número
                    gotoxy(num_x, y1 + 1 + lin * cell_height + h);
                    if (numeros[lin][col] != 0) {
                        printf("%2d", numeros[lin][col]); // Imprime o número
                    } else {
                        printf(BRANCO "  " NORMAL);// Espaço vazio para células vazias
                    }
                }
            }
            gotoxy(x1 + 1 + colunas * cell_width, y1 + 1 + lin * cell_height + h);
            printf("|");
        }
    }

    // Desenha a borda inferior
    gotoxy(x1, y1 + linhas * cell_height);
    printf("+");
    for (int i = 0; i < colunas * cell_width; i++) {
        printf("-");
    }
    printf("+");
    printf("\n");
}
