//#include<cstdio>
//using namespace std;
//
//int n, m, k, t;
//
//int dataX[110]= { 0, };
//int dataY[110] = { 0, };
//int dataD[110] = { 0, };
//
//int dataCnt[110][110] = { 0, }; //�ش��° ���ڿ� ����
//int data[110][110][110]= { 0, };  //�ش��° ���ڿ� ����
//
//int main() {
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			dataCnt[i][j] = 1;
//		}
//	}
//
//	scanf_s("%d %d %d %d", &n, &m, &k, &t);
//
//	for (int i = 1; i <= k; i++) {
//		int y, x, d;
//		scanf_s("%d %d %d", &y, &x, &d);	
//		dataY[i] = y;
//		dataX[i] = x;
//		int temp = dataCnt[dataY[i]][dataX[i]];
//	
//		dataD[i] = d;
//		data[y][x][temp] = i;
//		dataCnt[dataY[i]][dataX[i]]++;
//	}
//
//
//	for (int i = 1; i <= t; i++) {
//		
//		for (int j = 1; j <= k; j++) {
//			if (dataD[j] == 0) { //��  �켱 ù��°�ֺ��� �̵���Ŵ
//				int temp = dataY[j];
//				if (dataY[j] == 1) {
//					dataY[j]++;
//					dataD[j] = 1;
//				}
//				else {
//					dataY[j]--;
//				}
//
//				//�ڱ� �������� �ľ��ؾ���
//				int myStare = dataCnt[temp][dataX[i]] - 1;
//				int moveStare = dataCnt[dataY[j]][dataX[i]] - 1;
//				//�ϴ� �� �ٸ����� �ִٰ� ����
//
//				//��ġ��������
//
//				//  ������ġ���� ���� �� ������ġ �� ���̳ʽ�		
//				data[temp][dataX[j]][myStare] = 0;
//				dataCnt[temp][dataX[j]] -= 2; //0����
//
//				//  ������ġ���� �߰� �� ������ġ �� �÷��� �ٵ� ���� ���� �������	
//				if (moveStare >= 1) {
//					//������ġ�� �̹� �������� �־����� ó��	
//				}
//				else {//������ġ�� �ƹ��� ��������
//				
//				}
//				data[dataY[j]][dataX[j]][dataCnt[dataY[j]][dataX[j]]+1] = j;
//				dataCnt[dataY[j]][dataX[j]]++;
//
//				
//				//���� ���� ��ġ�� �־��� �ֵ� �̵���Ű��
//
//				if (dataCnt[temp][dataX[j]] >= 1) { //���� ��ġ�� 2���̻��̿������
//
//					//������ġ���� �����ִ¾ֵ��� �� ������
//					int origin=data[temp][dataX[j]][dataCnt[temp][dataX[j]]];
//
//					//�̵��� ��ġ�� ���� �� ������
//					int moveSite=data[dataY[j]][dataX[j]][dataCnt[dataY[j]][dataX[j]]];
//
//					//���⼭ ������ġ�� �����ִ������� ��������
//			
//				}
//		
//
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
//
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