#include <stdio.h>

int main(){
    float r;

    scanf("%f",&r);

    if (r <= 25.0 && r >= 0){
        printf("Intervalo [0,25]\n");
    } else if (r <= 50.0 && r > 0){
        printf("Intervalo (25,50]\n");
    } else if (r <= 75.0 && r > 0){ 
        printf("Intervalo (50,75]\n");
    } else if (r <= 100.0 && r > 0){
        printf("Intervalo (75,100]\n");
    } else {
        printf("Fora de intervalo\n");
    }

    return 0;
}