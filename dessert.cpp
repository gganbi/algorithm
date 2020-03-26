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
		/*for (int i = 0; i < n - 1; i++) {
			printf("%d %c ", resultInt[i], resultChar[i]);
		}printf("%d", resultInt[n - 1]);
		printf("\n");*/
		char temp[100];
		int  tempInt[100];
		memcpy(tempInt, resultInt, sizeof(resultInt));
		strcpy_s(temp, resultChar);
		
		for (int i = 0; i < x-1; i++) {
			if (resultChar[i] == '.') {
				int cnt = 0;

				if (resultInt[i + 1] >= 10) {
					tempInt[i] = 100 * tempInt[i] + tempInt[i + 1];
				}
				else {
					tempInt[i] = 10 * tempInt[i] + tempInt[i + 1];
				}

				//tempInt[i] = 10 * tempInt[i] + tempInt[i + 1];
				cnt++;	
			/*	temp[i] = '+';
				tempInt[i + 1] = 0;*/
				int tempp = i;
				int first = 1;
				while (true) {
					if (resultChar[tempp + 1] == '.' && (tempp + 1)<x-1) {
						if (resultInt[tempp + 1] >= 10) {
							if (first == 1) {
								tempInt[i] = 100 * tempInt[i] + tempInt[tempp + 2];
								first++;
							}
							else {
								tempInt[i] = 100 * tempInt[i] + tempInt[tempp + 1];
							}
							
						}
						else {
							if (first == 1) {
								tempInt[i] = 10 * tempInt[i] + tempInt[tempp + 1];
								first++;
							}
							else {
								tempInt[i] = 10 * tempInt[i] + tempInt[tempp + 1];
							}
							
						}
						
						
						cnt++;
						tempp++;
					}
					else {
						break;
					}
				}
				for (int m = 1; m <= cnt; m++) {
					tempInt[i+m] = 0;
					temp[i+m-1]='+';
				}
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
			count++;

			if (count > 20) {
			
			}
			else {
				for (int i = 0; i < n - 1; i++) {
					printf("%d %c ", resultInt[i], resultChar[i]);
				}printf("%d", resultInt[n - 1]);
				printf("\n");
			}
			
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
	printf("%d", count);


}