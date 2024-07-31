#include <stdio.h>

int main() {
    int n, b;

    while (1) {
        scanf("%d %d", &b, &n);
        if (n == 0 && b == 0) {
            break;
        }

        int valores[b];
        for (int i = 1; i <= b; i++) {
            scanf("%d", &valores[i]);
        }

       
        for (int i = 1; i <= n; i++) {
            int a, e, c;
            scanf("%d %d %d", &a, &e, &c);
            valores[a] -= c;
            valores[e] += c;
        }

        int res = 1;
        for (int i = 1; i <= b; i++){
            if (valores[i] < 0) {
                res = 0;
                break;
            }
        }

        char s = (res == 1) ? 'S' : 'N';
        printf("%c\n", s);
    }

    return 0;
}
