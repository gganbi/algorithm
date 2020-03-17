//#include <stdio.h>
//
//int main() {
//
//	int n, m;
//	scanf_s("%d %d", &n, &m);
//
//	long long int a = 1;
//	long long int b = 1;
//	for (int i = m; i >= 1; i--) {
//		a *= n;
//		n--;
//	}
//
//
//	for (int i = m; i >= 1; i--) {
//		b *= i;
//	}
//	int cnt = 0;
//	long long int tmp = a / b;
//	while (true) {
//		if (tmp % 10 == 0) {
//			tmp /= 10;
//			cnt++;
//		}
//		else {
//			break;
//		}
//	}
//
//	printf("%d", cnt);
//}