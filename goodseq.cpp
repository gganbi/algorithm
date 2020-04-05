//#include <stdio.h>
//
//int result[100], resultLen;
//
//int n;
//bool isFinished = false;
//
//bool isPossible(int x,int length) {
//	
//
//	for (int i = 0; i < length; i++) {
//		if (result[x - i] != result[x - i - length])
//			return true;
//	}
//
//	return false;
//}
//void getResult(int x) {
//	if (isFinished == true) {
//		return;
//	}
//
//	if (x >= n) {
//		for (int i = 0; i < n; i++) printf("%d", result[i]);
//		printf("\n");
//		isFinished = true;
//		return;
//	}
//
//		for (int i = 1; i <= 3; i++) {
//			result[x] = i;
//			bool flag = false;
//			for (int j = 1; j <= (x + 1) / 2; j++) {
//				if (!isPossible(x, j)) {
//					flag = true;
//					break;
//				}
//
//			}
//			if (flag == false) {
//				getResult(x + 1);
//			}
//		}
//
//
//	//result[x]를 결정한 후 ,result[x+1]부터 쭉 결정해 나가는 함수
//	// restut[x] ~ result[n-1] 까지 결정하는 함수
//
//	
//
//}
//
//int main() {
//
//	scanf_s("%d", &n);
//
//	getResult(0);
//
//	return 0;
//
//
//}