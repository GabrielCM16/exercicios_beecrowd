#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 10000

int main() {
    int caso = 0;
    int tamanho;
    char linha[MAX_SIZE];

    while (1) {
        if (scanf("%d", &tamanho) == EOF) {
            break;
        }
        
        // Limpa o buffer de entrada para ler a linha de pares
        while (getchar() != '\n');

        if (fgets(linha, sizeof(linha), stdin) == NULL) {
            break;
        }
        
        int paresIguais = 0, fCount = 0, mCount = 0;
        
        char *token = strtok(linha, " ");

        while (token != NULL) {
            int num = atoi(token);
            
            token = strtok(NULL, " ");
            if (token == NULL) {
                break;
            }
            char tipo = token[0];
            
            if (num == tamanho) {
                paresIguais++;
                if (tipo == 'F') {
                    fCount++;
                } else if (tipo == 'M') {
                    mCount++;
                }
            }
            
            token = strtok(NULL, " ");
        }
        
        caso++;
        
        printf("Caso %d:\n", caso);
        printf("Pares Iguais: %d\n", paresIguais);
        printf("F: %d\n", fCount);
        printf("M: %d\n", mCount);
        printf("\n");
    }
    
    return 0;
}
