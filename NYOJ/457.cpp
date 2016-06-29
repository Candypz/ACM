#include <stdio.h>
#include <string.h>

int main457() {
    char letter[101] = { NULL };
    int n = 0;

    scanf("%d", &n);

    while (n--) {
        scanf("%s", letter);
        for (int i = 0; i < strlen(letter); ++i) {
            if (letter[i] >= 'Z') {
                letter[i] = letter[i] - 32;
            }
            else {
                letter[i] = letter[i] + 32;
            }
            printf("%c", letter[i]);
        }
        printf("\n");
    }
}