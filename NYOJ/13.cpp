#include <stdio.h>

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main13() {
    int n;
    int number[20];
    for (int i = 0; i < 20; ++i) {
        number[i] = fibonacci(i + 1);
    }
    scanf("%d", &n);
    while (n--) {
        int k = 0;
        scanf("%d", &k);
        printf("%d\n", number[k - 1]);
    }

    return 0;
}