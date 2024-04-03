#include <stdio.h>

int main() {
	int n, i;
	int cnt = 0;
	scanf("%d", &n);

	do {
		scanf("%d", &i);
		cnt++;
		if (i == n)
			printf("%d==?\n%d", i, cnt);
		else if (i < n)
			printf("%d<?", i);
		else
			printf("%d>?\n", i);

	} while (i != n);
	

	return 0;
}
