#include <stdio.h>
/*
Questão 1089

Dupla
    Gabriel Costa de Moraes
    Matheus Seghatti de Moraes

determinar quantos picos existem em um loop musical.

*/
int main(){
    int nAmostras = 0, res = 0;

    while (1){
        scanf("%d", &nAmostras);

        if (nAmostras == 0){
            break;
        }

        int amostras[nAmostras];
        for (int i = 0; i < nAmostras; i++){
            scanf("%d", &amostras[i]);
        }

        for (int i = 0; i < nAmostras; i++){      
            int prev = (i == 0) ? nAmostras - 1 : i - 1;   //anterior
            int next = (i + 1) % nAmostras;                //próximo
            
            if ((amostras[prev] < amostras[i] && amostras[i] > amostras[next]) || 
                (amostras[prev] > amostras[i] && amostras[i] < amostras[next])) {
                res++;
            }
        }

        printf("%d\n", res);
        res = 0;
    }
    return 0;
}
