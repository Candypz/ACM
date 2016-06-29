#include <stdio.h>

using namespace std;

int main39() {
    int n;
    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        if (n == 153 || n == 370 || n == 407 || n == 371) {
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }
    return 0;
}