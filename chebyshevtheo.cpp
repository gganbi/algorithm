//#include <stdio.h>
//
//int fs[130000] = {0,};
//
//int dd(int a) { //�� ������ �Ҽ��γ� ���� ���
//
//	int first = a;
//	for (int i = 2; i <= a; i++) {  //���
//		for (int j = 2; i*j <= a; j++) { //��ü ���鼭 �� ����ξֵ� false	
//			fs[i * j] = 1;
//		}
//	}
//	int cnt = 0;
//	for (int i = 2; i <= a; i++) {
//		if (fs[i] == 0) {
//			cnt++;
//		}
//	}
//	return cnt;
//}
//
//
//int main() {
//
//
//
//	int data;
//	while (true) {
//		scanf_s("%d", &data);
//
//		if (data == 0) {
//			break;
//		}
//		else {
//			printf("%d\n",dd(data*2)- dd(data));
//		}
//		
//	
//	}
//	return 0;
//
//}