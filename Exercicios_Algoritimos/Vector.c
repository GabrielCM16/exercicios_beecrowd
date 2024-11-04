#include <stdio.h>
#include <stdlib.h>
#include "Vector.h"

short initVector(Vector *V, unsigned size){
    V->data = (dado*)calloc(size, sizeof(dado));

    if (!V->data){
        return -1;
    } 

    V->size = size;
    return 0;
}

void freeVector(Vector *V){
    free(V->data);
    V->size = 0;
}

void printVector(Vector V){
    printf("]");
    for (unsigned i = 0; i < V.size; i++){
        printf(" %hd", V.data[i]);
        if (i < V.size - 1){
            printf(", ");
        }
    }

    printf("]\n");
}

void scanVector(Vector *V){
    for (unsigned i = 0; i < V->size; i++){
        scanf("%hd", &V->data[i]);
    }
}