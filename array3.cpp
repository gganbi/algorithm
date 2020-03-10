#include<stdio.h>

int main() {

	int aa[101][101] = {0};

	int i = 0, j = 0;
	int a = 0;
	int garoTemp = 1;
	int seroTemp = 1;

		
	scanf_s("%d", &a);
	

	for (i = 1; i <= a; i++) {
		garoTemp = i;
		seroTemp = aa[i - 1][1] + i;
		
		aa[i][1] = seroTemp;
		for (j = 2; j <= a; j++) {
			aa[i][j] = aa[i][j - 1] + garoTemp++;
		}	
	}

	for (i = 1; i <= a; i++) {
		for (j = 1; j <= a-i+1; j++) {
			printf("%d ", aa[i][j]);
		}printf("\n");
	}

	





	return 0;
}
