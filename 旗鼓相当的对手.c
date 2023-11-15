#include <stdio.h>
#include <math.h>

int main() {
    int N;
    int i,j;
    int count = 0;
    scanf_s("%d", &N);
    int a[3],b[3],c[3],d[3];
    for (i = 1; i <= N; i++) {
        scanf_s("%d %d %d", &a[i], &b[i], &c[i]);
        d[i] = a[i] + b[i] + c[i];
    }
    for (i = 1; i <=N; i++) {
        for (j = i + 1; j <=N; j++) {
            if (abs(a[i] - a[j]) <= 5 && abs(b[i] - b[j]) <= 5 && abs(c[i] - c[j]) <= 5 && abs(d[i] - d[j]) <= 10) {
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}



