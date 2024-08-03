#include <stdio.h>
#include <math.h>

int main(){
    
    int L, C, R1, R2;
    while (1){
        scanf("%d %d %d %d", &L, &C, &R1, &R2);

        if (L == 0 && C == 0 && R1 == 0 && R2 == 0){
            break;
        }

        // L <= C
        if (L > C){
            int temp = L;
            L = C;
            C = temp;
        }

        if ((2 * R1 <= L) && (2 * R2 <= L) && 
            (2 * R1 <= C) && (2 * R2 <= C)) {

            double min_dist = sqrt(pow(L - R1 - R2, 2) + pow(C - R1 - R2, 2));

            if (min_dist >= R1 + R2) {
                printf("S\n");
            } else {
                printf("N\n");
            }
        } else {
            printf("N\n");
        }
    }

    return 0;
}