//#include<stdio.h>
//
//
//long long int n, m;
//
//
//long long int dd(long long int n, long long int m) {
//
//	if (m == 0)
//		return  1;
//
//	if (m % 2 == 1) {
//		int temp = dd(n, m - 1);
//		return	temp *n;
//	}
//	else {
//
//		int temp = dd(n, m / 2);
//
//		return	temp * temp;
//
//	}
//
//}
//
//int main() {
//	scanf_s("%lld %lld", &n, &m);
//
//	printf("%lld", dd(n, m) % 10007);
//
//
//
//
//}