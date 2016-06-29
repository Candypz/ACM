#include <stdio.h>

int main98() {
    int n = 0;
    int number = 0;
    scanf("%d", &n);

    while (n--) {
        scanf("%d", &number);
        if (number >= 90) {
            printf("A\n");
        }
        else if (number >= 80 && number < 90) {
            printf("B\n");
        }
        else if (number >= 70 && number < 80) {
            printf("C\n");
        }
        else if (number >= 60 && number < 70) {
            printf("D\n");
        }
        else {
            printf("E\n");
        }
    }

    return 0;
}