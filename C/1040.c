#include <stdio.h>

int main(){

    float a,b,c,d;
    scanf("%f %f %f %f",&a,&b,&c,&d);

    double media = (2.0 * a + 3.0 * b + 4.0 * c + 1.0 * d) / 10.0;

    printf("Media: %.1f\n", media);
    
    if (media >= 7.0){
        printf("Aluno aprovado.\n");
    } else if (media < 5.0){
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        float e;
        scanf("%f",&e);
        printf("Nota do exame: %.1f\n", e);

        media = (media + e) / 2.0;
        if (media >= 5.0){
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", media);
    }

    return 0;
}