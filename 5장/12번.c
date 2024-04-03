#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	/*
	if (n == 1) {
		printf("Americano\n");
		printf("%d %d", (m - 500) / 500, (m - 500) % 500 / 100);
	}
	else if (n == 2) {
		printf("Cafe Latte\n");
		printf("%d %d", (m - 400) / 500, (m - 400) % 500 / 100);
	}
	else {
		printf("Lemon Tea\n");
		printf("%d %d", (m - 300) / 500, (m - 300) % 500 / 100);
	}*/

	switch (n) {
		case 1:
			printf("Americano\n");
			printf("%d %d", (m - 500) / 500, (m - 500) % 500 / 100);
			break;
		case 2:
			printf("Cafe Latte\n");
			printf("%d %d", (m - 400) / 500, (m - 400) % 500 / 100);
			break;
		case 3:
			printf("Lemon Tea\n");
			printf("%d %d", (m - 300) / 500, (m - 300) % 500 / 100);
			break;
	}
	return 0;
}
