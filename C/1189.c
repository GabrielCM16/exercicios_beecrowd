#include <stdio.h>
#include <string.h>

int main(){
  char sm[2];
  double M[12][12], soma=0, peso=0;

  scanf("%s", sm);
 
  for(int i=0; i<12; i++){
    for(int j=0; j<12; j++){
      scanf("%lf", &M[i][j]);
      }
    }
    for(int i=0; i<12/2; i++){
        for(int j=0; j<i;j++){
            soma+=M[i][j];
            peso++;
        }
    }
    for(int i=12/2; i<12; i++){
        for(int j=0; j<12-(i+1); j++){
            soma+=M[i][j];
            peso++;
        }
    }
 
  if(!(strcmp(sm, "S"))){
    printf("%.1lf\n", soma);
  }
  else
    printf("%.1lf\n", soma/peso);

  return 0;
}
