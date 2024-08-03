#include <stdio.h>

int main() {
    int alco = 0;
    int gaso = 0;
    int dise = 0;

    while (1) {
        int x;
        scanf("%d", &x);
        
        if (x == 4) {
            break;
        } else if (x == 1) {
            alco += 1;
        } else if (x == 2) {
            gaso += 1;
        } else if (x == 3) {
            dise += 1;
        } else {
            continue;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alco);
    printf("Gasolina: %d\n", gaso);
    printf("Diesel: %d\n", dise);

    return 0;
}
