//#include<stdio.h>
//
//int T;
//int r, c, m;
//int y, x, d, f, w;
//
//int data[110][110] = { 0, };
//int dataD[110] = {0,};
//int dataF[110] = { 0, };
//int dataY[110] = { 0, };
//int dataX[110] = { 0, };
//int dataW[110] = { 0, };
//int tmp[110][110] = { 0, };
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
//				}
//			}
//
//		}
//		else {
//			//�̵��ϰԵ� ���� ���� ���� 0���θ���
//			dataW[k] = 0;
//			//����ǥ��
//		}
//	}
//	else {
//		data[y][x] = realW;
//	}
//	dataY[k] = y;
//	dataX[k] = x;
//	dataD[k] = d;
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
//	scanf_s("%d %d %d %d", &T, &r, &c, &m);
//
//	//for (int i = 1; i <= T; i++) {
//
//	
//	
//	for (int i = 1; i <= m; i++) {
//	
//		scanf_s("%d %d %d %d %d",&y, &x, &d,&f,&w);
//		
//		dataY[i] = y;
//		dataX[i] = x;
//		data[y][x] = w;
//		dataD[i] = d;
//		dataF[i] = f;
//		dataW[i] = w;
//	}
//	printf("\nfirst : \n");
//	for (int mm = 1; mm <= r; mm++) {
//		for (int nn = 1; nn <= c; nn++) {
//			printf("%d ", data[mm][nn]);
//		}printf("\n");
//	}
//	
//	for (int ii = 1; ii <= c; ii++) {
//
//		if (ii == 2) {
//		
//			printf("555555");
//		}
//		for (int i = 1; i <= m; i++) {
//
//			if (dataD[i] == 3 || dataD[i] == 4) {
//				dataF[i] = dataF[i] % (c * 2 - 2);
//			}
//			else {
//				dataF[i] = dataF[i] % (r * 2 - 2);
//			}
//			
//			if (dataW[i] != 0) {
//				move(dataY[i], dataX[i], dataD[i], dataF[i], dataW[i], i);
//			}
//			
//
//		}
//		printf("\n");
//		for (int mm = 1; mm <= r; mm++) {
//			for (int nn = 1; nn <= c; nn++) {
//				printf("%d ", data[mm][nn]);
//			}printf("\n");
//		}
//
//		//�� ���� ������ üũ
//	
//		for (int j = r; j >= 1; j--) {
//			if (data[j][ii] != 0) {
//				sum += data[j][ii];
//				//dataW[j][ii] = 0; ��ư �̳� ���� 0���θ����
//				data[j][ii] = 0;
//				for (int iii = 1; iii <= m; iii++) {
//					if (dataY[iii] == j && dataX[iii] == ii) {
//						dataW[iii] = 0;		
//					}
//				}
//				break;
//
//
//			}
//		}
//		printf("\n");
//		printf("%d %d\n",ii, sum);
//
//	}
//	//}
//	return 0;
//
//}