#include <stdio.h>

int main(){

    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float maior, meio, menor;

     if (a >= b && a >= c) {
        maior = a;
        if (b >= c) {
            meio = b;
            menor = c;
        } else {
            meio = c;
            menor = b;
        }
    } else if (b >= a && b >= c) {
        maior = b;
        if (a >= c) {
            meio = a;
            menor = c;
        } else {
            meio = c;
            menor = a;
        }
    } else {
        maior = c;
        if (a >= b) {
            meio = a;
            menor = b;
        } else {
            meio = b;
            menor = a;
        }
    }

    float A = maior;
    float B = meio;
    float C = menor;

    // Verificar tipo de triângulo
    if (A >= B + C) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (A * A == B * B + C * C) {
            printf("TRIANGULO RETANGULO\n");
        }
        if (A * A > B * B + C * C) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (A * A < B * B + C * C) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (A == B && B == C) {
            printf("TRIANGULO EQUILATERO\n");
        }
        if ((A == B && A != C) || (A == C && A != B) || (B == C && B != A)) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}