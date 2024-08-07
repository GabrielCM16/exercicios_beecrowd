#include <stdio.h>

int main() {
    int vetorPar[5], vetorImpar[5];
    int parCount = 0, imparCount = 0;

    for (int i = 0; i < 15; i++) {
        int entrada;
        scanf("%d", &entrada);

        if (abs(entrada) % 2 == 0) {
            vetorPar[parCount] = entrada;
            parCount++;
            if (parCount == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, vetorPar[j]);
                }
                parCount = 0;
            }
        } else {
            vetorImpar[imparCount] = entrada;
            imparCount++;
            if (imparCount == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, vetorImpar[j]);
                }
                imparCount = 0;
            }
        }
    }

    for (int i = 0; i < imparCount; i++) {
        printf("impar[%d] = %d\n", i, vetorImpar[i]);
    }

    for (int i = 0; i < parCount; i++) {
        printf("par[%d] = %d\n", i, vetorPar[i]);
    }

    return 0;
}
