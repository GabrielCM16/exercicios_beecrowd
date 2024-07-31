#include <stdio.h>

int main(){

    int a,n = 0;
    scanf("%d",&a);

    while (n <= 0){
        scanf("%d",&n);
    }
    int soma = 0;

    for (int i = 0; i < n; i++){
        soma += a + i;
    }

    printf("%d\n", soma);
    
    return 0;
}