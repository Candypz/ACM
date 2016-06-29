#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main48() {
    int n = 0;
    int m = 0;
    vector<int> vecNumbers;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &m);
        vecNumbers.push_back(m);
    }

    sort(vecNumbers.begin(),vecNumbers.end());

    //删除相邻的重复元素
    vecNumbers.erase(unique(vecNumbers.begin(), vecNumbers.end()), vecNumbers.end());

    printf("%d\n", vecNumbers.size());
    for (vector<int>::iterator itebeg = vecNumbers.begin(); itebeg != vecNumbers.end(); ++itebeg) {
        printf("%d ", *itebeg);
    }

    return 0;
}