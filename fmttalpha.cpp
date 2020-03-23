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
//		int i = 2;// 22 33 44 그변수
//		int tt = 2; //인덱스값 변수
//		int sum = 2; //최대거리
//		int count = 0; //두번씩해주는 임시변수
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