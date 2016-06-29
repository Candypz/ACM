#include <stdio.h>

int main1090() {
    int n = 0;
    int a, b;
    scanf("%d", &n);
    while (n--) {
        scanf("%d%d", &a, &b);
        printf("%d\n", a + b);
    }

    return 0;
}