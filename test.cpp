#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int aa[101][101] = { 0 };

	int i = 0, j = 0;
	int a = 0;
	int count = 1;



	scanf_s("%d", &a);

	for (i = 1; i <= a; i++) {
		for (j = 1; j <= i; j++) {
			aa[i][a - j + 1] = count++;
		}
	}


	for (i = 1; i <= a; i++) {
		for (j = 1; j <= a - i + 1; j++) {
			printf("%d ", aa[i][j]);
		}printf("\n");
	}




	return 0;
}
