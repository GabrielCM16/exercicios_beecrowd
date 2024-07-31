#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int fb = 0;
    int ant = 1;
    int temp;

    for (int i = 0; i < n; i++){
        if (i == n - 1) {
            printf("%d", fb);
        } else {
            printf("%d ", fb);
        }
        temp = fb + ant;
        fb = ant;
        ant = temp;
    }

    printf("\n");

    return 0;
}
