#include <stdio.h>
#include <math.h>

#define PI 3.1415926535897

int main() {
    int a, b, c;
    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
        // Ordena os lados
        if (a > b) { int temp = a; a = b; b = temp; }
        if (b > c) { int temp = b; b = c; c = temp; }
        if (a > b) { int temp = a; a = b; b = temp; }

        double p = (a + b + c) / 2.0;
        double A = sqrt(p * (p - a) * (p - b) * (p - c));
        double cp = pow(A / p, 2) * PI;
        double cg = pow((a * b * c) / (4.0 * A), 2) * PI;
        double v = A - cp;
        double g = cg - A;
        double r = cp;

        printf("%.4lf %.4lf %.4lf\n", g, v, r);
    }

    return 0;
}
