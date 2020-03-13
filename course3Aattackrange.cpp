#include <stdio.h>

int main() {

	int n;
	int x, y, index;
	int data[120][120] = { 0, };

	scanf_s("%d", &n);
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	scanf_s("%d", &index);

	for (int i = 0; i <= n + 1; i++) {
		data[i][0] = 100;
		data[0][i] = 100;
		data[n + 1][i] = 100;
		data[i][n + 1] = 100;
	}


	// 좌로직
	for (int i = 0; i <= index; i++) {

		int temp1 = i;
		for (int j = 0; j <= index; j++) {

			if (data[x - j][y - i] == 100) {
				break;
			}

			data[x - j][y - i] = temp1++;
			if (data[x - j - 1][y - i] == 100 ||
				data[x - j][y - i] == index) {
				break;
			}
		}

		//하
		int temp2 = i;
		for (int j = 0; j <= index; j++) {

			if (data[x + j][y - i] == 100) {
				break;
			}
			data[x + j][y - i] = temp2++;
			if (data[x + j + 1][y - i] == 100 ||
				data[x + j][y - i] == index) {
				break;
			}
		}

	}

	// 우로직
	for (int i = 0; i <= index; i++) {

		int temp1 = i;
		for (int j = 0; j <= index; j++) {

			if (data[x - j][y + i] == 100) {
				break;
			}
			data[x - j][y + i] = temp1++;
			if (data[x - j - 1][y + i] == 100 ||
				data[x - j][y + i] == index) {
				break;
			}
		}

		//하
		int temp2 = i;
		for (int j = 0; j <= index; j++) {

			if (data[x + j][y + i] == 100) {
				break;
			}
			data[x + j][y + i] = temp2++;
			if (data[x + j + 1][y + i] == 100 ||
				data[x + j][y + i] == index) {
				break;
			}
		}

	}


	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {

			if (i == x && j == y) {
				printf("x ");
			}
			else {
				printf("%d ", data[i][j]);
			}
		}

		printf("\n");
	}

	return 0;

}

