#include <stdio.h>
#include <string.h>


int is_divisible(char *year, int divisor) {
    int remainder = 0;
    for (int i = 0; year[i] != '\0'; i++) {
        remainder = (remainder * 10 + (year[i] - '0')) % divisor;
    }
    return remainder == 0;
}


int main() {
    char year[1001];
    int first = 1;

    while (scanf("%s", year) != EOF) {
        int leap = is_divisible(year, 4) && (!is_divisible(year, 100) || is_divisible(year, 400));
        int huluculu = is_divisible(year, 15);
        int bulukulu = leap && is_divisible(year, 55);

        if (!first) {
            printf("\n");
        }
        first = 0;

  
        if (leap) {
            printf("This is leap year.\n");
        }
        if (huluculu) {
            printf("This is huluculu festival year.\n");
        }
        if (bulukulu) {
            printf("This is bulukulu festival year.\n");
        }
        if (!leap && !huluculu && !bulukulu) {
            printf("This is an ordinary year.\n");
        }
    }
    return 0;
}
