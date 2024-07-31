#include <stdio.h>

int main() {
    
    for (int i = 0; i < 100; i++) {
        float x;
        scanf("%f", &x);
        if (x <= 10){
            printf("A[%i] = %.1f\n", i, x);
        }
    }
    
    return 0;
}
