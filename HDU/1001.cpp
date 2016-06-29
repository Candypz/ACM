#include<stdio.h>

int main1001() {
    double n;
    while (scanf("%lf", &n) != EOF) {
        printf("%d\n\n", (int)((1 + n)*n / 2));
    }

    return 0;
}