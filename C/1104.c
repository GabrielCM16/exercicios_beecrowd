#include <stdio.h>
/*
Questão 1104

Dupla
    Gabriel Costa de Moraes
    Matheus Seghatti de Moraes

Troca de Cartas
*/
int main(){
    int a,b;

    while (1){
        scanf("%d %d",&a,&b);
        if (a == 0 && b == 0) break;
        int ali[a], bea[b];
        int difA = 0, difB = 0;

        for (int i = 0; i < a; i++){
            scanf("%d", &ali[i]);
        }

        int aux = 0, anterior = 0;

        //faz a leitura das cartas e ja conta quatas diferentes tem pra beatriz
        for (int i = 0; i < b; i++){
            scanf("%d", &bea[i]);

            if (anterior != bea[i]){
                anterior = bea[i];
                for (int j = 0; j < a; j++){
                    if (bea[i] == ali[j]){
                        break;
                    } else {
                        aux++;
                    }
                }
                if (aux == a){
                    difB++;
                }
            }
            
            aux = 0;
        }

        anterior = 0;

        for (int i = 0; i < a; i++){
            if (anterior != ali[i]){
                for (int j = 0; j < b; j++){
                    if (bea[j] == ali[i]){
                        break;
                    } else {
                        aux++;
                    }
                }
                if (aux == b){
                    difA++;
                }
            }
            
            aux = 0;
        }

        if (difB <= difA){
            printf("%d\n", difB);
        } else {
            printf("%d\n", difA);
        }

    }
      
    return 0;
}
