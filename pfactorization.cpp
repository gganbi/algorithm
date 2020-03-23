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
//
//	int aa[10000] = {0,}; //약수배열
//	int countA = 0;
//	scanf_s("%d", &n);
//
//	for (int i = 1; i <= n; i++) {
//		if (n % i == 0) {
//			aa[countA++] = i;
//		}
//	}
//
//	int bb[10000] = {0,}; //약수중 소인수배열
//	int countB = 0;
//	for (int i = 0; i < countA; i++) {
//		if (dd(aa[i])) {
//			bb[countB++] = aa[i];
//		}
//	}
//
//	int i = 0;
//	while (true) {
//		if (n == 1) {
//			break;
//		}
//		if (n % bb[i] == 0) {
//			printf("%d\n", bb[i]);
//			n /= bb[i];
//		}
//		else {
//			i++;
//			printf("%d\n", bb[i]);
//			n /= bb[i];
//		
//		}
//	}
//	
//
//}