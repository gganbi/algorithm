//#include<stdio.h>
//
//int main() {
//
//	int a, b, c, d;
//	
//	scanf_s("%d %d %d %d", &a, &b, &c, &d);
//
//	int first = (a * d + b * c);
//	int second = (b * d);
//	int max = 1;
//	if (first >= second) {	
//		for (int i = 1; i <= second; i++) {
//			if (first % i == 0 && second % i == 0) {
//				max = i;
//			}
//		}
//	}
//	else {
//		for (int i = 1; i <= first; i++) {
//			if (first % i == 0 && second % i == 0) {
//				max = i;
//			}
//		}
//	}
//
//	printf("%d %d", first, second);
//
//
//
//	return 0;
//}