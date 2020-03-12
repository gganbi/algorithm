#include<stdio.h>

int sum[100];

void  fibo(int a) {

	if (a == 1) {
		
		return;
	}
	else {
		fibo(a - 1);
		sum[a] = sum[a - 1] + sum[a - 2];

	}
}

int main() {

	sum[0] = 0;
	sum[1] = 1;
	int a;
	scanf_s("%d", &a);
	fibo(a);

	printf("%d", sum[a]);


}