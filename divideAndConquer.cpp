//#include<stdio.h>
//
//const int max = 100;
//
//int n;
//int data[max];
//
//int getSubMax(int start,int end) {
//	if(n == 1) {
//		return data[0];
//	}
//
//	if (start >= end) return data[start];
//
//	
//
//	int mid = (start + end) / 2;
//	int left = getSubMax(start, mid);
//	int right = getSubMax(mid+1, end);
//
//	int leftSum = 0, leftMax = -9999999;
//	for (int i = mid; i >= start; i--) {
//		leftSum = leftSum + data[i];
//
//		if (leftMax < leftSum) {
//			leftMax = leftSum;
//		}
//	}
//
//	int rightSum = 0, rightMax = -9999999;
//	for (int i = mid+1; i <= end; i++) {
//		rightSum = rightSum + data[i];
//
//		if (rightMax < rightSum) {
//			rightMax = rightSum;
//		}
//	}
//
//	int myMax = leftMax + rightMax;
//
//
//	if (left >= right && left >= myMax) return left;
//	else if (right >= left && right >= myMax) return right;
//	else return myMax;
//
//
//
//
//
//
//
//}
//
//int main() {
//
//	scanf_s("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		scanf_s("%d", &data[i]);
//	}
//
//	printf("%d\n", getSubMax(0, n - 1));
//
//	return 0;
//
//}