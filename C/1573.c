#include <stdio.h>
#include <math.h>

void main ()
{

	int a, b, c;

	while (scanf("%d %d", &a, &b, &c) && a != 0 && b != 0 && c != 0){
        int resul = cbrt(a * b * c);
        printf("%d\n", resul);
    }
		

}