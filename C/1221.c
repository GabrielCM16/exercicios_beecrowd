#include <stdio.h>
/*
Questão 1221

Dupla
    Gabriel Costa de Moraes
    Matheus Seghatti de Moraes

numero primo

*/
int main(){
    int n;
    scanf("%d",&n);

    for (int i = 0; i < n; i++){
        int num;
        scanf("%d",&num);

        int primo = 1;
        for (int j = 2; j <= num / 2; j++){
                if (num % j == 0){
                    primo = 0;
                    break;
                }
        }
        printf("%s\n", primo ? "Prime" : "Not Prime");
        
    }
      
    return 0;
}
