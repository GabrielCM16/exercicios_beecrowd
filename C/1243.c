#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    char a[MAX_LEN];
    
    while (fgets(a, sizeof(a), stdin)) {
        a[strcspn(a, "\n")] = '\0';

        int numberOfWords = 0;
        int lengthsOfTheWords = 0;
        int isWord = 0;
        int isDot = 0;
        int isDigit = 0;
        char temp[MAX_LEN];
        int temp_len = 0;

        for (int i = 0; a[i] != '\0'; i++) {
            char ch = a[i];

            if (isalpha(ch)) {
                temp[temp_len++] = ch;
                isWord = !isDot && !isDigit;
            } else if (ch == ' ') {
                if (temp_len > 0) {
                    temp[temp_len] = '\0';
                    if (isWord) {
                        if (isDot) {
                            numberOfWords++;
                            lengthsOfTheWords += temp_len - 1; 
                        } else {
                            numberOfWords++;
                            lengthsOfTheWords += temp_len;
                        }
                    }
                    temp_len = 0;
                }
                isWord = 0;
                isDot = 0;
                isDigit = 0;
            } else if (isdigit(ch)) {
                temp[temp_len++] = ch;
                isDigit = 1;
                isWord = 0;
            } else if (ch == '.') {
                temp[temp_len++] = ch;
                if (isDot) {
                    isWord = 0;
                } else {
                    isDot = 1;
                }
            }
        }

        if (temp_len > 0) {
            temp[temp_len] = '\0';
            if (isWord) {
                if (isDot) {
                    numberOfWords++;
                    lengthsOfTheWords += temp_len - 1; 
                } else {
                    numberOfWords++;
                    lengthsOfTheWords += temp_len;
                }
            }
        }

        int averageLength = (numberOfWords > 0) ? lengthsOfTheWords / numberOfWords : 0;

        if (averageLength <= 3) {
            printf("250\n");
        } else if (averageLength == 4 || averageLength == 5) {
            printf("500\n");
        } else if (averageLength >= 6) {
            printf("1000\n");
        } else {
            printf("250\n");
        }
    }

    return 0;
}
