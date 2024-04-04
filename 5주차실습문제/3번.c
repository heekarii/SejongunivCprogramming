#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5, sum = 0, min, failCount = 0;
    float avg;

    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    sum = n1 + n2 + n3 + n4 + n5;
    avg = sum / 5.0f;
    min = n1;

    if (n1 < 0 || n1 > 100 || n2 < 0 || n2 > 100 || n3 < 0 || n3 > 100 || n4 < 0 || n4 > 100 || n5 < 0 || n5 > 100) {
        printf("Invalid\n");
        return 0;
    }

    if (n1 < 40) failCount++;
    if (n2 < 40) failCount++;
    if (n3 < 40) failCount++;
    if (n4 < 40) failCount++;
    if (n5 < 40) failCount++;

    if (failCount >= 3) {
        printf("F\n");
    }
    else {
        if (avg >= 90.0f) printf("A+\n");
        else if (avg >= 75.0f) printf("A\n");
        else if (avg >= 65.0f) printf("B+\n");
        else if (avg > 50.0f) printf("B\n");
        else printf("F\n");
    }

    if (min > n2) min = n2;
    if (min > n3) min = n3;
    if (min > n4) min = n4;
    if (min > n5) min = n5;

    printf("avg=%.2f min=%d\n", avg, min);
    return 0;
}
