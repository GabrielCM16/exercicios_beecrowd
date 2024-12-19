//menu.h
#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <string.h>

#define RESET "\033[0m"
#define BOLD "\033[1m"
#define REVERSE "\033[7m"
#define FG_WHITE "\033[37m"
#define BG_BLUE "\033[44m"

// Configuração para teclas
#define KEY_UP 65
#define KEY_DOWN 66
#define KEY_ENTER 10

// Comprimento máximo de uma linha do menu
#define MENU_WIDTH 19

int mostrar_menu_interativo(const char *opcoes[], int n, const char *titulo);

void exibir_cabecalho(const char *titulo);