#include <stdio.h>

int main() {
    float n;
    
    scanf("%f", &n);

    if (n > 4500){
        double x = (1000 * (8.0/100.0)) + (1500 * (18.0/100.0)) + ((n-4500) * (28.0/100.0));
        printf("R$ %.2f\n", x);
    } else if (n > 3000){
        double x = (1000 * (8.0/100.0)) + ((n-3000) * (18.0/100.0));
        printf("R$ %.2f\n", x);
    } else if (n > 2000) {
        double x = (n - 2000) * (8.0/100.0);
        printf("R$ %.2f\n", x);
    } else {
        printf("Isento\n");
    }

    return 0;
}
