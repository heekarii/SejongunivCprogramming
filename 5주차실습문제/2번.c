#include <stdio.h>

int main() {
	int n;
	int i = 2;
	scanf("%d", &n);
	while (i <= n) {
		if (n % i == 0) {
			printf("%d ", i);
			n /= i;
		}
		else i++;
	}
	return 0;
}
