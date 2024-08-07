#include <stdio.h>
#include <string.h>

int main(){
    char sm[2];
    double M[12][12], soma = 0;
    int peso = 0;

    // Leitura do tipo de operação ("S" para soma, "M" para média)
    scanf("%s", sm);

    // Leitura dos elementos da matriz 12x12
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);
        }
    }

    // Cálculo da soma dos elementos na parte inferior
    for(int i = 1; i < 12; i++){
        for(int j = 12 - i; j < i; j++){
            soma += M[i][j];
            peso++;
        }
    }

    // Verificação da operação e impressão do resultado
    if(strcmp(sm, "S") == 0){
        printf("%.1lf\n", soma);
    } else if (strcmp(sm, "M") == 0){
        printf("%.1lf\n", soma / peso);
    }

    return 0;
}
