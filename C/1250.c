#include <stdio.h>

int main() {

        int x = 0;
        scanf("%d", &x);

        for (int _ = 0; _ < x; _++) {
            int tam = 0;
            scanf("%d", &tam);

            int vet[tam];
            for (int i = 0; i < tam; i++) {
                scanf("%d", &vet[i]);
            }

            char entrada[tam];
            scanf("%s",entrada);

            int tiros = 0;

            for (int i = 0; i < tam; i++) {
                if (vet[i] <= 2 && entrada[i] == 'S'){
                    tiros++;
                } else if (vet[i] > 2 && entrada[i] == 'J'){
                    tiros++;
                }
            }

            printf("%d\n",tiros);
        }
    
    return 0;
}