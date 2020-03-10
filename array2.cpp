#include<stdio.h>

int main() {

	int aa[101][101] = {0};

	int i = 0, j = 0;
	int a = 0,b=0;
	int count = 1;
	int c, d;


	scanf_s("%d", &a);
	scanf_s("%d", &b);
	


	for (i = 1; i <= a; i++) {
		for (j = 1; j <= b; j++) {
			scanf_s("%d", &aa[i][j]);
		}
	}


	scanf_s("%d", &c);
	scanf_s("%d", &d);


			printf("%d ", aa[c+1][d+1]);




	return 0;
}
