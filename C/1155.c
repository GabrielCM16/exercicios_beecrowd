#include <stdio.h>

int main() {
    double soma = 1;

    for (int i = 2; i <= 100; i++) {
        soma += 1 / i;
    }

    printf("%.1lf\n", soma);

    return 0;
}
