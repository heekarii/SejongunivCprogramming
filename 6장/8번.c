#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	int fac = 1;
	
	for (int i = 0; i < m - n + 1; i++) {
		printf("%d!=1", n + i);
		for (int j = 1; j < n + i; j++) {
			fac *= (j + 1);
			printf("*%d", j + 1);
		}
		printf("=%d\n", fac);
		fac = 1;
	}

	return 0;
}
