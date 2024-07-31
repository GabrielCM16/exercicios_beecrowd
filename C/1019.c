#include <stdio.h>
#include <math.h>

int main(){

    int segundos;
    scanf("%d",&segundos);

    int hora = segundos / 3600;
    segundos = segundos % 3600;
    int minutos = segundos / 60;
    segundos = segundos % 60;

    printf("%d:%d:%d\n",hora,minutos,segundos);

    return 0;
}