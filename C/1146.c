#include <stdio.h>

int main() {
    int N;

    while (scanf("%d", &N)){
        if (N == 0) break;
        for (int i = 1; i <= N; i++){
            if (i == N){
                printf("%d\n", i);
            } else {
                printf("%d ", i);
            }
        }
    }

    return 0;
}
