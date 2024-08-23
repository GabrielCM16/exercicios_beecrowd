#include <stdio.h>

int main(){
  int n, r, cent, v[1000];
  double t1, t2, total, x;

  while(scanf("%d", &n) && n){
    total=0;
    x=0;
    t1=0;
    t2=0;
    
    for(int i=0; i<n; i++){
      scanf("%d.%d", &r, &cent);
      v[i]=r*100+cent;
      total+=v[i];

    }

    x=((double)total)/n;


    for(int i=0; i<n; i++){

      if(v[i]<x){

        t1+=(int)(x-v[i])/100.0;
      }

      else{
        t2+=(int)(v[i]-x)/100.0;
      }
    }

    if(t1>t2){
        printf("$%.2lf\n", t1);
    } else{
        printf("$%.2lf\n", t2);
    }
  }

  return 0;
}