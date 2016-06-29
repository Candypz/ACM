#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;


int main448() {
    int n;
    char input[128] = { '\0' };
    char output[128] = { '\0' };
    int m, len, jlen, max, num;
    scanf("%d", &n);
    while (n--) {
        num = jlen = 0;
        scanf("%s%d", input, &m);
        len = strlen(input);
        for (int i = 0; i < len - m; ++i) {
            max = -1;
            for (int j = jlen; j <= m + i; ++j) { //j保证循环次数为需要的位数
                if (max < input[j] - '0') {
                    max = input[j] - '0';
                    jlen = j;
                }
            }
            output[num++] = input[jlen++];
        }
        for (int i = 0; i < len - m; ++i)
            cout << output[i] - '0';
        cout << endl;
    }
    return 0;
}