//#include<stdio.h>
//
//
//
//
//
//
//int main() {
//
//	int x, y;
//	scanf_s("%d %d", &x,&y);
//
//	int temp = y - x;
//	if (temp == 0) {
//		printf("0");
//	}
//	else if (temp == 1) {
//		printf("1");
//	}
//	else if (temp == 2) {
//		printf("2");
//	}
//	else {
//		int i = 2;// 22 33 44 �׺���
//		int tt = 2; //�ε����� ����
//		int sum = 2; //�ִ�Ÿ�
//		int count = 0; //�ι������ִ� �ӽú���
//		while (true) {
//			if (count < 2) {
//				tt++;
//				sum += i;
//				count++;
//				if (temp <= sum) {
//					printf("%d", tt);
//					break;
//				}
//			}
//			else {
//				count = 0;
//				i++;
//			}
//
//		}
//	
//	}
//
//
//	return 0;
//
//
//}