#include <stdio.h>
#include <string.h>


int n;
int count = 0;

char resultChar[100];
int  resultInt[100];
bool check[100];
void  dd(int x) {

	if (x >= n) {

		if (resultChar[x - 1] == '+' || resultChar[x - 1] == '-') {
			return;
		}
		char temp[100];
		int  tempInt[100];
		memcpy(tempInt, resultInt, sizeof(resultInt));
		strcpy_s(temp, resultChar);
		
		for (int i = 0; i < x-1; i++) {
			if (resultChar[i] == '.') {
				tempInt[i] = 10 * tempInt[i] + tempInt[i+1];
				tempInt[i + 1] = 0;
				temp[i] = '+';
			}	
		}
	
		int sum = tempInt[0];
		for (int i = 0; i < x - 1; i++) {
			if (temp[i] == '+') {
				sum += tempInt[i + 1];
			}
			else {
				sum-= tempInt[i + 1];
			}
		}
		if (sum == 0) {
			for (int i = 0; i < n-1; i++) {
				printf("%d %c ", resultInt[i], resultChar[i]);
			}printf("%d", resultInt[n-1]);
			printf("\n");
		}	
	}
	else {	
		for (int i = 1; i <= 3; i++) {
			char alpah;
			if (i == 1) {
				alpah = '+';
			}
			else {
				alpah = '+' + i;
			}
			resultInt[x] = x + 1;
			resultChar[x] = alpah;
			dd(x + 1);
		}
	}
}
int main() {


	scanf_s("%d", &n);
	dd(0);


}