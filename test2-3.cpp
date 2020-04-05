#include<stdio.h>


int n, x, d, t;

int dx[2] = { -1,1 };



int main() {
	int printX,printD;

	scanf_s("%d %d %d %d", &n, &x, &d, &t);


	t %= (n * 2 - 2);


	// d 0 감소 
	// d 1 증가
	if (d == 0) {
		if (x - 1 >= t) {
			printX = x - t;
			printD = 0;
		}
		else {
			int temp = t - x + 2;
			if (temp > n) {
				temp = temp - n;
				printX = n - temp - 1;
				printD = 0;
			}
			else {
				printX = temp;
				printD = 1;
			}
		}
	}
	else {
		if (n-x >= t) {
			printX = x + t;
			printD = 1;
		}
		else {
			int temp = t - (n - x);
			if (temp > n) {
				printX = temp-n +2;
				printD = 1;
			}
			else {
				printX = n-(temp+1)+1;
				printD = 0;
			}
		}
	}

	printf("%d %d", printX, printD);
	


}