#include <stdio.h>
#include <string.h>

#define MAX_LEN 51

int main() {
    int N;
    scanf("%d", &N);
    getchar();

    for (int t = 0; t < N; t++) {
        char str1[MAX_LEN], str2[MAX_LEN];
        char resultado[2 * MAX_LEN];
        int i = 0, j = 0, k = 0;

        scanf("%s %s", str1, str2);

        int len1 = strlen(str1);
        int len2 = strlen(str2);

        while (i < len1 && j < len2) {
            resultado[k++] = str1[i++];
            resultado[k++] = str2[j++];
        }

        while (i < len1) {
            resultado[k++] = str1[i++];
        }
        while (j < len2) {
            resultado[k++] = str2[j++];
        }

        resultado[k] = '\0';
        printf("%s\n", resultado);
    }

    return 0;
}
