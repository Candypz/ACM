#include <stdio.h>
#include <math.h>

struct point {
    double x, y;
    point() :x(0), y(0) {}
}poin[10001];

int main03() {
    int n = 0;
    scanf("%d", &n);

    while (n--) {
        int m;
        double result = 0;
        point ans;
        scanf("%d", &m);
        for (int i = 0; i < m; ++i) {
            scanf("%lf%lf", &poin[i].x, &poin[i].y);
        }
        for (int i = 1; i <= m; ++i) {
            double temp = (poin[i % m].x * poin[i - 1].y - poin[i % m].y * poin[i - 1].x) / 2.0;
            result += temp;
            ans.x += temp * (poin[i % m].x + poin[i - 1].x) / 3.0;
            ans.y += temp * (poin[i % m].y + poin[i - 1].y) / 3.0;
        }
        if (fabs(result - 0) < 0.0000001) {
            printf("0.000 0.000\n");
        }
        else {
            printf("%.3lf %.3lf\n", fabs(result), (ans.x + ans.y) / result);
        }
    }

    return 0;
}