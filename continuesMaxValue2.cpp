//#include<stdio.h>
//
//int n;
//int data[100];
//int sum[100];
//int main() {
//
//	scanf_s("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		scanf_s("%d", &data[i]);
//	}
//
//	sum[0] = data[0];
//
//	for (int i = 1; i < n; i++) {		
//		sum[i] = sum[i - 1] + data[i];
//	}
//	int myMax = -9234;
//	for (int start = 0; start < n; start++) {
//		for (int end = start; end < n; end++) {
//			int mySum = 0;
//
//
//			//start ~end까지의합
//			//1~end까지의함 -  1~start-1까지의함
//			//sum[end]-sum[start-1]
//			
//			if (start == 0) {
//				mySum = sum[end];
//			}
//			else {
//				mySum = sum[end] - sum[start - 1];
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