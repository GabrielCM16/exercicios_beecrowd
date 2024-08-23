#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int posicao;  // 0 para 'A', 1 para 'B', 2 para 'C'
    char ini;
    scanf(" %c", &ini);

    if (ini == 'A') {
        posicao = 0;
    } else if (ini == 'B') {
        posicao = 1;
    } else {
        posicao = 2;
    }

    for (int i = 0; i < n; i++) {
        char jogada;
        scanf(" %c", &jogada);
        
        if (jogada == '1' && posicao != 2) {
            posicao = 1 - posicao;  // Troca entre 0 e 1
        } else if (jogada == '2' && posicao != 0) {
            posicao = 3 - posicao;  // Troca entre 1 e 2
        } else if (jogada == '3' && posicao != 1) {
            posicao = 2 - posicao;  // Troca entre 0 e 2
        }
    }

    if (posicao == 0) {
        printf("A\n");
    } else if (posicao == 1) {
        printf("B\n");
    } else {
        printf("C\n");
    }

    return 0;
}
