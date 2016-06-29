#include <stdio.h>
#include <algorithm>

int main07(){

	int n = 0;
	int x[100] = { 0 };
	int y[100] = { 0 };
	scanf("%d", &n);

	while (n--){
		int m = 0;
		scanf("%d", &m);

		for (int i = 0; i < m; ++i){
			scanf("%d%d", &x[i], &y[i]);
		}

		std::sort(x, x + m);
		std::sort(y, y + m);
		int sum = 0;
		for (int i = 0; i < m / 2; ++i){
			sum = sum + x[m - i - 1] - x[i] + y[m - i - 1] - y[i];
		}
		printf("%d\n", sum);
	}

	return 0;
}