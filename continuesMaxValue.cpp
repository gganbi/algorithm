//#include<stdio.h>
//
//int n;
//int data[100];
//int main() {
//
//	scanf_s("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		scanf_s("%d", &data[i]);
//	}
//
//	int myMax = -9234;
//	for (int start = 0; start < n; start++) {
//		for (int end = start; end < n; end++) {
//			int mySum = 0;
//
//			for (int k = start; k <= end; k++) {
//				mySum += data[k];
//
//			}
//			if (mySum > myMax) {
//				myMax = mySum;
//			}
//		}
//	}
//
//	printf("%d", myMax);
//
//}