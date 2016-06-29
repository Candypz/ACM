#include <stdio.h>
#include <algorithm>

int main04() {
    int n = 0;

    scanf("%d", &n);

    while (n--) {
        char a[4];
        scanf("%c%c%c%c", &a[0], &a[1], &a[2],&a[3]);
        std::sort(a, a + 4);
        printf("%c %c %c\n", a[1], a[2], a[3]);
    }


    return 0;
}