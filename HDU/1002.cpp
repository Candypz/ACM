#include <iostream>
#include <string>

using namespace std;

#define MAXLEN(a,b) a>b?a:b
#define MINLEN(a,b) a<b?a:b

string add(string a, string b) {
    char cd[1000] = { NULL };
    string::reverse_iterator  ait;
    string::reverse_iterator  bit;
    int j = 0;
    for (ait = a.rbegin(), bit = b.rbegin(); ait != a.rbegin() && bit != b.rbegin(); ++ait, ++bit) {
        if ((*ait - 48) + (*bit - 48) >= 10) {
            cd[j+1] = ((*ait - 48) + (*bit - 48) / 10) + 48;
            cd[j] = (((*ait - 48) + (*bit - 48)) % 10) + 48;
        }
        else {
            cd[j] = ((*ait - 48) + (*bit - 48)) + 48;
        }
        ++j;
    }
    return cd;
}

int main1002() {
    int n;
    int cost = 0;
    string a, b, c;
    cin >> n;
    while (n--) {
        cost++;
        cin >> a >> b;
        c = add(a, b);
        printf("Case %d:\n", cost);
        cout << a << " + " << b << " = " << c << endl << endl;
    }

    return 0;
}