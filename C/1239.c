#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    char linha[MAX_LEN];
    
    while (fgets(linha, sizeof(linha), stdin)) {
        char resultado[2 * MAX_LEN]; 
        int i = 0, j = 0;
        int emItalico = 0, emNegrito = 0;

        while (linha[i] != '\0' && linha[i] != '\n') {
            if (linha[i] == '_') {
                if (emItalico) {
                    // Fechar tag <i>
                    resultado[j++] = '<';
                    resultado[j++] = '/';
                    resultado[j++] = 'i';
                    resultado[j++] = '>';
                    emItalico = 0;
                } else {
                    // Abrir tag <i>
                    resultado[j++] = '<';
                    resultado[j++] = 'i';
                    resultado[j++] = '>';
                    emItalico = 1;
                }
                i++;
            } else if (linha[i] == '*') {
                if (emNegrito) {
                    // Fechar tag <b>
                    resultado[j++] = '<';
                    resultado[j++] = '/';
                    resultado[j++] = 'b';
                    resultado[j++] = '>';
                    emNegrito = 0;
                } else {
                    // Abrir tag <b>
                    resultado[j++] = '<';
                    resultado[j++] = 'b';
                    resultado[j++] = '>';
                    emNegrito = 1;
                }
                i++;
            } else {
                resultado[j++] = linha[i++];
            }
        }
        
        // Fechar tags restantes, se necessário
        if (emItalico) {
            resultado[j++] = '<';
            resultado[j++] = '/';
            resultado[j++] = 'i';
            resultado[j++] = '>';
        }
        if (emNegrito) {
            resultado[j++] = '<';
            resultado[j++] = '/';
            resultado[j++] = 'b';
            resultado[j++] = '>';
        }
        
        resultado[j] = '\0';

        printf("%s", resultado);
    }
    
    return 0;
}
