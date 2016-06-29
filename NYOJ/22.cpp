#include <stdio.h>
#include <vector>

using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i < n; ++i) {
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}

int main22() {
    int n = 0;
    int m = 0;
    int number[10001] = { 0 };
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &m);
        int sum = 0;
        for (int i = 0; i < m; ++i) {
            scanf("%d", &number[i]);
            if (isPrime(number[i])) {
                sum += number[i];
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}