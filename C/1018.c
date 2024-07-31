#include <stdio.h>

int main(){

    int x;
    scanf("%d",&x);

    printf("%d\n",x);

    int n100 = x / 100;
    x %= 100;
    int n50 = x / 50;
    x %= 50;
    int n20 = x / 20;
    x %= 20;
    int n10 = x / 10;
    x %= 10;
    int n5 = x / 5;
    x %= 5;
    int n2 = x / 2;
    x %= 2;

    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n5);
    printf("%d nota(s) de R$ 2,00\n", n2);
    printf("%d nota(s) de R$ 1,00\n", x);
    

    return 0;
}