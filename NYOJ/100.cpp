#include <stdio.h>
#include <iostream>

void dtoB(int d) {
    int nn = 0;
    int a = 0;
    while (1) {
        if (d <= 0) {
            break;
        }
        a = d % 2;
        if (a == 1) {
            nn++;
        }
        d = d / 2;
    }
    std::cout << nn << std::endl;
}

int main100() {
    int n = 0;

    scanf("%d", &n);

    while (n--) {
        int bn;
        scanf("%d", &bn);
        dtoB(bn);
    }
    return 0;
}