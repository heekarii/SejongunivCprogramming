#include <stdio.h>

int main() {
	int n;
	int r = 2; // n을 나눌 수
	scanf("%d", &n);
	printf("1"); // 공백으로 구분해야하기 때문에 1을 먼저 출력
	while (1) {
		if (n % r == 0) // r로 나누어 떨어질때
			printf(" %d", r); // 앞에 공백 추가해서 출력 => 끝나면 뒤에 공백 없음
		r++;
		if (r > n) // r = n 인 경우가 지난 후에 반복문 탈출
			break;
	}

	return 0;
}
