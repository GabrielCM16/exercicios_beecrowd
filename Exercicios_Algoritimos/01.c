#include <stdio.h>
#include <math.h>


long calcular(int x, int y) {
    return powl((x + y), 2);
}


int main(){
    int x, y;
    while (scanf("%d %d", &x, &y) != EOF) {
        long n = calcular(x, y);
        printf("f1(%d, %d) = %ld\n",x,y, n);
    }

    return 0;
}

