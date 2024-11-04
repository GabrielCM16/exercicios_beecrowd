#include <stdio.h>

typedef struct {
    int value;
    node *next;
} node;

int somaL(node L){
    int soma = 0;
    node aux = L;

    while(aux.next != NULL){
        soma += aux.value;
        aux = aux.next;
    }
    
    return soma;
}

int countList(node L){
    int count = 0;
    node aux = L;

    while(aux.next != NULL){
        count++;
        aux = aux.next;
    }

    return count + 1;
}

float mediaL(node L){
    int soma = somaL(L);
    return (float)soma / countList(L);
}

// Desaloca todos os elementos de L da memória
void freeList(node L){
    node aux = L;
    while(L.next != NULL){
        aux = L;
        L = L.next;
        free(aux);
    }
}



// Remove primeira aparição do elemento da lista
int RemoveFromList(node L, int x){
    node aux = L;
    while(aux.next!= NULL){
        if(aux.next->value == x){
            node* found_x = aux.next; // Auxiliar para remover da memória onde tem o elemento x
            aux.next = aux.next->next; // Próximo elemento recebe o elemento depois do elemento x
            free(found_x); // Libera o elemento que possui o elemento x
            return 0;
        }
        aux = aux.next;
    }
    return 0;
}



//testar dps
int sumList(node *head){
    if(head == NULL) return 0;
    return head->value + sumNode(head->next);
}
