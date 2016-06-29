#include <stdio.h>
#include <algorithm>
#include <string.h>

bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main62() {
    int n = 0;
    scanf("%d", &n);
    char words[101] = { NULL };
    while (n--) {
        scanf("%s", words);
        int len = strlen(words);
        char worda = NULL;
        int max = 0;
        int min = 101;
        for (int i = 0; i < len; ++i) {
            int maxn = 0;
            worda = words[i];
            for (int j = 0; j < len; ++j) {
                if (worda == words[j]) {
                    ++maxn;
                }
            }
            if (maxn > max) {
                max = maxn;
            }
            if (min > maxn) {
                min = maxn;
            }
        }
        int mix = max - min;
        if (is_prime(mix)) {
            printf("Lucky Word\n%d\n", mix);
        }
        else {
            printf("No Answer\n0\n");
        }
    }
    return 0;
}