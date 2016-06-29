#include <stdio.h>

bool isPrime_(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main24() {
    int n = 0;
    scanf("%d", &n);
    int number = 0;
    while (n--) {
        scanf("%d", &number);
        int i = 1;
        if (isPrime_(number)) {
            printf("%d %d\n", number, 0);
            continue;
        }
        if (number == 1) {
            printf("2 1\n");
            continue;
        }
        while (1) {
            if (isPrime_(number - i)) {
                printf("%d %d\n", number - i, i);
                break;
            }
            if (isPrime_(number + i)) {
                printf("%d %d\n", number + i, i);
                break;
            }
            i++;
        }
    }

    return 0;
}