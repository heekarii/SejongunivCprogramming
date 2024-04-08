#include <stdio.h>

int main() {
	int n;
	unsigned char ch;

	scanf("%d", &n);
	ch = n;

	printf("(int->int) %d\n(int->unsigned char->int) %d", n, ch);

	return 0;
}
