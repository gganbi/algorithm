#include<stdio.h>

int main() {

	int a[100];

	int i = 1, j = 1;
	int max = 0;


	for (i = 1; i <= 9; i++) {
		scanf_s("%d", &a[i]);
	}

	max = a[1];
	//dddddddddd 

	for (i = 1; i <= 9; i++) {
		if (max <= a[i]) {
			max = a[i];
			j = i;
		}
	}


		printf("%d\n", max);
		printf("%d ", j);


	
	return 0;
}