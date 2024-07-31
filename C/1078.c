#include <stdio.h>

int main(){
    int r;

    scanf("%d",&r);

    for (int i = 1; i<=10; i++){
        printf("%d X %d = %d\n", i, r, r*i);
    }

    return 0;
}