#include <stdio.h>
int main()
{
	int n;
	int c,d;
	int b[33];
	scanf_s("%d", &n);
	int i,j;
	for (i = 1; i <=7; i++) {
		scanf_s("%d", &c);
		b[c] = 1;
	}
	int digit = 0;
	for (i = 1; i <=n; i++) {
		for (j = 1; j <= 7; j++) {
			scanf_s("%d", &d);
			if (c[d] == 1)digit++;
		}
	}
	int count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0;
	if (digit == 1)count1++;
	else if (digit == 2)count2++;
	else if (digit == 3)count3++;
	else if (digit == 4)count4++;
	else if (digit == 5)count5++;
	else if (digit == 6)count6++;
	else if (digit == 7)count7++;
	printf("%d %d %d %d %d %d %d", count1, count2, count3, count4, count5, count6, count7);
}