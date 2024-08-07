#include <stdio.h>

int main() {
    int x;
    int n[1000];
    scanf("%d", &x);

    int aux = 0;

    for (int i = 0; i < 1000; i++) {
        n[i] = aux;
        aux++;
        if (aux == x) {
            aux = 0;
        }
    }

    for (int i = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}
