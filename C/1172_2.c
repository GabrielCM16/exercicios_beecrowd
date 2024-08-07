#include <stdio.h>

int main() {

    int n[10];

    for (int i = 0; i < 10; i++){
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < 10; i++){
        if (n[i] <= 0){
            printf("X[%d] = 1\n", i);
        } else {
            printf("X[%d] = %d\n", i, n[i]);
        }
    }

    return 0;
}
