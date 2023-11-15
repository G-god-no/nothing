#include <stdio.h>
int main()
{
	int b[10];
	int N,M,i,j;
	scanf_s("%d %d", &M, &N);
	for (i = 0; i < 10; i++) {
		b[i] = 0;
	}
		for (j = M; j <= N; j++) {
			int t = j;
			int c = j;
			while (t>0) {
				t = t % 10;
				c = c / 10;
				if (t == 0)b[0]++;
				else if (t == 1)b[1]++;
				else if (t == 2)b[2]++;
				else if (t == 3)b[3]++;
				else if (t == 4)b[4]++;
				else if (t == 5)b[5]++;
				else if (t == 6)b[6]++;
				else if (t == 7)b[7]++;
				else if (t == 8)b[8]++;
				else if (t == 9)b[9]++;
				t = c;
			}
		}
	for (i = 0; i < 10; i++) {
		printf("%d", b[i]);
		if (i != 10)printf(" ");
	}
	return 0;
}