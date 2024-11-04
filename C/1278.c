#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  int primeiro = 1;

  while (1) {
    int n;
    char frases[51][51];
    int maior = 0;

    // Lê o valor de n e para o programa se n for 0
    scanf("%d", &n);
    if (n == 0) {
      break;
    }
    
    getchar();  // Remove o '\n' deixado pelo scanf

    for (int i = 0; i < n; i++) {
      fgets(frases[i], 51, stdin);

      // Remove o caractere de nova linha e espaços extras iniciais e finais
      int j = 0, k = 0;
      while (isspace(frases[i][j])) j++;  // Ignora espaços iniciais

      while (frases[i][j] != '\n' && frases[i][j] != '\0') {
        if (!isspace(frases[i][j]) || (k > 0 && frases[i][k - 1] != ' ')) {
          frases[i][k++] = frases[i][j];
        }
        j++;
      }

      if (k > 0 && frases[i][k - 1] == ' ') k--;  // Remove espaço final, se houver
      frases[i][k] = '\0';  // Finaliza a frase com o caractere nulo

      // Atualiza a maior largura
      int largura = strlen(frases[i]);
      if (largura > maior) {
        maior = largura;
      }
    }

    if (!primeiro) {
      printf("\n");
    }
    primeiro = 0;

    // Imprime as frases justificadas
    for (int i = 0; i < n; i++) {
      int espacos = maior - strlen(frases[i]);
      for (int j = 0; j < espacos; j++) {
        printf(" ");
      }
      printf("%s\n", frases[i]);
    }
  }

  return 0;
}
