#include <stdio.h>

int main() {
    
    int a,b,c,d, flag = 0;

    scanf("%d %d %d %d",&a,&b,&c,&d);

    if ((a < b + c) && (b < a + c) && (c < a + b)){
        flag++;
    }
    if ((a < b + d) && (b < a + d) && (d < a + b)){
        flag++;
    }
    if ((a < c + d) && (c < a + d) && (d < a + c)){
        flag++;
    }
    if ((b < c + d) && (c < b + d) && (d < b + c)){
        flag++;
    }

    printf("%c\n", flag? 'S': 'N');
    
    return 0;
}
