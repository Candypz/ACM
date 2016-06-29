#include<stdio.h>

int main874() {
    int n = 0;
    int m = 0;
    int sum = 0;
    int a[21] = { 0, 1, 2, 3, 4, 10, 11, 12, 13, 19, 20, 21, 22, 28, 29, 30, 31, 37, 38, 39, 40 };
    while (~scanf("%d%d", &m, &n)) {
        sum = m + a[n];
        printf("%d\n", sum);
    }
    return 0;

}