#include<stdio.h>

int main() {

	int n;
	scanf_s("%d", &n);

	int data[101];
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &data[i]);
	}

	int a, b;
	scanf_s("%d %d", &a, &b);

	if (b >= n); {
		b %= n;
	}

	int index = a;
	int temp = a;;
	//for (int i = 1; i <= b; i++) {
		if (a - b < 0) {
			index = n+(a - b);
		}
		else {
			index -= b;
		}
		
		printf("%d", data[index]);
	//}
	


	return 0;
}


