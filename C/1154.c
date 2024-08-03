#include <stdio.h>

int main() {
    float media = 0.0;
    int contador = 0;

    while (1) {
        int idade;
        scanf("%d", &idade);

        if (idade >= 0) {
            contador++;
            media += idade;
        } else {
            break;
        }
    }

    if (contador > 0) {
        printf("%.2f\n", media / contador);
    } else {
        printf("Nenhuma idade válida foi fornecida.\n");
    }

    return 0;
}
