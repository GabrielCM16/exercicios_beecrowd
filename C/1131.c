#include <stdio.h>

int main() {
    int v_inter = 0;
    int v_gremio = 0;
    int empate = 0;
    int n_grenais = 0;

    while (1) {
        n_grenais += 1;
        int inter, gremio;
        
        scanf("%d %d", &inter, &gremio);

        if (inter > gremio) {
            v_inter += 1;
        } else if (gremio > inter) {
            v_gremio += 1;
        } else {
            empate += 1;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        int x;
        scanf("%d", &x);

        if (x == 1) {
            continue;
        } else {
            break;
        }
    }

    printf("%d grenais\n", n_grenais);
    printf("Inter:%d\n", v_inter);
    printf("Gremio:%d\n", v_gremio);
    printf("Empates:%d\n", empate);

    if (v_inter > v_gremio) {
        printf("Inter venceu mais\n");
    } else if (v_gremio > v_inter) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Nao houve vencedor\n");
    }

    return 0;
}
