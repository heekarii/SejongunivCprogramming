#include <stdio.h>

int main() {
	int n;
	int sum = 0;

	while (1) {
		scanf("%d", &n); 
		sum += n; // 입력받은 n을 sum에 더해서 저장하기
		if (n == 0) {
			printf("%d", sum); // 0을 입력받으면 sum 출력하고 반복문 탈출
			break;
		}
	}

	return 0;
}
