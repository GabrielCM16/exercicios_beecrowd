#include <stdio.h>
#include <math.h>

int main(){

    int vel, km;
    scanf("%d %d",&vel, &km);

    double result = vel * km / 12.0;

    printf("%.3lf\n",result);

    return 0;
}