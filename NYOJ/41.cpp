#include <stdio.h>
#include <algorithm>

int main41() {
    int a[3];
    int temp;

    for (int i = 0; i < 3; ++i) {
        scanf("%d,%d,%d", &a[i]);
    }

    std::sort(a, a + 3);

    for (int i = 0; i < 3; ++i) {
        printf("%d ", a[i]);
    }


    return 0;
}