#include<stdio.h>
#include<stdlib.h>

int n, m;
int k;
int data[110][110];
int tmp[110][110];
int t;

int ttttt = 1;
int main() {
	scanf_s("%d %d", &n, &m);
	scanf_s("%d", &k);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf_s("%d", &data[i][j]);
		}
	}
	

	for (int i = 0; i <= n + 1; i++) {
		data[i][0] = -1;
		data[i][m + 1] = -1;
	}
	for (int i = 0; i <= m + 1; i++) {
		data[0][i] = -1;
		data[n + 1][i] = -1;
	}

	for (int i = 0; i <= n+1; i++) {
		for (int j = 0; j <= m+1; j++) {
			tmp[i][j] = data[i][j];
		}
	}
	scanf_s("%d", &t);

	
	int cnt = 1;
	for (int ii = 1; ii <= t; ii++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				for (int c = 1; c <= k; c++) {
					int tempX1 = i - c;
					int tempX2 = i + c;
					int tempY1 = j - c;
					int tempY2 = j + c;

					if (tempX1 < 1) {
						tempX1 = 1;
					}
					if (tempX2 > n) {
						tempX2 = n;
					}

					if (tempY1 < 1) {
						tempY1 = 1;
					}
					if (tempY2 > m) {
						tempY2 = m;
					}

					int tmpp = 2 * c * c + 2 * c + 1;
					tmpp = data[i][j] / tmpp;
					int cnt = 0;
					for (int a = tempX1; a <= tempX2; a++) {
						for (int b = tempY1; b <= tempY2; b++) {
							if (abs(a - i) + abs(b - j) == c) {
								tmp[a][b] += tmpp;
								//0
								cnt++;
							}
						}
					}
					tmp[i][j] -= (cnt * tmpp);

					printf("\n");
					for (int i = 1; i <= n; i++) {
						for (int j = 1; j <= m; j++) {
							printf("%d ", data[i][j]);
						}printf("\n");
					}
					printf("\n");
					for (int i = 1; i <= n; i++) {
						for (int j = 1; j <= m; j++) {
							printf("%d ", tmp[i][j]);
						}printf("\n");
					}
					printf("t: %d, 해당번째칸 : %d(막 칸은 0임), k : %d, 나누는 값 : %d\n", ii, ttttt++ % (n*m) , c, 2 * c * c + 2 * c + 1);
				}
				

			}
		}
		
		//printf("\n");
		////printf("%d \n",c);
		//for (int i = 1; i <= n; i++) {
		//	for (int j = 1; j <= m; j++) {
		//		printf("%d ", tmp[i][j]);
		//	}printf("\n");
		//}
		for (int i = 0; i <= n + 1; i++) {
			for (int j = 0; j <= m + 1; j++) {
				data[i][j] = tmp[i][j];
			}
		}	

	}

	/*for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			printf("%d ", tmp[i][j]);
		}printf("\n");
	}*/
}