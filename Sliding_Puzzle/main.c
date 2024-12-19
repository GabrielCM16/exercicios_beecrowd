#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#include "menu.h"

#define NORMAL "\x1b[0m"
#define BRANCO "\033[0;0;7m"

// Função para desenhar bordas e números com alinhamento correto
void printsqr(int x1, int y1, int linhas, int colunas, int **numeros) {
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
void trocar_com_vazio(int **matriz, int *pos_vazio_x, int *pos_vazio_y, int x, int y) {
    // Verifica se a posição (x, y) está dentro dos limites da matriz
    if (x < 0 || y < 0 || x >= sizeof(matriz) || y >= sizeof(matriz[0])) {
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
}


int main() {
    srand(time(NULL));
    clrscr(); // Limpa o terminal

    // Configuração do menu
    const char *titulo = "Bem Vindo ao Sliding Puzzle\n Gabriel Costa de Moraes";
    const char *opcoes[] = {
        "Fácil (3x3)",
        "Médio (4x4)",
        "Difícil (5x5)",
        "Personalizado (NxN)"};
    int n = sizeof(opcoes) / sizeof(opcoes[0]);

    // Mostra o menu e obtém a escolha
    int escolha = mostrar_menu_interativo(opcoes, n, titulo);

    // Determina o tamanho do tabuleiro com base na escolha
    int linhas, colunas;
    switch (escolha) {
    case 0:
        linhas = colunas = 3;
        break;
    case 1:
        linhas = colunas = 4;
        break;
    case 2:
        linhas = colunas = 5;
        break;
    case 3:
        printf("Digite o tamanho do tabuleiro (N): ");
        scanf("%d", &linhas);
        colunas = linhas;
        break;
    default:
        printf("Opção inválida!\n");
        return 1;
    }

    clrscr();

    // Variáveis para armazenar a posição do número vazio
    int pos_vazio_x = 0, pos_vazio_y = 0;

    // Gera matriz ordenada com o número vazio na última posição
    int **matriz = gerar_matriz_ordenada(linhas, colunas, &pos_vazio_x, &pos_vazio_y);

    // Desenha o tabuleiro
    printsqr(2, 2, linhas, colunas, matriz);

    trocar_com_vazio(matriz, &pos_vazio_x, &pos_vazio_y, pos_vazio_x , pos_vazio_y-1);

    printsqr(2, 2, linhas, colunas, matriz);

    // Libera memória da matriz
    liberar_matriz(matriz, linhas);

    while (1) {
        if (keypress()) { // Se uma tecla for pressionada
            char ch = getchar(); // Tecla pressionada
        }
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#include "menu.h"

#define NORMAL "\x1b[0m"
#define BRANCO "\033[0;0;7m"

// Função para desenhar bordas e números com alinhamento correto
void printsqr(int x1, int y1, int linhas, int colunas, int **numeros) {
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
void trocar_com_vazio(int **matriz, int *pos_vazio_x, int *pos_vazio_y, int x, int y) {
    // Verifica se a posição (x, y) está dentro dos limites da matriz
    if (x < 0 || y < 0 || x >= sizeof(matriz) || y >= sizeof(matriz[0])) {
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
}


int main() {
    srand(time(NULL));
    clrscr(); // Limpa o terminal

    // Configuração do menu
    const char *titulo = "Bem Vindo ao Sliding Puzzle\n Gabriel Costa de Moraes";
    const char *opcoes[] = {
        "Fácil (3x3)",
        "Médio (4x4)",
        "Difícil (5x5)",
        "Personalizado (NxN)"};
    int n = sizeof(opcoes) / sizeof(opcoes[0]);

    // Mostra o menu e obtém a escolha
    int escolha = mostrar_menu_interativo(opcoes, n, titulo);

    // Determina o tamanho do tabuleiro com base na escolha
    int linhas, colunas;
    switch (escolha) {
    case 0:
        linhas = colunas = 3;
        break;
    case 1:
        linhas = colunas = 4;
        break;
    case 2:
        linhas = colunas = 5;
        break;
    case 3:
        printf("Digite o tamanho do tabuleiro (N): ");
        scanf("%d", &linhas);
        colunas = linhas;
        break;
    default:
        printf("Opção inválida!\n");
        return 1;
    }

    clrscr();

    // Variáveis para armazenar a posição do número vazio
    int pos_vazio_x = 0, pos_vazio_y = 0;

    // Gera matriz ordenada com o número vazio na última posição
    int **matriz = gerar_matriz_ordenada(linhas, colunas, &pos_vazio_x, &pos_vazio_y);

    // Desenha o tabuleiro
    printsqr(2, 2, linhas, colunas, matriz);

    trocar_com_vazio(matriz, &pos_vazio_x, &pos_vazio_y, pos_vazio_x , pos_vazio_y-1);

    printsqr(2, 2, linhas, colunas, matriz);

    // Libera memória da matriz
    liberar_matriz(matriz, linhas);

    while (1) {
        if (keypress()) { // Se uma tecla for pressionada
            char ch = getchar(); // Tecla pressionada
        }
    }

    return 0;
}
