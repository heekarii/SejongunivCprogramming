#include <stdio.h>

int main() {
	int n;
	char ch;

	scanf("%d", &n);
	ch = n;

	printf("(int->int) %d\n(int->char->int) %d", n, ch);

	return 0;
}
