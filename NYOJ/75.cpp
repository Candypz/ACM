#include <stdio.h>

bool isLeapYear(int year) {
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main75() {
    int n = 0;
    int year, month, day;
    scanf("%d", &n);
    int months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while (n--) {
        int sum = 0;
        scanf("%d%d%d", &year, &month, &day);
        if (isLeapYear(year)) {
            months[1] = 29;
        }
        else {
            months[1] = 28;
        }
        for (int i = 0; i < month - 1; ++i) {
            sum += months[i];
        }
        sum += day;
        printf("%d\n", sum);
    }

    return 0;
}