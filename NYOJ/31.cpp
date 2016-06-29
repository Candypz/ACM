#include <stdio.h>

int main31() {
    int a[5];
    int min, max;

    for (int i = 0; i < 5; ++i) {
        scanf("%d", &a[i]);
    }

    min = max = a[1];

    for (int i = 0; i < 5; ++i) {
        if (max<a[i]) {
            max = a[i];
        }

        if (min>a[i]) {
            min = a[i];
        }
    }

    printf("%d %d", min, max);

    return 0;
}