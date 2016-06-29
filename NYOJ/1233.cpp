#include <stdio.h>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

bool compare(string a, string b){
	return a > b;
}

int main1233(){

	int n = 0;
	int m = 0;
	string number[1000];
	string min;
	string max;
	int imin;
	int imax;
	scanf("%d", &n);

	while (n--){
		scanf("%d", &m);
		for (int i = 0; i < m; ++i){
			cin >> number[i];
		}
		sort(number, number + m);

		for (int i = 0; i < m; ++i){
			min += number[i];
		}

		for (int i = m-1; i >= 0; --i){
			max += number[i];
		}
		imin = atoi(min.c_str());
		imax = atoi(max.c_str());

		if (imax > imin){
			printf("%d\n", imax - imin);
		}
		else{
			printf("%d\n", imin - imax);
		}
	}

	return 0;
}