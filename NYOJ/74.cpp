#include <stdio.h>

int main74() {
    int a = 0;
    int b = 0;
    while (1) {
        scanf("%d%d", &a, &b);
        if (a == 0 && b == 0) {
            return 0;
        }
        int k = 0;
        int n = 0;
        for (int i = 0; i < 3; ++i) {
            k = a % 10 + b % 10 + k;
            if (k > 10) {
                n++;
                k = k % 10;
            }
            else if (k == 10) {
                n++;
                k = 1;
            }
            else {
                k = 0;
            }
            a = a / 10;
            b = b / 10;
        }
        printf("%d\n", n);
    }

    return 0;
}