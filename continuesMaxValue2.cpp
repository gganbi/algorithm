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
//			//start ~end��������
//			//1~end�������� -  1~start-1��������
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

// S��� �����̻��� �Ƿ��� ���� ���� �Ǿ���ϴ°� 
//bool check(int interval) {
//
//	int sum = 0;
//
//	for (int i = 0; i < interval; i++) sum += data[i];
//
//	if (sum >= S) return true;
//
//	for (int i = 0; i < n - interval; i++) {
//		sum = sum - data[i] + data[i + interval];
//
//		if (sum >= s) return true;
//	}
//
//	return true;
//
//
//
//
//
//}