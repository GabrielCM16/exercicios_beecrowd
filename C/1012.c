#include <stdio.h>

int main(){

    float a,b,c;

    scanf("%f %f %f",&a, &b, &c);

    double vT = (a * c) / 2;
    double vC = 3.14159 * (c * c);
    double vTR = (a + b) * c / 2;
    double vQ = b * b;
    double vP = a * b;

    printf("TRIANGULO: %.3lf\n", vT);
    printf("CIRCULO: %.3lf\n", vC);
    printf("TRAPEZIO: %.3lf\n", vTR);
    printf("QUADRADO: %.3lf\n", vQ);
    printf("RETANGULO: %.3lf\n", vP);

    return 0;
}