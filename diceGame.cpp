#include<stdio.h>

int main() {

	int aa[1001][4];
	int bb[1001];

	int i = 0, j = 0;
	int a = 0;
	int max = 0;
	scanf_s("%d", &a);

	for (i = 1; i <= a; i++) {
		scanf_s("%d", &aa[i][1]);
		scanf_s("%d", &aa[i][2]);
		scanf_s("%d", &aa[i][3]);	

		if (aa[i][1] == aa[i][2] && aa[i][2] == aa[i][3]) {
			bb[i] = 10000 + aa[i][1] * 1000;
		}
		else if (aa[i][1] != aa[i][2] && aa[i][2] != aa[i][3]
			&& aa[i][1] != aa[i][3]) {
			
			int maxx = aa[i][1];
			for (j = 2; j <= 3; j++) {
				if (maxx <= aa[i][j]) {
					maxx = aa[i][j];
				}
			}
			bb[i] = maxx * 100;
		}
		else {

			if (aa[i][1] == aa[i][2]) {
				bb[i] = 1000 + aa[i][2] * 100;
			}
			else if (aa[i][2] == aa[i][3]) {
				bb[i] = 1000 + aa[i][2] * 100;
			}
			else {
				bb[i] = 1000 + aa[i][1] * 100;
			}
		}
	}

	 max = bb[1];

	for (j = 2; j <= a; j++) {
		if (max <= bb[j]) {
			max = bb[j];
		}
	}

		printf("%d", max);
	
	




	return 0;
}
