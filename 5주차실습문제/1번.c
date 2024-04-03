// 콜라츠 추측 문제
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", n);
	while (1) {
		if (n % 2 == 0) {
			n = n / 2;
			printf("%d\n", n);
		}
		else {
			n = 3*n + 1;
			printf("%d\n", n);
		}
		if (n == 1) break;
	}
	return 0;
}
