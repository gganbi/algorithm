//#include<cstdio>
//using namespace std;
//
//int n, m, k, t;
//
//int dataX[110]= { 0, };
//int dataY[110] = { 0, };
//int dataD[110] = { 0, };
//
//int main() {
//
//	scanf_s("%d %d %d %d", &n, &m, &k, &t);
//
//	for (int i = 1; i <= k; i++) {
//		int y, x, d;
//		scanf_s("%d %d %d", &y, &x, &d);	
//		dataY[i] = y;
//		dataX[i] = x;
//		dataD[i] = d;
//	}
//
//
//	for (int i = 1; i <= t; i++) {
//		
//		for (int j = 1; j <= k; j++) {
//			if (dataD[j] == 0) { //��
//				int temp = dataY[j];
//				if (dataY[j] == 1) {
//					dataY[j]++;
//					dataD[j] = 1;
//				}
//				else {
//					dataY[j]--;
//				}
//
//				for (int q = 1; q <= k; q++) {  //�ڱ���Ȱ�����ġ�� �ִ¾� ã��
//					if (j != q) {
//						if ((temp == dataY[q]) && (dataX[j] == dataX[q])) {
//							if (dataY[q] == 1) {
//								dataY[q]++;
//								//dataD[q] = 1;
//							}
//							else {
//								dataY[q]--;
//							}
//						}
//					}
//				}
//			}
//			else if (dataD[j] == 1) { //��
//				int temp = dataY[j];
//				if (dataY[j] == n) {
//					dataY[j]--;
//					dataD[j] = 0;
//				}
//				else {
//					dataY[j]++;
//				}
//
//				for (int q = 1; q <= k; q++) {  //�ڱ���Ȱ�����ġ�� �ִ¾� ã��
//					if (j != q) {
//						if ((temp == dataY[q]) && (dataX[j] == dataX[q])) {
//							if (dataY[q] == n) {
//								dataY[q]--;
//								//dataD[q] = 0;
//							}
//							else {
//								dataY[q]++;
//							}
//						}
//					}
//				}
//			}
//			else if (dataD[j] == 2) {//��
//				int temp = dataX[j];
//				if (dataX[j] == 1) {
//					dataX[j]++;
//					dataD[j] = 3;
//				}
//				else {
//					dataX[j]--;
//				}
//				for (int q = 1; q <= k; q++) {  //�ڱ���Ȱ�����ġ�� �ִ¾� ã��
//					if (j != q) {
//						if ((temp == dataX[q]) && (dataY[j] == dataY[q])) {
//							if (dataX[q] == 1) {
//								dataX[q]++;
//								//dataD[q] = 3;
//							}
//							else {
//								dataX[q]--;
//							}
//						}
//					}
//				}
//			}
//			else if (dataD[j] == 3) { // ��
//				int temp = dataX[j];
//				if (dataX[j] == m) {
//					dataX[j]--;
//					dataD[j] = 2;
//				}
//				else {
//					dataX[j]++;
//				}
//				for (int q = 1; q <= k; q++) {  //�ڱ���Ȱ�����ġ�� �ִ¾� ã��
//					if (j != q) {
//						if ((temp == dataX[q]) && (dataY[j] == dataY[q])) {
//							if (dataX[q] == m) {
//								dataX[q]--;
//								//dataD[q] = 2;
//							}
//							else {
//								dataX[q]++;
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//
//	for (int i = 1; i <= k; i++) {
//
//		printf("%d %d\n", dataY[i], dataX[i]);
//	
//	}
//
//
//}