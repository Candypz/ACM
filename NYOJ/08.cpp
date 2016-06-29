#include <stdio.h>
#include <vector>
#include <algorithm>

struct Point {
    int number;
    int x;
    int y;
    Point() :number(0), x(0), y(0) {}
}point[1001];


int ompter(const void *number1, const void *number2) {
    struct Point *a = (Point *)number1;
    struct Point *b = (Point *)number2;

    if (a->number != b->number) {
        return b->number < a->number;
    }
    else if (a->x != b->x&&a->number == b->number) {
        return b->x < a->x;
    }
    else {
        return b->y < a->y;
    }
}

int main08() {
    int n = 0;
    scanf("%d", &n);

    while (n--) {
        int m = 0;
        int mk = 0;
        int c, k;
        scanf("%d", &m);
        mk = m;
        while (m--) {
            scanf("%d%d%d", &point[m].number, &c, &k);
            if (c >= k) {
                point[m].x = c;
                point[m].y = k;
            }
            else {
                point[m].x = k;
                point[m].y = c;
            }
        }

        std::qsort(point, mk, sizeof(point[0]), ompter);

        for (int i = 0; i < mk; ++i) {
            for (int j = i + 1; j < mk; ++j) {
                if (point[i].number == point[j].number&&
                    point[i].x == point[j].x&&
                    point[i].y == point[j].y) {
                    point[i].number = -1;
                }
            }
            if (point[i].number != -1) {
                printf("%d %d %d\n", point[i].number, point[i].x, point[i].y);
            }
        }
    }

    return 0;
}