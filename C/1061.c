#include <stdio.h>

int main() {
    int w, x, y, z, w2, x2, y2, z2;

    scanf("Dia %d", &w);
    scanf("%d : %d : %d", &x, &y, &z);

    scanf(" Dia %d", &w2);
    scanf("%d : %d : %d", &x2, &y2, &z2);

    int dias = w2 - w;

    int aux = (x * 3600 + y * 60 + z);
    int aux2 = (x2 * 3600 + y2 * 60 + z2);
    int total;

    if (aux2 > aux) {
        total = aux2 - aux;
    } else {
        total = 86400 - (aux - aux2);
        dias--;
    }

    int h, min, seg;

    h = total / 3600;
    total %= 3600;
    min = total / 60;
    seg = total % 60;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dias, h, min, seg);

    return 0;
}
