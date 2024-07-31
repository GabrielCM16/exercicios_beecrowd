#include <stdio.h>

int main(){

    char a[5] = {'A', 'B', 'C', 'D', 'E'};

    while (1){
        int x;
        scanf("%d", &x);

        if (x == 0){
            break;
        }

        int l[5];

        for (int i = 0; i < x; i++){
            
            for (int _ = 0; _ < 5; _++){
                int aux;
                scanf("%d", &aux);
                l[_] = aux;
            }

            char aux = '*';

            for (int j = 0; j < 5; j++){
                if (aux == '*'){
                    if (l[j] <=127){
                        aux = a[j];
                    }
                } else {
                    if (l[j] <= 127){
                        aux = '*';
                        break;
                    }
                }
            }
            printf("%c\n", aux);
        }
    }

    return 0;
}

