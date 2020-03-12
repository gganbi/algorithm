#include <stdio.h>


int main() {


	int data[1000][4];
	int i = 1;

	while (true) {
		scanf_s("%d", &data[i][1]);
		scanf_s("%d", &data[i][2]);
		scanf_s("%d", &data[i][3]);

		if (data[i][1] == 0 && data[i][2] == 0
			&& data[i][3] == 0) {
			break;
		}
		i++;

	}

	for (int j = 1; j < i; j++) {

		if ((data[j][3] - data[j][2]) ==
			(data[j][2] - data[j][1])) {
			printf("AP %d\n", data[j][3] + (data[j][3] - data[j][2]));
		}
		else {
			printf("GP %d\n", data[j][3] * (data[j][3] / data[j][2]));
		}

	}





	return 0;
}
