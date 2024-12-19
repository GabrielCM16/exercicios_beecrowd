#include <stdio.h>
#include <string.h>



int divisivel (char *year, int divisor) {
    int resto = 0;
    for (int i = 0; year[i] != '\0'; i++) {
        resto = (resto * 10 + (year[i] - '0')) % divisor;
    }
    return resto == 0;
}

int main() {
    char year[1001];
    int print = 1;

    while (scanf("%s", year) != EOF) {
        int leap = divisivel(year, 4) && (!divisivel(year, 100) || divisivel(year, 400));
        int huluculu = divisivel(year, 15);
        int bulukulu = leap && divisivel(year, 55);

        if (!print) {
            printf("\n");
        }
        print = 0;


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
