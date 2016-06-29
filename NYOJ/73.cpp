#include <stdio.h>
#include <string.h>
#include <iostream>

int main73() {
    char a[1001] = { NULL };
    char b[1001] = { NULL };
    while (1) {
        std::cin >> a;
        std::cin >> b;
        int lenA = strlen(a);
        int lenB = strlen(b);
        if (a[0] == '0'&&b[0] == '0') {
            return 0;
        }
        if (a[0] == '-'&&b[0] != a[0]) {
            printf("a<b\n");
        }
        else if (b[0] == '-'&&a[0] != b[0]) {
            printf("a>b\n");
        }
        else if (lenA > lenB) {
            printf("a>b\n");
        }
        else if (lenB > lenA) {
            printf("a<b\n");
        }
        else if (lenA == lenB) {
            for (int i = lenA, j = lenB; i >= 0 && j >= 0; i--, j--) {
                if (a[0] == '-'&&b[0] == '-') {
                    if ((a[i] - 48) > (b[j] - 48)) {
                        printf("a<b\n");
                        break;
                    }
                    else if ((a[i] - 48) < (b[j] - 48)) {
                        printf("a>b\n");
                        break;
                    }
                }
                else {
                    if ((a[i] - 48) > (b[j] - 48)) {
                        printf("a>b\n");
                        break;
                    }
                    else if ((a[i] - 48) < (b[j] - 48)) {
                        printf("a<b\n");
                        break;
                    }
                }
                if (i == 0 && j == 0 && (a[i] - 48) == (b[j] - 48)) {
                    printf("a==b\n");
                    break;
                }
            }

        }
    }

    return 0;
}