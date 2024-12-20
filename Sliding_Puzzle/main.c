#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utils.h"
#include "menu.h"
#include "tabuleiro.h"


int main() {
    srand(time(NULL));
    clrscr(); // Limpa o terminal

    // Configuração do menu
    const char *titulo = "Bem Vindo ao Sliding Puzzle\n Gabriel Costa de Moraes\n Pedro Moraes Michalski\n Use Ctrl+C para sair.\n";
    const char *opcoes[] = {
        "Fácil (3x3)",
        "Médio (4x4)",
        "Difícil (5x5)",
        "Personalizado (NxM)"};
    int n = sizeof(opcoes) / sizeof(opcoes[0]);

    // Mostra o menu e obtém a escolha
    int escolha = mostrar_menu_interativo(opcoes, n, titulo);
    int X = 0;

    // Determina o tamanho do tabuleiro com base na escolha
    int linhas, colunas;
    switch (escolha) {
    case 0:
        linhas = colunas = 3;
        X = 35;
        break;
    case 1:
        linhas = colunas = 4;
        X = 4*15;
        break;
    case 2:
        linhas = colunas = 5;
        X = 5*20;
        break;
    case 3:
        printf("Digite o tamanho do tabuleiro (N): ");
        scanf("%d", &linhas);
        printf("Digite o tamanho do tabuleiro (M): ");
        scanf("%d", &colunas);
        if(linhas >= colunas){
            int dif = linhas - colunas;
            X = (colunas + dif)*18;
        }else{
            int dif = colunas-linhas;
            X = (linhas + dif)*18;
        }

        break;
    default:
        printf("Opção inválida!\n");
        return 1;
    }

    clrscr();

    // Variáveis para armazenar a posição do número vazio
    int pos_vazio_x = 0, pos_vazio_y = 0;

    // Gera matriz ordenada com o número vazio na última posição
    int **matriz_ordenada = gerar_matriz_ordenada(linhas, colunas, &pos_vazio_x, &pos_vazio_y);

    // Sorteia o tabuleiro
    int **tabuleiro = sortearMatriz(matriz_ordenada, linhas, colunas, &pos_vazio_x, &pos_vazio_y, X);

    int passos = 0;

    // Desenha o tabuleiro
    printsqr(4, 4, linhas, colunas, tabuleiro, passos);

    while (1) {
        char ch = process_input();
        if (ch != 0) {
            switch (ch) {
                case 'A': // Seta para cima
                    trocar_com_vazio(tabuleiro, &pos_vazio_x, &pos_vazio_y, pos_vazio_x - 1, pos_vazio_y, linhas, colunas, &passos);
                    
                    break;
                case 'B': // Seta para baixo
                    trocar_com_vazio(tabuleiro, &pos_vazio_x, &pos_vazio_y, pos_vazio_x + 1, pos_vazio_y, linhas, colunas, &passos);
                    
                    break;
                case 'C': // Seta para a direita
                    trocar_com_vazio(tabuleiro, &pos_vazio_x, &pos_vazio_y, pos_vazio_x, pos_vazio_y + 1, linhas, colunas, &passos);
                    
                    break;
                case 'D': // Seta para a esquerda
                    trocar_com_vazio(tabuleiro, &pos_vazio_x, &pos_vazio_y, pos_vazio_x, pos_vazio_y - 1, linhas, colunas, &passos);
                    
                    break;
                default:
                    printf("Tecla não reconhecida: %c\n", ch);
                    break;
            }

            // Atualiza o tabuleiro após o movimento
            clrscr(); // Limpa a tela
            printsqr(4, 4, linhas, colunas, tabuleiro, passos);

            // Verifica se o tabuleiro está ordenado
            if (verificar_se_ordenada(tabuleiro, matriz_ordenada, linhas, colunas)) {
                printf("Parabéns! Você completou o tabuleiro! Com %d passos ao total\n\n", passos);
                break;  // Sai do loop se o tabuleiro estiver ordenado
            }

        }
    }

    return 0;
}


