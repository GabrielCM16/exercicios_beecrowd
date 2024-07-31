#include <stdio.h>

int main(){

    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    int m = a;
    if (b > m){
        m = b;
    } if (c > m){
        m = c;
    } if (d > m){
        m = d;
    }

    int m2 = a;

    if (b > m2 && b != m){
        m2 = b;
    } if (c > m2 && c != m){
        m2 = c;
    } if (d > m2 && d != m){
        m2 = d;
    }

    int m3 = a;

    if (b > m3 && b != m && b != m2){
        m3 = b;
    } if (c > m3 && c != m && c != m2){
        m3 = c;
    } if (d > m3 && d !=m && d != m2){
        m3 = d;
    }

    if ((m3 + m2) >= m){
        printf("S\n");
    } else {
        printf("N\n");
    }


    return 0;
}