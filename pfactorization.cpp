//#include <stdio.h>
//
//
//bool dd(int k) {
//
//	int cnt = 0;
//	for (int i = 1; i <= k; i++) {
//		if (k % i == 0) {
//			cnt++;
//		}
//	}
//	if (cnt == 2) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//int main() {
//
//	int n;
//	scanf_s("%d", &n);
//
//	for (int i = 2; i <= n; i++) {
//		if (dd(i)) {
//			while (true) {
//				if (n % i == 0) {
//					printf("%d\n", i);
//					n /= i;
//				}
//				else {
//					break;
//				}
//			}
//		}
//	}
//
//}