#include <stdio.h>

void main ()
{

	int a, b;

	while (scanf("%d %d", &a, &b) && a != 0 && b != 0){
        printf("%d\n", 2 * a - b);
    }
		

}