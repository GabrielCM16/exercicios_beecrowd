#include <stdio.h>
#include <string.h>

/*
Questão 1273

Dupla
    Gabriel Costa de Moraes
    Matheus Seghatti de Moraes

Justificador

*/

int main() {
  int primeiro = 1; 

  while (1) {
    int n;
    char palavras[51][51];
    int maior = 0, aux = 0;
    
    scanf("%d", &n);
    
    if (n == 0)
      break;

    for (int i = 0; i < n; i++) {
      scanf("%s", palavras[i]);
      aux = strlen(palavras[i]);
      if (aux > maior) {
        maior = aux;
      }
    }

    if (!primeiro) {
      printf("\n");
    }
    primeiro = 0; 


    for (int i = 0; i < n; i++) {
      int espacos = maior - strlen(palavras[i]);
      for (int j = 0; j < espacos; j++) {
        printf(" ");
      }
      printf("%s\n", palavras[i]);
    }
  }
  
  return 0;
}
