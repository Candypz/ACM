#include <stdio.h>
#include <string.h>

int main113() {
    char number[1001] = { NULL };
    while (scanf("%s", number) != EOF) {
        int len = strlen(number);
        
        for (int i = 0; i < len; ++i) {
            if (number[i] == 'y'&&number[i + 1] == 'o'&&number[i + 2] == 'u') {
                number[i] = 'w';
                number[i + 1] = 'e';
                for (int j = i + 2; j < len; ++j) {
                    number[j] = number[j + 1];
                }
            }
        }
        printf("%s ", number);
    }
    return 0;
}