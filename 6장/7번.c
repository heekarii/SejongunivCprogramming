#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	for (int i = 0, k = 1; i < n; i++) {
		for (int j = 0; j < i + 1; j++, k++) {
			printf(" %d", k % 10);
		}
		printf("\n");
	}
	return 0;
}
