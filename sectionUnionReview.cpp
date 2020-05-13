//#include<cstdio>
//
//using namespace std;
//
//
//
//int dataa[3][10010];
//
//int n;
//int i;
//int min = 1000000000;
//int max = 0;
//int main() {
//
//
//	scanf_s("%d", &n);
//	for (int ii = 1; ii <= n; ii++) {
//		scanf_s("%d %d", &dataa[1][ii], &dataa[2][ii]);
//
//		if (dataa[1][ii] <=min) {
//			min = dataa[1][ii];
//		}
//
//		if (dataa[2][ii] > max) {
//			max = dataa[2][ii];
//		}
//	}
//	scanf_s("%d", &i);
//
//
//	int start = min;
//	int end = max;
//
//	while (true) {
//
//
//		if (start > end) {
//		
//			printf("%d", start);
//			break;
//		
//		}
//		int mid = (start + end) / 2;
//
//		int cnt = 0;
//		for (int iii = 1; iii <= n; iii++) {
//			if (dataa[1][iii] < mid) {
//				if (dataa[2][iii] >= mid) {
//					cnt += (mid - dataa[1][iii]);
//				}
//				else {
//					cnt += (dataa[2][iii] - dataa[1][iii]+1);
//				}
//			}
//		}
//		if (cnt+1== i) {
//			printf("%d", mid);
//			break;
//		}
//		else if (cnt +1> i) {
//			end = mid - 1;
//		}
//		else {
//			start = mid + 1;
//		}
//
//
//	
//	}
//
//
//}