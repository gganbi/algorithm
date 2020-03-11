#include<stdio.h>

int main() {

	int aa[110][110] = {0};

	int i = 0, j = 0;
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);

		
	for (i = 1; i <=a; i++) {
		for (j = 1; j <= b; j++) {
			scanf_s("%d",&aa[i][j]);
		}	
	}

	for (i = 1; i <= a; i++) {
		for (j = b; j >= 1; j--) {
			printf("%d ",aa[i][j]);
		}printf("\n");
	}





	return 0;
}
