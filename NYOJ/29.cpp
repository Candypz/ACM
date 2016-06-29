#include <stdio.h>

int main29() {
    int n = 0;
    int number[3][3] = { 0 };
    scanf("%d", &n);
    int m = 0;
    while (n--) {
        for (int i = 0; i < 9; ++i) {
            scanf("%d", &m);
            number[0][i] = m;
        }
        for (int i = 0; i < 3; ++i) {
            printf("%d %d %d\n", number[0][i], number[0][i + 3], number[0][i + 6]);
            if (i == 2) {
                printf("\n");
            }
        }
    }
    return 0;
}