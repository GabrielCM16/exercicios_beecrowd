// utils.c
// Funcoes diversas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>

#define clear "\033[H\033[2J"

// Funcao clrscr(): Limpa a tela (Unix)
void clrscr() {
    printf(clear);
}

// posiciona o cursor na posicao coluna x linha y
void gotoxy(int x, int y) {
    printf("\e[%d;%df", y, x);
    fflush(stdout);
}

char getch(){
    //ler entrada sem apertar enter
    int ch;
    struct termios oldt;
    struct termios newt;
    
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    
    ch = getchar();
    
    tcsetattr(STDIN_FILENO, TCSANOW , &oldt);
    return ch;
    
    
}

int keypress(void) {
    struct termios oldt, newt;
    int ch;
    int oldf;

    // Obter os atributos atuais do terminal
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;

    // Desativar modo canônico e eco
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    // Configurar stdin como não bloqueante
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    // Restaurar configurações originais
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if (ch != EOF) {
        ungetc(ch, stdin); // Reinsere o caractere lido no buffer
        return 1;          // Há uma tecla pressionada
    }

    return 0; // Nenhuma tecla pressionada
}

char process_input() {
    char ch;
    if (keypress()) {
        ch = getchar();
        if (ch == '\033') { // Identifica as setinhas
            getchar();      // Ignora o '['
            ch = getchar(); 
            return ch;      // Retorna o caractere da seta (A, B, C ou D)
        } else {
            return ch;      // Retorna o caractere pressionado
        }
    }
    return 0; // Retorna 0 se nenhuma tecla foi pressionada
}
