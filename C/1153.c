#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int fat = 1;

    for (int i = n; i > 1; i--){
        fat *= i;
    }

    printf("%d\n", fat);
    
    return 0;
}
