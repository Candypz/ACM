#include <iostream>
#include <vector>

using namespace std;
int counst[128] = { 0 };

void findParenthese(char *parenthese, int counstNumb) {
    std::vector<char> vectorChar;
    std::vector<char> results;
    std::vector<char>::iterator it;
    for (int i = 0; i < counst[counstNumb]; ++i) {
        vectorChar.push_back(parenthese[i]);
    }


    if (counst[counstNumb] % 2 != 0 || vectorChar.front() == ')' || vectorChar.front() == ']') {
        std::cout << "No" << std::endl;
        return;
    }
    it = vectorChar.begin();
    results.push_back(*it);
    while (!vectorChar.empty()) {
        if (vectorChar.front() == ')' || vectorChar.front() == ']') {
            break;
        }

//         if (!vectorChar.empty()) {
//             if (vectorChar.front() + 1 == *it || vectorChar.front() + 2 == *it) {
//                 vectorChar.erase(it);
//                 vectorChar.erase(vectorChar.begin());
//                 it = vectorChar.begin();
//                 continue;
//             }
//             else {
//                 it++;
//             }
//         }
    }




    //     for (int i = 0; i < vectorChar.size(); ++i) {
    //         std::cout << vectorChar.at(i);
    //     }

    if (results.empty()) {
        std::cout << "Yes" << std::endl;
        return;
    }
    else {
        std::cout << "No" << std::endl;
        return;
    }
}


int main02() {
    int numb = 0;
    char parentheses[128][128] = { '\0' };
    std::cin >> numb;
    int j = 0;

    for (int i = 0; i < numb; ++i) {
        std::cin >> parentheses[i];
        j = 0;
        while (parentheses[i][j] != '\0') {
            j++;
            counst[i] = j;
        }
    }

    for (int i = 0; i < numb; ++i) {
        findParenthese(parentheses[i], i);
    }

    return 0;
}