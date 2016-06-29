#include <stdio.h>
#include <algorithm>

int comp(const void *a, const void *b) {
    return (*(double *)b > *(double *)a?1:-1);
}

int main06() {
    int n = 0;
    scanf("%d", &n);
    while (n--) {
        int m = 0;
        double number[601] = { 0 };
        double sum = 0;
        scanf("%d", &m);
        for (int i = 0; i < m; ++i) {
            scanf("%lf", &number[i]);
        }
        std::qsort(number, m, sizeof(double), comp);

        for (int i = 0; i < m; ++i) {
            sum += number[i];
            if (sum > 10) {
                printf("%d\n", i+1);
                break;
            }
        }
    }

    return 0;
}