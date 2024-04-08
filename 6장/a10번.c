#include <stdio.h>

int main() {
	int n, tmp = 0, sum = 0;
	scanf("%d", &n);

	while (1) {
		while (n > 0) {
			sum += n % 10;
			n /= 10;
		}
		tmp += sum % 10;
		sum /= 10;
		if (sum == 0) {
			sum = tmp;
			if (tmp < 10) 
				break;
			tmp = 0;
		}
	}

	printf("%d", tmp);

	return 0;
}
