#include<stdio.h>

int main() {

	int temp[10][10] = {0};

	int i, j;

	for (i = 0; i <= 6; i++) {
		temp[0][i] = 10;
		temp[i][0] = 10;
		temp[6][i] = 10;
		temp[i][6] = 10;
	}

	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			scanf_s("%d", &temp[i][j]);
		}
	}
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			
			if (temp[i][j] < temp[i][j - 1] &&
				temp[i][j] < temp[i - 1][j] &&
				temp[i][j] < temp[i + 1][j] &&
				temp[i][j] < temp[i][j + 1]
				) {
				printf("* ");
			}
			else {
				printf("%d ", temp[i][j]);
			}
		}printf("\n");
	}





	return 0;
}
