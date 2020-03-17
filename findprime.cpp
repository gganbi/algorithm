#include<stdio.h>


int prime(int a) {

	int cnt = 0;
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {
			cnt++;
		}
	}

	if (cnt == 2) {
		return 1;
	}
	else return -1;
}

int main() {

	int n;
	scanf_s("%d", &n);

	int data[120];
	int count = 0;
	for (int i = 1; i <= n; i++) {
		scanf_s("%d", &data[i]);
		if (prime(data[i]) == 1) {
			count++;
		}
	}
	printf("%d", count);
	return 0;

}