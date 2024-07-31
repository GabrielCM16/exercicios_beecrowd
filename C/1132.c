#include <stdio.h>

int main(){

    int x,y;
    scanf("%d %d",&x, &y);

    long soma = 0;

    if (x > y){
        int aux = x;
        x = y;
        y = aux;
    }

    for (int i = x; i <= y; i++){
        if (i % 13 != 0){
            soma += i;
        }
    }

    printf("%ld\n", soma);

    return 0;
}