#include <stdio.h>

int main34(){
	int a, b, c;
	bool flag = false;
	int d;

	scanf("%d%d%d", &a, &b, &c);

	for (int i = 10; i < 101; ++i){
		if (i % 3 == a&&i % 5 == b&&i % 7 == c){
			d = i;
			flag = true;
			break;
		}
	}

	if (flag){
		printf("%d", d);
	}
	else{
		printf("No answer");
	}

	return 0;
}