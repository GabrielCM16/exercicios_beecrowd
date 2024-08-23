#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        long long a, b;
        char a_str[32], b_str[32];

        scanf("%lld %lld", &a, &b);

        // Converte os valores para strings
        snprintf(a_str, sizeof(a_str), "%lld", a);
        snprintf(b_str, sizeof(b_str), "%lld", b);

        int len_a = strlen(a_str);
        int len_b = strlen(b_str);

        if (len_b > len_a) {
            printf("nao encaixa\n");
        } else {
            if (strcmp(a_str + (len_a - len_b), b_str) == 0) {
                printf("encaixa\n");
            } else {
                printf("nao encaixa\n");
            }
        }
    }

    return 0;
}
