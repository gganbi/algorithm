//#include<stdio.h>
//
//long long int n;
//
//long long int data[10001][3];
//long long int i;
//
//
//int main() {
//	scanf_s("%lld", &n);
//
//	for (long long int i= 1; i <= n; i++) {
//		scanf_s("%lld %lld", &data[i][1], &data[i][2]);
//	}
//	scanf_s("%lld",&i);
//	
//	long long int min = data[1][1];
//	for (long long int i = 2; i <= n; i++) {
//		if (min >= data[i][1]) {
//			min = data[i][1];
//		}
//	}
//
//	long long int max = data[1][2];
//	for (long long int i = 2; i <= n; i++) {
//		if (max <= data[i][2]) {
//			max = data[i][2];
//		}
//	}
//	long long int start = min;
//	long long int end = max;
//
//
//	long long int mid;
//	while (true) {
//	// data[mid] 는 해당 숫자
//    // mid 몇번째인지?
//
//		if (start > end) {
//
//			printf("%lld", end);
//			break;
//		}
//		mid = (start + end) / 2;
//
//		long long int cnt = 0;
//		for (long long int j = 1; j <= n; j++) {
//
//			long long int first = data[j][1];
//			long long int second = data[j][2];
//
//			if (second > mid) {
//				if (mid - first >=0) {
//					cnt += (mid - first);
//				}		
//			}
//			else if (second == mid) {
//				if (mid - first >= 0) {
//					cnt += (mid - first);
//				}
//			}
//			else {
//				if (second - first + 1 >= 0) {
//					cnt += (second - first + 1);
//				}
//				
//			}
//		}
//
//		if (cnt + 1 >i+1) {
//			end = mid - 1;
//		
//		}
//		else if (cnt + 1 == i+1) {
//			printf("%lld", mid);
//			break;
//		}
//		else {
//			start = mid + 1;
//		}
//	}
//
//
//	
//
//}