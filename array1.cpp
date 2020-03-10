#include<stdio.h>

int main() {

	int aa[101][101] = {0};

	int i = 0, j = 0;
	int a = 0,b=0;
	int count = 1;


	scanf_s("%d", &a);
	scanf_s("%d", &b);

	for (i = 1; i <= a; i++) {
		for (j = 1; j <= b; j++) {
			aa[i][j] = count++;
		}
	}

	for (i = 1; i <= a; i++) {
		for (j = 1; j <= b; j++) {
			printf("%d ", aa[i][j]);
		}printf("\n");
	}




	return 0;
}
