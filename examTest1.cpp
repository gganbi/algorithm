//#include<cstdio>
//#include<stdlib.h>
//using namespace std;
//
//int t, r, c, s, k;
//
//int data[1010][1010];
//int tmp[1010][1010];
//
//
////Ȯ��
//void spread(int r, int c, int k) {
//
//	for (int i = 1; i <= r; i++) {
//		for (int j = 1; j <= c; j++) {
//
//			tmp[i][j] = data[i][j];
//
//		}
//	}
//
//	int temp = 2 * k * k + 2 * k + 1; //�� �� Ȯ���Ǵ� ��
//	for (int j = 1; j <= r; j++) {
//		for (int m = 1; m <= c; m++) {
//
//			if (data[j][m] == -1) {
//				continue;
//			}
//
//			int tempXa = j - k;
//			int	tempXb = j + k;
//			int tempYa = m - k;
//			int	tempYb = m + k;
//			if (data[j][m] >= temp) {
//
//				if (tempYa <= 0) {//�� �簢���Ǵ�
//					tempYa = 1;
//				}
//				if (tempYb >= c + 1) {//�� �簢���Ǵ�
//					tempYb = c;
//				}
//				if (tempXa <= 0) {//�� �簢���Ǵ�
//					tempXa = 1;
//				}
//				if (tempXb >= r + 1) {//�� �簢���Ǵ�
//					tempXb = r;
//				}
//
//				int cnt = 0;
//
//				int mulValue = data[j][m] / temp;
//				for (int x = tempXa; x <= tempXb; x++) {  //�簢������ �Ǵ�
//					for (int y = tempYa; y <= tempYb; y++) {
//						if ((abs(m - y) + abs(j - x) <= k) && (abs(m - y) + abs(j - x) != 0)) {
//
//							if (data[x][y] == -1) {
//								continue;
//							}
//							tmp[x][y] += mulValue;
//							cnt++;
//						}
//					}
//				}
//				tmp[j][m] -= mulValue * cnt;
//			}
//			else { //Ȯ�� ���Ͼ�� �������̽���
//				continue;
//			}
//
//		}
//	}
//	//1���Ŀ� ���� �� ��������
//	for (int i = 1; i <= r; i++) {
//		for (int j = 1; j <= c; j++) {
//
//			data[i][j] = tmp[i][j];
//
//		}
//	}
//	//printf("Ȯ�� \n");
//	//for (int i = 1; i <= r; i++) {
//	//	for (int j = 1; j <= c; j++) {
//
//	//		printf("%d ", data[i][j]);
//
//	//	}printf("\n");
//	//}
//	//printf("\n");
//	
//		
//
//
//	
//}
//
//
////��ȯ
//void circulation(int airX1, int airX2, int airY) {
//	//�ð�
//	//airX1,airY
//
//	int firstValue = data[1][1];
//
//	//����û���� ���  //�� ��� ������ʿ� ����
//	//�� �� ����
//
//	//��
//	for (int i = 2; i <= airX1; i++) { data[i - 1][1] = data[i][1]; }
//
//	//��
//	for (int i = 2; i < airY; i++) { data[airX1][i - 1] = data[airX1][i]; };
//	//data[airX1][airY - 1] = data[airX1 - 1][airY];
//	data[airX1][airY - 1] = 0;
//
//	//��
//	for (int i = airX1 - 2; i >= 1; i--) { data[i + 1][airY] = data[i][airY]; }
//
//	//��
//	for (int i = airY - 1; i >= 1; i--) { data[1][i + 1] = data[1][i]; }
//
//	//���� �־���
//	data[1][2] = firstValue;
//
//	//for (int i = 1; i <= r; i++) {
//	//	for (int j = 1; j <= c; j++) {
//
//	//		printf("%d ", data[i][j]);
//
//	//	}printf("\n");
//	//}
//	//printf("\n");
//
//
//
//
//	//�ݽð�
//	//airX2,airY
//
//	firstValue = data[airX2][1];
//
//	//����û���� ��� 
//
//	//��
//	for (int i = 2; i < airY; i++) { data[airX2][i - 1] = data[airX2][i]; };
//	//data[airX2][c - 1] = data[airX2 + 1][c];
//	data[airX2][c - 1] = 0;
//	//��
//	for (int i = airX2 + 2; i <= r; i++) { data[i - 1][c] = data[i][c]; }
//
//	//����û����ó��
//
//	//��
//	for (int i = airY - 1; i >= 1; i--) { data[r][i + 1] = data[r][i]; }
//
//
//	//��
//	for (int i = r - 1; i >= airX2 + 1; i--) { data[i + 1][1] = data[i][1]; }
//
//	data[airX2 + 1][1] = firstValue;
//	
//	//printf("��ȯ \n");
//	//for (int i = 1; i <= r; i++) {
//	//	for (int j = 1; j <= c; j++) {
//
//	//		printf("%d ", data[i][j]);
//
//	//	}printf("\n");
//	//}
//	//printf("\n");
//
//
//}
//
//
//
//int main() {
//
//	scanf_s("%d", &t);
//
//	for (int ii = 1; ii <= t; ii++) { //�׽�Ʈ���̽��̸� �̰ɷ� ������ ���α�
//	
//	scanf_s("%d %d %d %d", &r, &c, &s, &k);
//
//	int airX1=0, airX2=0, airY=0;
//
//	for (int i = 1; i <= r; i++) {
//		for (int j = 1; j <= c; j++) {
//
//			scanf_s("%d", &data[i][j]);
//			tmp[i][j] = data[i][j];
//
//			if (data[i][j] == -1) {
//				airX2 = i;
//				airY = j;
//			}
//
//		}
//	}
//	airX1 = airX2-1; //����û����
//
//
//	for (int i = 1; i <= s; i++) {
//		spread(r, c, k); //�̰� Ȯ���Ѵ����� �� ���⵹��  ������ �̷���� ��� �������ϱ�
//		circulation(airX1, airX2, airY);
//	}
//
//	int sum = 0;
//	for (int i = 1; i <= r; i++) {
//		for (int j = 1; j <= c; j++) {
//			if (data[i][j] != -1) {
//				sum += data[i][j];
//			}
//		}
//	}
//	printf("#%d %d\n",ii, sum);
//
//	}
//
//
//
//}