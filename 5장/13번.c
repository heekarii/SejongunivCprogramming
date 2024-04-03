#include <stdio.h>

int main() {
	
	int k, e, m;
	scanf("%d %d %d", &k, &e, &m);
	double avg = (k + e + m) / 3.0; // 여기까지 공통부분

		
	/*if (avg >= 75)
		printf("%.2f\nA", avg);
	else if (avg >= 50)
		printf("%.2f\nB", avg);
	else
		printf("%.2f\nF", avg);*/

	int grade = (avg >= 75) ? 1 : (avg >= 50) ? 2 : 3;
	switch (grade) {
		case 1:
			printf("%.2f\nA", avg);
			break;
		case 2:
			printf("%.2f\nB", avg);
			break;
		default:
			printf("%.2f\nF", avg);
			break;
	}

	return 0;
}
