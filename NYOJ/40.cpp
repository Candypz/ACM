#include <stdio.h>
#include <algorithm>

//求最大公约数
int gcd(int a, int b) {
    int temp;
    if (a < b) {
        std::swap(a, b);
    }
    return b == 0 ? a : gcd(b, a%b);
}

int main40() {
    int n = 0;
    int a, b, g;
    scanf("%d", &n);
    while (n--) {
        scanf("%d%d", &a, &b);
        g = gcd(a, b);
        printf("%d %d\n", g, (a*b) / g);
    }
    return 0;
}