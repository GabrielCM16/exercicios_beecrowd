#include <stdio.h>

int main() {
    int p = 0;
    for (int i = 0; i < 6; i++) {
        float aux;
        scanf("%f", &aux);
        if (aux > 0){
            p++;
        }
    }

    printf("%d valores positivos\n", p);

    return 0;
}
