#include <stdio.h>

int main(){

    unsigned int a,b;
   
    while (scanf("%u %u", &a, &b) != EOF){
        unsigned soma = ((a & ~b) | (b & ~a));

        printf("%d\n", soma);
    }

    return 0;
}