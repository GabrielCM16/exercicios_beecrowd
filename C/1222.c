#include <stdio.h>
#include <string.h>

int main() {
    int numPalavras, maxLinhas, maxCarac;
    int linhas, paginas, caracs;
    char palavra[71];

    while (scanf("%d %d %d", &numPalavras, &maxLinhas, &maxCarac) != EOF) {
        linhas = paginas = caracs = 0;

        for (int i = 0; i < numPalavras; i++) {
            scanf("%s", palavra);
            int palavra_len = strlen(palavra);

            if (caracs == 0) {
                caracs = palavra_len;
            } else if (caracs + 1 + palavra_len <= maxCarac) {
                caracs += 1 + palavra_len;
            } else {
                linhas++;
                if (linhas == maxLinhas) {
                    paginas++;
                    linhas = 0;
                }
                caracs = palavra_len;
            }
        }

        if (caracs > 0) {
            linhas++;
            if (linhas > maxLinhas) {
                paginas++;
                linhas = 1;
            } else {
                paginas++;
            }
        }

        printf("%d\n", paginas);
    }

    return 0;
}
