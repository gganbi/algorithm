#include<stdio.h>

int main() {

	int aa[101][101] = {0};

	int i = 0, j = 0;
	int a = 0;
	int b = 0;
	int max = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);

	for (i = 1; i <= a; i++) {
	
		if (i % 2 == 0) {  //¦
			for (j = 1; j <= a - i; j++) {
		
				aa[i][j] = 0;
		
				
			}
			for (j = a - i + 1; j <= a + i - 1; j++) {
				if (b == 10) {
					b = 1;
				}
				aa[i][j] = b;
				b++;
			
			}
			for (j = a +i ; j <= 2*a-1; j++) {
			
				aa[i][j] = 0;
			
			}
			
		}
		else {  //Ȧ

			for (j = 2*a-1; j >= a + i; j--) {
			
				aa[i][j] = 0;
			

			}
			for (j = a + i - 1; j >= a - i + 1; j--) {
				if (b == 10) {
					b = 1;
				}
				aa[i][j] = b;
				b++;

			}
			for (j = a - i; j >= 1; j--) {
			
				aa[i][j] = 0;
			
			}
			
		}
		for (i = 1; i <= a; i++) {
			for (j = 1; j <= 2 * a - 1; j++) {
				printf("%d", aa[i][j]);
			}printf("\n");
		}
	
	}

	



	return 0;
}
