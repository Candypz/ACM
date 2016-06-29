#include <stdio.h>
#include <cmath>

int main101() {
    int n = 0;
    double x1, x2, y1, y2, dt;
    scanf("%d", &n);
    while (n--) {
        scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
        dt = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
        printf("%.2lf\n", sqrt(dt));
    }
    return 0;
}