#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        int quadrado = i * i;
        int cubo = i * i * i;

        printf("%d %d %d\n", i, quadrado, cubo);

        printf("%d %d %d\n", i, quadrado + 1, cubo + 1);
    }

    return 0;
}
