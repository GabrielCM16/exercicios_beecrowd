#include <stdio.h>

int main() {
    int x, z;
    scanf("%d %d", &x, &z);

    while (z <= x) {
        scanf("%d", &z);
    }

    int soma = x;
    int aux = x;    
    int res = 1;

    while(soma < z){
        aux += 1;
        soma += aux;
        res++;
    }

    printf("%d\n", res);

    return 0;
}
