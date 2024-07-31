#include <stdio.h>

int main(){

    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);

    int maior = a;
    int menor = a;
    int meio = a;
    
    //pegando o maior
    if (b > maior){
        maior = b;
    }
    if (c > maior){
        maior = c;
    }

    //pegando o menor
    if (b < menor){
        menor = b;
    }
    if (c < menor){
        menor = c;
    }

    //pegando o meio
    if (b < maior && b > menor){
        meio = b;
    }
    if (c < maior && c > menor){
        meio = c;
    }

    printf("%d\n%d\n%d\n\n",menor, meio, maior);
    printf("%d\n%d\n%d\n",a,b,c);

    return 0;
}