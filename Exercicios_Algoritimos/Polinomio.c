#include <stdio.h>

typedef struct {
    int coeficients[50];
    int degree;
} polinomio;


void scanPoli(polinomio *P){
    scanf("%d", &P->degree);

    for(int i = P->degree; i >= 0; i--){
        scanf("%d", &P->coeficients[i]); 
    }
}

void printPoli(polinomio P){
    printf("Grau do polinômio: %d\n", P.degree);

    for(int i = P.degree; i >= 0; i--)
        printf("%dx^%d ", P.coeficients[i], i);

    printf("\n\n");
}


polinomio somarPolinomios(polinomio p1, polinomio p2) { 
    polinomio resultado;
    // O grau do polinômio resultante será o maior entre os dois graus
    resultado.degree = (p1.degree > p2.degree) ? p1.degree : p2.degree;

    // Inicializar os coeficientes com 0
    for (int i = 0; i <= resultado.degree; i++) {
        resultado.coeficients[i] = 0;
    }

    // Somar os coeficientes de p1 e p2
    for (int i = 0; i <= p1.degree; i++) {
        resultado.coeficients[i] += p1.coeficients[i];
    }

    for (int i = 0; i <= p2.degree; i++) {
        resultado.coeficients[i] += p2.coeficients[i];
    }

    // Exibir a soma dos polinômios
    printPoli(resultado);

    return resultado;
}

polinomio multiplicarPolinomios(polinomio p1, polinomio p2) {
    polinomio resultado;

    // O grau do polinômio resultante é a soma dos graus dos dois polinômios
    resultado.degree = p1.degree + p2.degree;

    // Inicializar todos os coeficientes com 0
    for (int i = 0; i <= resultado.degree; i++) {
        resultado.coeficients[i] = 0;
    }

    // Multiplicando os polinômios
    for (int i = 0; i <= p1.degree; i++) {
        for (int j = 0; j <= p2.degree; j++) {
            resultado.coeficients[i + j] += p1.coeficients[i] * p2.coeficients[j];
        }
    }

    printPoli(resultado);

    return resultado;
}


polinomio dividirPoli(polinomio p1, polinomio p2) {

    polinomio resultado;

    // Inicializando os coeficientes
    for (int i = 0; i <= quociente.degree; i++) {
        quociente.coeficients[i] = 0;
    }

    return resultado;

}



int main(){
    polinomio p1, p2;
    p1.degree = 5;
    p1.coeficients[0] = 6;
    p1.coeficients[1] = 7;
    p1.coeficients[2] = 8;
    p1.coeficients[3] = 9;
    p1.coeficients[4] = 10;
    p1.coeficients[5] = 0; 

    printPoli(p1);

    p2.degree = 4;
    p2.coeficients[0] = 1;
    p2.coeficients[1] = 2;
    p2.coeficients[2] = 3;
    p2.coeficients[3] = 4;
    p2.coeficients[4] = 5;

    printPoli(p2);

    polinomio p3, p4;
    printf("soma de p1 e p2\n");
    p3 = somarPolinomios(p1, p2);

    printf("multiplicacao de p1 e p2\n");
    p4 = multiplicarPolinomios(p1, p2);

    return 0;
}
