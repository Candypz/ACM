#include <stdio.h>

int main11(){

	int n = 0;
	scanf("%d", &n);

	while (n--){
		int m = 0;
		scanf("%d", &m);
		for (int i = 1; i <= m; ++i){
			int k = i;
			if (k % 2 != 0){
				printf("%d ", k);
			}
		}

		printf("\n");
		for (int i = 1; i <= m; ++i){
			int k = i;
			if (k % 2 == 0){
				printf("%d ", k);
			}
		}
		printf("\n");
	}

	return 0;
}