#include <stdio.h>
#include <string.h>

#define MAX_LEN 101

int main() {
    int N;
    scanf("%d", &N);
    
    while (getchar() != '\n');

    char entrada[MAX_LEN];

    for (int i = 0; i < N; i++) {
        fgets(entrada, MAX_LEN, stdin);
        entrada[strcspn(entrada, "\n")] = '\0';
        
        int len = strlen(entrada);
        int metade = len / 2;

        char parte1[MAX_LEN / 2 + 1];
        char parte2[MAX_LEN / 2 + 1];
        char novaParte1[MAX_LEN / 2 + 1];
        char novaParte2[MAX_LEN / 2 + 1];
        char fraseCerta[MAX_LEN];

        strncpy(parte1, entrada, metade);
        parte1[metade] = '\0';
        strncpy(parte2, entrada + metade, metade);
        parte2[metade] = '\0';

        for (int j = 0; j < metade; j++) {
            novaParte1[j] = parte1[metade - 1 - j];
            novaParte2[j] = parte2[metade - 1 - j];
        }
        novaParte1[metade] = '\0';
        novaParte2[metade] = '\0';

        snprintf(fraseCerta, sizeof(fraseCerta), "%s%s", novaParte1, novaParte2);

        printf("%s\n", fraseCerta);
    }

    return 0;
}
