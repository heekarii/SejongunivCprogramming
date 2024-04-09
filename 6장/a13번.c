#include <stdio.h>

int main() {
	int n, sum = 0, cnt = 0;

	while (1) {
		scanf("%d", &n);
		if (n > 100) 
			continue;
		if (n <= 0) {
			printf("%d %.2f %d", sum, sum / (float)cnt, cnt);
			break;
		}
		sum += n;
		cnt++;
	}

	return 0;
}
