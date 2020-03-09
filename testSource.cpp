#include<stdio.h>

int main() {

	int a[101];
	int min;
	int minJ=1;
	int minY=1;
	int i = 1;

	int secondMin;


	for (i = 1; i <= 9; i++) {

		scanf_s("%d", &a[i]);
	}

	min = a[1];

	for (i = 1; i <= 9; i++) {
		if (min >= a[i]) {
			min = a[i];
			minJ = i;
		}
	}
	a[minJ] = 9999999;

	secondMin = a[1];
	for (i = 1; i <= 9; i++) {

		if (secondMin >= a[i]) {
			secondMin = a[i];
			minY = i;
		}
	}

	
		printf("%d\n",secondMin);
		printf("%d", minY);
	


	
	return 0;
}