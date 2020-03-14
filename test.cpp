//#include<stdio.h>
//
//int main() {
//
//	int n;
//	scanf_s("%d", &n);
//
//	int data[200];
//	for (int i = 0; i < n; i++) {
//		scanf_s("%d", &data[i]);
//	}
//
//	int x, y;
//
//	scanf_s("%d %d", &x, &y);
//
//
//	int tmp=x;
//	if (y >= n) {
//		y = y % n;
//	}
//	int tmp2=0;
//
//	for (int i = 1; i <= y; i++) {
//		if (tmp + i > n - 1) {
//			tmp = 0;
//			tmp2 = 0;
//		}
//		else {
//			tmp2++;
//		}
//	}
//	tmp += tmp2;
//
//	printf("%d", data[tmp]);
//			
//	
//	
//	
//
//
//	return 0;
//}
//
//
