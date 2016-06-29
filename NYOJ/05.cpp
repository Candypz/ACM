#include <iostream>
#include <string>
#include <vector>

using namespace std;

void getNext(string &p, vector<int> &next) {
    next.resize(p.size());
    next[0] = -1;
    int i = 0, j = -1;

    while (i != p.size() - 1) {
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

int kmp(string &s, string &p) {
    vector<int>next(p.size());
    getNext(p, next);
    string::size_type index, count = 0;
    for (index = 0; index < s.size(); ++index) {
        int pos = 0;
        string::size_type iter = index;
        while (pos < p.size() && iter < s.size()) {
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
        if (pos == p.size() && (iter - index) == p.size()) {
            ++count;
        }
    }
    return count;
}


int main05() {
    int n = 0;
    cin >> n;
    while (n--) {
        string data;
        string matching;
        cin >> matching;
        cin >> data;

        cout << kmp(data, matching) << endl;
    }


    return 0;
}