#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 1001

int main() {
    int n;
    char a[MAX_DIGITS], b[MAX_DIGITS];

    scanf("%d", &n);

    while (n--) {
        scanf("%s %s", a, b);

        int len_a = strlen(a);
        int len_b = strlen(b);

        if (len_b > len_a) {
            printf("nao encaixa\n");
        } else {
            if (strcmp(a + (len_a - len_b), b) == 0) {
                printf("encaixa\n");
            } else {
                printf("nao encaixa\n");
            }
        }
    }

    return 0;
}
