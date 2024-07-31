#include <stdio.h>

int main(){

    int c1, c2, q1, q2;
    float f1, f2;

    scanf("%d %d %f",&c1, &q1, &f1);
    scanf("%d %d %f",&c2, &q2, &f2);

    double valor = q1 * f1 + q2 * f2;

    printf("VALOR A PAGAR: R$ %.2f\n", valor);

    return 0;
}