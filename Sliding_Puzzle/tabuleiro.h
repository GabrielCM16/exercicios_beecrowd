// tabuleiro.h
// Funcoes diversas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>


#define NORMAL "\x1b[0m"
#define BRANCO "\033[0;0;7m"

#define clear "\033[H\033[2J"

int **gerar_matriz_ordenada(int linhas, int colunas, int *pos_vazio_x, int *pos_vazio_y);


void liberar_matriz(int **matriz, int linhas);

// Função para trocar o número na posição (x, y) com o número vazio (0)
void trocar_com_vazio(int **matriz, int *pos_vazio_x, int *pos_vazio_y, int x, int y, int linhas, int colunas, int *passos);

int **sortearMatriz(int **matriz, int linhas, int colunas, int *pos_vazio_x, int *pos_vazio_y, int X);

int verificar_se_ordenada(int **matriz, int **matriz_ordenada, int linhas, int colunas);

void printsqr(int x1, int y1, int linhas, int colunas, int **numeros, int passos);