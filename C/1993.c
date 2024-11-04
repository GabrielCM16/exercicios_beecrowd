#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/*
Questão 1993

Dupla
    Gabriel Costa de Moraes
    Matheus Seghatti de Moraes

Conversão entre Bases

*/

int binarioParaDecimal(const char *binario) {
    int decimal = 0;

    for (int i = 0; binario[i] != '\0'; i++) {
        decimal = decimal * 2 + (binario[i] - '0');  
    }

    return decimal;
}


void decimalParaBinario(int n) {
   
    int binario[32];  
    int i = 0;
 
    if (n == 0) {
        printf("0");
        return;
    }
    while (n > 0) {
        binario[i] = n % 2;  
        n = n / 2;
        i++;
    }
 
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
  printf(" bin\n");
}

int valorHex(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    } else if (c >= 'A' && c <= 'F') {
        return c - 'A' + 10;  
    } else if (c >= 'a' && c <= 'f') {
        return c - 'a' + 10;  
    } else {
        return -1;  
    }
}

int main() {
  int n;

  scanf("%d", &n);

  for(int i = 1; i <= n; i++) {
    char x[33];
    char tipo[4];
    int dec=0;
    int bin = 0;
    int decimal2 = 0;

    scanf("%s", x);
    scanf("%s", tipo);

    printf("Case %d:\n", i);
   
    if(!strcmp(tipo, "bin")) {
      dec = binarioParaDecimal(x);
      printf("%d dec\n", dec);
      printf("%X hex\n", dec);
    } else if(!strcmp(tipo, "dec")) {
      printf("%X hex\n", atoi(x));
      decimalParaBinario(atoi(x));
    } else {
      int len = strlen(x);
     
      for (int j = 0; j < len; j++) {
          int valor = valorHex(x[j]);
          decimal2 += valor * pow(16, len - j - 1);
      }
     
      printf("%d dec\n", decimal2);
      decimalParaBinario(decimal2);
    }
    if (i != n){
        printf("\n");
    } 
    
  }

  return 0;
}
