#include <stdio.h>

int main(){

    int a,b;
    scanf("%d %d", &a, &b);

    printf((b % a == 0) || (a % b == 0) ? "Sao Multiplos\n": "Nao sao Multiplos\n");

    return 0;
}