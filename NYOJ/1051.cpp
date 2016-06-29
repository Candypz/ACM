#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

void getNext(char *p, vector<int> &next) {
    next.resize(strlen(p));
    next[0] = -1;
    int i = 0, j = -1;

    while (i != strlen(p) - 1) {
        if (j == -1 || p[i] == p[j]) {
            ++i;
            ++j;
            next[i] = j;
        }
        else {
            j = next[j];
        }
    }
}

int kmp(char *s, char *p) {
    vector<int>next(strlen(p));
    getNext(p, next);
    string::size_type index, count = 0;
    for (index = 0; index < strlen(s); ++index) {
        int pos = 0;
        string::size_type iter = index;
        while (pos < strlen(p) && iter < strlen(s)) {
            if (s[iter] == p[pos]) {
                ++iter;
                ++pos;
            }
            else {
                if (pos == 0) {
                    ++iter;
                }
                else {
                    pos = next[pos - 1] + 1;
                }
            }
        }
        if (pos == strlen(p) && (iter - index) == strlen(p)) {
            ++count;
        }
    }
    return count;
}

int main1051() {
    int n = 0;
    char c;
    scanf("%d", &n);
    while (n--) {
        char data[128] = { '\0' };
        char str[128] = { '\0' };

        cin >> data;
        cin >> str;

        cout << kmp(data, str) << endl;
    }


    return 0;
}
