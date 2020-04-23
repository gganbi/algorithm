////#include <stdio.h>
////
////
////void factorial(int a) {
////
////	if (a / 2 == 0) {
////		printf("1");
////	}
////	else {
////		factorial(a / 2);
////		printf("%d", a % 2);
////	}
////}
////
////int main() {
////
////	int a;
////
////	scanf_s("%d", &a);
////	factorial(a);
////
////
////	return 0;
////}
//
//
//#include<stdio.h>
//
//int n;
//
//int data;
//
//int result[100];
//int count = 0;
//
//void getResult(int n) {
//
//	if (n == 1) {
//		printf("1");
//		return;
//	}
//	getResult(n - 1);
//
//	printf("%d", n);
//	getResult(n - 1);
//
//
//	
//}
//int main() {
//
//	scanf_s("%d", &n);
//	getResult(n);
//	/*for (int i = count; i >= 0; i--) {
//		printf("%d ", result[i]);
//	}*/
////	printf("%d", getResult(0));
//
//}