#include <stdio.h>
#include <algorithm>


int main1080() {
    int n = 0;
    scanf("%d", &n);
    int a[152] = { 0 };
    int k;

    for (int i = 0; i < n; ++i) {
        scanf("%d", &k);
        a[k]++;
    }

    //std::sort(a, a + n);

    for (int j = 0; j <= 150; ++j) {
        for (int i = 0; i < a[j]; ++i) {
            printf("%d ", j);
        }
    }
    

    return 0;
}