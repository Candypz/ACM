#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main1004() {
    int m = 0;
    int k = 0;
    string color, getColor;
    vector<string> strVector;
    while (scanf("%d", &m) != EOF) {
        for (int i = 0; i < m; ++i) {
            cin >> color;
            strVector.push_back(color);
        }
        int max = 0, temp = 0;
        int i = 1;
        for (vector<string>::iterator it = strVector.begin(); it != strVector.end() && i < strVector.size(); ++it) {
            if (*(it) == strVector.at(i)) {
                ++temp;
            }
            if (temp > max) {
                max = temp;
                getColor = *it;
            }
        }

        cout << getColor << endl;
    }

    return 0;
}