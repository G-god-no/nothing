#include <stdio.h>
#include <math.h>
int main()
{
	int w, x, h;
	int a[100000],b[10000],c[10000];
	int q,i,j,V,v;
	int S;
	scanf_s("%d %d %d", &w, &x, &h);
	scanf_s("%d", &q);
	for (i = 1; i <= q+1; i++) {
		scanf_s("%d %d %d", &a[i], &b[i], &c[i]);
	}
	V = w * x * h;
	for (i = 1; i <= q; i++) {
		for (j = i + 1; j <= q; j++) {
			v = (a[i] - a[j] + 1) * (b[i] - b[j] + 1) * (c[i] - c[j] + 1);
		}
	}
	S = V - v;
	printf("%d", S);
	return 0;
}
