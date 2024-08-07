#include <stdio.h>

int main() {

    int num[2001] = {0};
    int n, x;
    scanf("%d",&n);

    for(int i = 0 ; i < n ; i++){
        scanf("%d", &x);
        num[x]++;
        }

    for(int i = 0; i < 2001; i++){
        if(num[i] > 0){
            printf("%d aparece %d vez(es)\n",i,num[i]);
            }
        }

    return 0;
}
