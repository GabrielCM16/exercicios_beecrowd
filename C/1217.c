#include <stdio.h>

int main() {
    int n, i, j, num, kg;
    float preco, total;
    char frutas[10000];
    
    scanf("%d", &n); 
    total = 0.0;
    kg = 0;
    
    for (i = 0; i < n; i++) {
        num = 0;
        scanf("%f%*c", &preco); 
        total += preco;
        
        scanf("%[^\n]%*c", frutas);
        
        // Conta o número de frutas
        for (j = 0; frutas[j] != '\0'; j++) {
            if (frutas[j] == ' ') {
                num++;
            }
        }
        kg += num + 1; 
        printf("day %d: %d kg\n", i + 1, num + 1);
    }
    
    printf("%.2f kg by day\n", (float)kg / n);
    printf("R$ %.2f by day\n", total / n);
    
    return 0;
}
