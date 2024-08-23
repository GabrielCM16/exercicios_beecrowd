#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 51   

int main() {
    char linha[MAX_LEN];
    int ultimo_maior;

    while (fgets(linha, sizeof(linha), stdin)) {
        ultimo_maior = 0;

        for (int i = 0; linha[i] != '\0'; i++) {
            char c = linha[i];

            if (isalpha(c)) {
                if (ultimo_maior == 0) {
                    putchar(toupper(c));
                    ultimo_maior = 1;
                } else {
                    putchar(tolower(c));
                    ultimo_maior = 0;
                }
            } else {
                putchar(c);
            }
        }

    }

    return 0;
}
