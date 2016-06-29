#include <stdio.h>
#include <algorithm>

struct BAG {
    int v;
    int w;
}bags[11];

int cmp(const void *a, const void *b) {
    return (*(BAG*)a).v < (*(BAG*)b).v;
}

int main106() {
    int n = 0;
    scanf("%d", &n);
    while (n--) {
        int s, m;
        int sum = 0;
        int coin = 0;
        scanf("%d%d", &s, &m);
        for (int i = 0; i < s; ++i) {
            scanf("%d%d", &bags[i].v, &bags[i].w);
        }
        std::qsort(bags, s, sizeof(bags[0]), cmp);
        for (int i = 0; i < s; ++i) {

        }
    }

    return 0;
}