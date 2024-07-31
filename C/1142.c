#include <stdio.h>

int main(){

    int x;
    scanf("%d",&x);
    int aux = 1;
    for (int i = 1; i <= x; i++){
        printf("%d %d %d PUM\n", aux, (aux + 1), (aux + 2) );
        aux += 4;
    }

    return 0;
}