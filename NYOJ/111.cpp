#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void tongfeng(int &a, int &b, int &a1, int &b1) {
    int _b = b;
    a  *=  b1;
    b  *=  b1;
    a1 *= _b;
    b1 *= _b;
}

int gcd(int a, int b) {
    if (a%b == 0) {
        return b;
    }
    return gcd(b, a%b);
}

int mysub(char &sub, int a, int a1) {
    switch (sub) {
        case '+':
            return a + a1;
            break;
        case '-':
            return a - a1;
            break;
        default:
            break;
    }
}

int main() {
    int a, b, a1, b1;
    char s1, s2, sub;
    while (scanf("%d%c%d%c%d%c%d", &a, &s1, &b, &sub, &a1, &s2, &b1) != EOF) {
        tongfeng(a, b, a1, b1);
        int fengzi = mysub(sub, a, a1);
        int myGcd = gcd(fengzi, b);
        if (fengzi == 0) {
            printf("0\n");
        } 
        else if(b / abs(myGcd) == 1) {
            printf("%d\n", fengzi / abs(myGcd));
        }
        else {
            printf("%d/%d\n", fengzi / abs(myGcd), b / abs(myGcd));
        }   
    }
    return 0;
}