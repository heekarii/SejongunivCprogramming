#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int i = 0;

	while (i < n) { 
		for (int j = 1; j <= n; j++) {
			printf(" %d", (j + i) % 10);
		}
		printf("\n");
		i++;
	}
	return 0;
}
