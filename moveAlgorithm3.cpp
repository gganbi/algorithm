//#include<cstdio>
//using namespace std;
//
//
//
//
//int n, m, k, t;
//int y[110], x[110], d[110];
//
//int data[110][110][110] = { 0, };
//int num[110][110] = { 0, };
//
//
//
//int main() {
//
//
//	scanf_s("%d %d %d %d", &n, &m, &k, &t);
//
//
//
//
//	for (int i = 1; i <= k; i++) {
//		int yy, xx, dd;
//
//		//for(int j=1;j<=t;j++)  ��ĭ������
//		scanf_s("%d %d %d", &yy, &xx, &dd);
//
//
//		if (dd == 0) { // ��
//			t = t % (n * 2 - 2);
//		}
//		else if (dd == 1) { // ��
//			t = t % (n * 2 - 2);
//		}
//		else if (dd == 2) { // ��
//			t = t % (m * 2 - 2);
//		}
//		else {  //��
//			t = t % (m * 2 - 2);
//		}
//		y[i] = yy;
//		x[i] = xx;
//		d[i] = dd;
//
//		if (num[yy][xx] >= 1) {
//			num[yy][xx]++;
//		}
//		else {
//			num[yy][xx] = 1;
//		}
//
//		
//		data[yy][xx][i] = num[yy][xx];
//		//�����ǹ�
//
//	}
//
//
//	for (int iii = 1; iii <= t; iii++) {
//
//		for (int i = 1; i <= k; i++) {
//			if (d[i] == 0) { // ��
//				int high = data[y[i]][x[i]][i];
//				int tmp2 = num[y[i]][x[i]]; //�����ִ°��� ����
//
//				int firstX = x[i];
//				int firstY = y[i];
//
//				int secondX = firstX;
//				int secondY = firstY;
//
//
//
//				int tmp = 0; //�̵��� ��ġ�� ����
//				if (firstY - 1 <= 0) {
//					tmp = num[2][x[i]];
//				}
//				else {
//					tmp = num[firstY-1][firstX];
//	
//				}
//
//				//�� �̵���Ŵ
//				for (int ii = high; ii <= tmp2; ii++) {
//					for (int jjj = 1; jjj <= k; jjj++) {
//						if (data[firstY][firstX][jjj] == ii) {  // iii�� �� k��°����
//							if (y[jjj] - 1 <= 0) {
//								y[jjj] = 2;
//								d[jjj] = 1;
//							}
//							else {
//								y[jjj] -= 1;
//							}
//							secondY = y[jjj];
//							data[y[jjj]][x[i]][jjj] = ++tmp;
//						}
//					}
//				}
//
//				
//				if (tmp2 == high) {
//					num[firstY][firstX] -= 1;
//					num[secondY][secondX] += 1;
//				}
//				else {
//					num[firstY][firstX] -= ((tmp2 - high) + 1);
//					num[secondY][secondX] += ((tmp2 - high) + 1);
//
//				}
//			}
//			else if (d[i] == 1) { // ��
//				int high = data[y[i]][x[i]][i];
//				int tmp2 = num[y[i]][x[i]]; //�����ִ°��� ����
//
//				//�� i�� �� k��° �ֵ� high ���� tmp
//				//�˾Ƴ��� data[y[�׹�°]][] �� =y[i]
//
//				//������� k 2 3  �ΰɾ˾Ƴ�
//
//				int firstX = x[i];
//				int firstY = y[i];
//
//				int secondX = firstX;
//				int secondY = firstY;
//
//				int tmp = num[y[i]][x[i]]; //�̵��� ��ġ�� ����
//
//				if (firstY + 1 >= n+1) {
//					tmp = num[n-1][firstX];
//				}
//				else {
//					tmp = num[firstY +1][firstX];
//
//				}
//
//				//�� �̵���Ŵ
//				for (int ii = high; ii <= tmp2; ii++) {
//					for (int jjj = 1; jjj <= k; jjj++) {
//						if (data[firstY][firstX][jjj] == ii) {  // iii�� �� k��°����
//							if (y[jjj] + 1 >= n + 1) {
//								y[jjj] = n - 1;
//								d[jjj] = 0;
//							}
//							else {
//								y[jjj] += 1;
//							}
//							secondY = y[jjj];
//							data[y[jjj]][x[i]][jjj] = ++tmp;
//							break;
//						}
//					}
//				}	
//				if (tmp2 == high) {
//					num[firstY][firstX] -= 1;
//					num[secondY][secondX] += 1;
//				}
//				else {
//					num[firstY][firstX] -= ((tmp2 - high)+1);
//					num[secondY][secondX] += ((tmp2 - high)+1);
//				
//				}
//			}
//			else if (d[i] == 2) { // ��
//
//				//�̵����� �ڱ⺸�� ������ �ֵ��� �ֳ�����
//				// ���� ���̸� ã�ƾ��� ���̺��� ��������
//				int high = data[y[i]][x[i]][i];
//
//				int tmp2 = num[y[i]][x[i]]; //�����ִ°��� ����
//
//				//�������ؼ� �� �����ִ¾ֵ� ������ �˾ƾ���
//
//				//high���� tmp2���� ��ġ������
//
//				//ù ��ġ
//
//				int firstX = x[i];
//				int firstY = y[i];
//
//				int secondX = firstX;
//				int secondY = firstY;
//
//				int tmp = num[y[i]][x[i]]; //�̵��� ��ġ�� ����
//				
//				if (firstX - 1 <= 0) {
//					tmp = num[firstY][2];
//				}
//				else {
//					tmp = num[firstY][firstX-1];
//
//				}
//
//				//�� �̵���Ŵ
//				for (int ii = high; ii <= tmp2; ii++) {
//					for (int jjj = 1; jjj <= k; jjj++) {
//						if (data[firstY][firstX][jjj] == ii) {  // iii�� �� k��°����
//							if (x[jjj] - 1 <= 0) {
//								x[jjj] = 2;
//								d[jjj] = 3;
//							}
//							else {
//								x[jjj] -= 1;
//							}
//							secondX = x[jjj];
//							data[y[i]][x[jjj]][jjj] = ++tmp;
//						}
//					}
//				}
//				if (tmp2 == high) {
//					num[firstY][firstX] -= 1;
//					num[secondY][secondX] += 1;
//				}
//				else {
//					num[firstY][firstX] -= ((tmp2 - high) + 1);
//					num[secondY][secondX] += ((tmp2 - high) + 1);
//
//				}
//			}
//			else if (d[i] == 3) {  //��
//				int high = data[y[i]][x[i]][i];
//				int tmp2 = num[y[i]][x[i]]; //�����ִ°��� ����
//
//				//�������ؼ� �� �����ִ¾ֵ� ������ �˾ƾ���
//
//				//high���� tmp2���� ��ġ������
//
//				//ù ��ġ
//				int firstX = x[i];
//				int firstY = y[i];
//				int secondX = firstX;
//				int secondY = firstY;
//
//				int tmp = 0; //�̵��� ��ġ�� ����
//
//				if (firstX + 1 >= m+1) {
//					tmp = num[firstY][m-1];
//				}
//				else {
//					tmp = num[firstY][firstX + 1];
//
//				}
//
//				//�� �̵���Ŵ
//				for (int ii = high; ii <= tmp2; ii++) {
//					for (int jjj = 1; jjj <= k; jjj++) {
//						if (data[firstY][firstX][jjj] == ii) {  // iii�� �� k��°����
//
//							if (x[jjj] + 1 >= m + 1) {
//								x[jjj] = m - 1;
//								d[jjj] = 2;
//							}
//							else {
//								x[jjj] += 1;
//							}
//							secondX = x[jjj];
//							data[y[i]][x[jjj]][jjj] = ++tmp;
//						}
//					}
//				}
//				if (tmp2 == high) {
//					num[firstY][firstX] -= 1;
//					num[secondY][secondX] += 1;
//				}
//				else {
//					num[firstY][firstX] -= ((tmp2 - high) + 1);
//					num[secondY][secondX] += ((tmp2 - high) + 1);
//
//				}
//			}
//
//
//			
//		}
//	
//	
//	}
//
//	for (int i = 1; i <= k; i++) {
//		printf("%d %d\n", y[i], x[i]);
//	}
//	
//
//	
//}
//
////3 3 3 3
////3 2 2
////3 2 2
////2 3 1
////
////
////2 2
////2 2
////1 3
//
