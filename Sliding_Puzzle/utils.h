// utils.h
// Funcoes diversas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>

#define clear "\033[H\033[2J"

// Funcao clrscr(): Limpa a tela (Unix)
void clrscr();

// posiciona o cursor na posicao coluna x linha y (nessa ordem)
void gotoxy(int x, int y);

//recebe sem precisar digitar enter
char getch();

//verifica se foi pressionada uma tecla
int keypress(void);