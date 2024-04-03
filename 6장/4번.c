#include <stdio.h>

int main() {
	int n, m, mx;
	scanf("%d %d", &n, &m);

	/*for (int i = 1; i <= n; i++) {
		if (n % i == 0 && m % i == 0) {
			mx = i;
		}
	}*/


	int i = 0;
	while (1) {
		i++;
		if (n % i == 0 && m % i == 0)
			mx = i;
		if (i > m || i > n) break;
	}

	printf("%d", mx);
	return 0;
}
