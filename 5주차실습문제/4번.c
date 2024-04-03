#include <stdio.h>

int main() {
	char a;
	int l = 0, s = 0, n = 0, o = 0;

	while (1) {
		scanf("%c", &a);
		if (a >= 'a' && a <= 'z') s++;
		else if (a >= 'A' && a <= 'Z') l++;
		else if (a >= '0' && a <= '9') {
			n += a - '0';
		}
		else {
			if (a == '*') break;
			o++;
		}
	}

	printf("%d %d %d %d", l, s, n, o);


	return 0;
}
