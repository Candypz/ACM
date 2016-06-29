#include <stdio.h>
#include <algorithm>

int main678() {
    int a, b;
    int number[100001] = { 0 };
    while (~scanf("%d%d", &a, &b)) {
        int sum = 0;
        for (int i = 0; i < a; ++i) {
            scanf("%d", &number[i]);
        }
        std::sort(number, number + a);
        for (int i = 0; i < b; ++i) {
            sum += number[i];
        }
        printf("%d\n", sum);
    }
    return 0;
}
