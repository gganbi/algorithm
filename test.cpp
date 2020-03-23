//#include<stdio.h>
//
//int n;
//
//int m;
//int data[110][110];
//int answer[110][110];
//int k;
//int q;
//
//void test() {
//
//	bool avgFlag = false;
//	int cnttt = 0;  //Áö¿îÈ½¼öº¯¼ö
//	
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			if (data[i][j] != 0) {
//				if (data[i - 1][j] == data[i][j] || data[i + 1][j] == data[i][j]
//					|| data[i][j + 1] == data[i][j] || data[i][j - 1] == data[i][j]) {
//					answer[i][j] = 0;
//					cnttt++;
//					avgFlag = true;
//				}
//				else if ((j == m && (data[i][j] == data[i][1]))
//					|| (j == 1 && (data[i][j] == data[i][m]))) {
//					answer[i][j] = 0;
//					cnttt++;
//					avgFlag = true;
//				}
//				else {
//					answer[i][j] = data[i][j];
//				}
//			}
//			else {
//				answer[i][j] = 0;
//			}
//		}
//	}
//	/*printf("33\n");
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			printf("%d ", answer[i][j]);
//		}printf("\n");
//	}
//	printf("44\n");*/
//	cnttt = 0;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			if (answer[i][j] == 0) {
//				cnttt++;
//			}
//		}
//	}
//	//printf("55%d\n",cnttt);
//	if (avgFlag == false) {
//		int sumAvg = 0;
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= m; j++) {
//				sumAvg += answer[i][j];
//			}
//		}
//
//		//printf("sum 1 :%d\n", sumAvg);
//		sumAvg /= ((n * m)-cnttt);// ÃÑÆò±Õ
//		//printf("sum 2 :%d\n", sumAvg);
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= m; j++) {
//				if (answer[i][j] != 0) {
//					if (answer[i][j] > sumAvg) {
//						answer[i][j] -= 1;
//					}
//					else if (data[i][j] < sumAvg) {
//						answer[i][j] += 1;
//					}
//				}
//				
//			}
//		}
//	}
//	//printf("66\n");
//	//for (int i = 1; i <= n; i++) {
//	//	for (int j = 1; j <= m; j++) {
//	//		printf("%d ", answer[i][j]);
//	//	}printf("\n");
//	//}
//	//printf("77\n");
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			data[i][j] = answer[i][j];
//		}
//	}
//	
//
//
//}
//
//void push(int f,int x) {
//	//0: ½Ã°è ->  1: ¹İ½Ã°è <-
//	if (x == 0) {
//		int temp = data[f][m];
//		for (int i = m-1; i >= 1; i--) {
//			data[f][i + 1] = data[f][i];
//		}
//		data[f][1] = temp;
//	}
//	else {
//		int temp = data[f][1];
//		for (int i = 2; i <= m; i++) {
//			data[f][i - 1] = data[f][i];
//		}
//		data[f][m] = temp;
//	}
//	/*printf("111\n");
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			printf("%d ", data[i][j]);
//		}printf("\n");
//	}printf("222\n");*/
//	
//}
//
//int main() {
//	int t;
//	scanf_s("%d", &t);
//	
//	for (int i = 1; i <= t; i++) {
//		scanf_s("%d %d %d", &n, &m, &q);
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= m; j++) {
//				scanf_s("%d", &data[i][j]);
//			}
//		}
//
//		for (int i = 0; i <= n + 1; i++) {
//			data[i][0] = -1;
//			data[i][m + 1] = -1;
//		}
//
//		for (int i = 0; i <= m + 1; i++) {
//			data[0][i] = -1;
//			data[n + 1][i] = -1;
//		}
//
//		int f, d, c;
//		for (int i = 1; i <= q; i++) {
//			scanf_s("%d %d %d", &f, &d, &c);
//
//
//			bool avgTest = false;
//			int cnt = 0;
//			int ii = 1;
//			while (true) {
//				if (f * ii <= n) {
//					for (int j = 1; j <= c; j++) {
//						push(f * ii, d);
//					}
//					ii++;
//				}
//				else {
//					break;
//				}
//			}
//			test();
//		}
//
//		int lastSum = 0;
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= m; j++) {
//				lastSum += data[i][j];
//			}
//		}
//
//		printf("# %d %d\n",i, lastSum);
//	
//	
//	}
//
//
//	
//	
//
//	return 0;
//}