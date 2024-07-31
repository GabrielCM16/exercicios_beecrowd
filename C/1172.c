#include <stdio.h>

int main() {
    
    for (int i = 0; i < 10; i++) {
        int x;
        scanf("%d", &x);
        printf("X[%d] = %d", i, x > 0 ? x : 1);
    }
    
    return 0;
}
