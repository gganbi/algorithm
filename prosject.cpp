#include<stdio.h>


int main() {

	int data[101];
	int temp[101];
	int a;

	scanf_s("%d", &a);

	for (int i = 1; i <= a; i++) {
		scanf_s("%d", &data[i]);
	}
	temp[1] = data[1];

	for (int i = 2; i <= a; i++) {
		temp[i] = data[i] * i;
		int sum = 0;
		for (int j = 1; j <= i - 1; j++) {
			sum += temp[j];
		}
		temp[i] -= sum;
	}

	for (int i = 1; i <= a; i++) {
		printf("%d ",temp[i]);
	}


}