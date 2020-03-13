//#include<stdio.h>
//
//void sort(int a[]) {
//
//	int min = a[1];
//
//	int temp;
//
//	for (int i = 1; i < 9; i++) {
//		for (int j = i + 1; j < 10; j++) {
//			if (a[i] > a[j]) {
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//
//}
//
//int main() {
//	
//	long long int a;
//	long long int  b;
//	long long int min = 1;
//	long long int max = 1;
//	scanf_s("%lld", &a);
//	scanf_s("%lld", &b);
//
//	if (a > b) {
//		if (a % b == 0) {
//			min = a;
//		}
//		else {
//			for (long long int i = 1; i <= b; i++) {
//				if (a % i == 0 && b % i == 0) {
//					max = i;
//					min = max * (a / max) * (b / max);
//				}
//			}
//		}	
//	}
//	else {
//		if (b % a == 0) {
//			min = b;
//		}
//		else {
//			for (long long int i = 1; i <= a; i++) {
//				if (a % i == 0 && b % i == 0) {
//					max = i;
//					min = max * (a / max) * (b / max);
//				}
//			}
//		}
//	}
//
//	printf("%d", min);
//	
//
//
//
//	
//}