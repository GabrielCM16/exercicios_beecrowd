#include <stdio.h>

int main() {

    int x;

    while (scanf("%d", &x) != EOF) {
        if (x % 6){
            printf("N\n");
        } else {
            printf("Y\n");
        }
    }
    return 0;
}