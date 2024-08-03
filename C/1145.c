#include <stdio.h>

int main() {
    int v, t;
    scanf("%d %d", &v, &t);

    int aux = 0;

    for (int i = 0; i < t; i++) {
        aux++;
        if (aux == v) {
            printf("%d\n", i + 1);
            aux = 0;
        } else {
            printf("%d ", i + 1);
        }
    }

    return 0;
}
