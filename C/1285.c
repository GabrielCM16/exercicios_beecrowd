#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool caracter(char *str) {
    for (int i = 0; i < (strlen(str) - 1); i++) {
        for (int j = i; j < (strlen(str) - 1); j++) {
            if (str[i] == str[j+1]) {
                return true;
            }
        }
    }
    return false;
}

int main(){

    int a, b;

	while (scanf("%d %d", &a, &b) != EOF ){
        int n = 0;
        for (int i = a; i <= b; i++){
            char str[4];
            sprintf(str, "%d", i);
            if (!caracter(str)){
                n++;
            }
        }
        printf("%d\n", n);
    }

    return 0;
}