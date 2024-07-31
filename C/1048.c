#include <stdio.h>

int main(){

    float s;
    scanf("%f",&s);

    if (s > 2000){
        float x = 0.04 * s;
        float y = x + s;
        printf("Novo salario: %.2f\n", y);
        printf("Reajuste ganho: %.2f\n", x);
        printf("Em percentual: 4 %%\n");
    } else if (s > 1200){
        float x = 0.07 * s;
        float y = x + s;
        printf("Novo salario: %.2f\n", y);
        printf("Reajuste ganho: %.2f\n", x);
        printf("Em percentual: 7 %%\n");
    } else if (s > 800){
        float x = 0.1 * s;
        float y = x + s;
        printf("Novo salario: %.2f\n", y);
        printf("Reajuste ganho: %.2f\n", x);
        printf("Em percentual: 10 %%\n");
    } else if (s > 400){
        float x = 0.12 * s;
        float y = x + s;
        printf("Novo salario: %.2f\n", y);
        printf("Reajuste ganho: %.2f\n", x);
        printf("Em percentual: 12 %%\n");
    } else {
        float x = 0.15 * s;
        float y = x + s;
        printf("Novo salario: %.2f\n", y);
        printf("Reajuste ganho: %.2f\n", x);
        printf("Em percentual: 15 %%\n");
    }

    return 0;
}