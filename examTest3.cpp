//#include<stdio.h>
//#include<string.h>
//
//int T;
//int r, c, m;
//int y, x, d, f, w;
//
//int data[11000][11000] = { 0, };
//int dataD[11000] = {0,};
//int dataF[11000] = { 0, };
//int dataY[11000] = { 0, };
//int dataX[11000] = { 0, };
//int dataW[11000] = { 0, };
//int tmp[11000][11000] = { 0, };
//
//int sum = 0;
//void move(int y, int x, int d, int f, int w, int k) { 
//
//	
//	int realY = y;
//	int realX = x;
//	int realW = w;
//	int realF = f;
//
//	data[realY][realX] = 0;//�̵��ϱ��� 0�����
//	if (d == 3 || d == 4) {  //�� ��
//		f = realF;
//		while ((d == 3) && (x - f <= 0) || (d == 4) && ((x + f) >= c + 1)) {
//			if (d == 3) {
//				int tmp = x - 1;
//				x = 1;
//				f -= tmp;
//				d = 4;			
//			}
//			else {
//				int tmp = c - x;
//				x = c;
//				f -= tmp;
//				d = 3;
//			}		
//		}
//		if (d == 3) {
//			x -= f;
//		}
//		else {
//			x += f;
//		}
//	}
//	else {
//		f = realF;
//		while ((d == 1 && y - f <= 0) || (d == 2 &&  y + f>= r + 1)) { //�� ��
//			if (d == 1) { //��
//				int tmp = (y - 1);
//				y = 1;
//				f -= tmp;
//				d = 2;
//			}
//			else {
//				int tmp = r - y;
//				y = r;
//				f -= tmp;
//				d = 1;
//			}	
//		}
//		if (d == 1) {
//			y -= f;
//		}
//		else {
//			y += f;
//		}
//	}
//
//
//	
//	//���� ���̱�
//
//	if (data[y][x] != 0) { //�̵��Ŀ� ��ġ�� �̹� ������ ������
//		if (realW > data[y][x]) {// �̵� �Ŀ� �������԰� ������������ ������ 
//			data[y][x] = realW; //������������
//
//			//�� ������ ���ְų� ���Ը� 0���� �����ߵ�
//			// dataY y dataX x�� ������ k��° ������ ���Ը� 0���� ����� ��
//			for (int iii = 1; iii <= m; iii++) {
//				if (dataY[iii] == y && dataX[iii] == x) {
//					dataW[iii] = 0;
//
//				}
//			}
//
//		}
//		else { //������ �ִ��ְ� �� Ŭ�� 
//			//�̵��ϰԵ� ���� ���� ���� 0���θ���
//			//dataW[k] = 0;
//			//����ǥ��
//		}
//	}
//	else {
//		data[y][x] = realW;
//
//	}
//	dataY[k] = y;
//	dataX[k] = x;
//	dataD[k] = d;
//	//dataW[k] = realW;
//
//
////	printf("\n%d %d\n", y, x);
//
//};
//
//
//int main() {
//
//	//������ �����س����ϴ°ɷ� ���躯��
//
//
//	scanf_s("%d", &T);
//
//
//	for (int mmi = 1; mmi <= T; mmi++) {
//		sum = 0;
//		scanf_s("%d %d %d", &r, &c, &m);
//		for (int i = 1; i <= m; i++) {
//
//			scanf_s("%d %d %d %d %d", &y, &x, &d, &f, &w);
//
//			dataY[i] = y;
//			dataX[i] = x;
//			data[dataY[i]][dataX[i]] = w;
//			dataD[i] = d;
//			dataF[i] = f;
//			dataW[i] = w;
//		}
//		//printf("\nfirst : \n");
//		//for (int mm = 1; mm <= r; mm++) {
//		//	for (int nn = 1; nn <= c; nn++) {
//		//		printf("%d ", data[mm][nn]);
//		//	}printf("\n");
//		//}
//
//		for (int ii = 1; ii <= c; ii++) {
//
//			//if (ii == 2) {
//			//
//			//	printf("555555");
//			//}
//			for (int j = 1; j <= m; j++) {
//
//				if (dataD[j] == 3 || dataD[j] == 4) {
//					dataF[j] = dataF[j] % (c * 2 - 2);
//				}
//				else {
//					dataF[j] = dataF[j] % (r * 2 - 2);
//				}
//
//				if (dataW[j] != 0) {
//					move(dataY[j], dataX[j], dataD[j], dataF[j], dataW[j], j);
//				}
//
//
//			}
//			/*	printf("\n");
//				for (int mm = 1; mm <= r; mm++) {
//					for (int nn = 1; nn <= c; nn++) {
//						printf("%d ", data[mm][nn]);
//					}printf("\n");
//				}*/
//
//				//�� ���� ������ üũ
//
//			for (int j = r; j >= 1; j--) {
//				if (data[j][ii] != 0) {
//					sum += data[j][ii];
//					//dataW[j][ii] = 0; ��ư �̳� ���� 0���θ����
//					data[j][ii] = 0;
//					for (int iiii = 1; iiii <= m; iiii++) {
//						if (dataY[iiii] == j && dataX[iiii] == ii) {
//							dataW[iiii] = 0;
//
//							break;
//
//						}
//					}
//
//					break;
//
//				}
//			}
//			
//
//		}
//		printf("%d# %d\n",mmi, sum);
//
//		
//
//
//		for (int i = 1; i <= r; i++) {
//			for (int j = 1; j <= c; j++) {
//				data[i][j] = 0;
//			}
//		}
//
//		memset(dataX, 0, sizeof(dataX));
//		memset(dataD, 0, 110);
//		memset(dataY, 0, 110);
//		memset(dataF, 0, 110);
//		memset(dataW, 0, 110);
//	}
//	
//	//}
//	return 0;
//
//}