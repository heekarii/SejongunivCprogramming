#include <stdio.h>

int main() {
	int n, sum = 0;
	scanf("%d", &n);

	for (int i = 0; 1 ; i++) {
		sum += i;
		if (i == n) {
			printf("%d", sum);
			break;
		}
	}
	return 0;
}
