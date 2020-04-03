//#include<stdio.h>
//
//
//int n;
//int data[100001];
//
//
////// S라는 숫자이상이 되려면 구간 몇이 되어야하는가 
////bool check(int interval) {
////
////	int sum = 0;
////
////	for (int i = 0; i < interval; i++) sum += data[i];
////
////	if (sum >= S) return true;
////
////	for (int i = 0; i < n - interval; i++) {
////		sum = sum - data[i] + data[i + interval];
////
////		if (sum >= s) return true;
////	}
////
////	return true;
////
////}
//
//bool check(int start,int end,int interval) {
//
//	int cnt[100001] = { 0, };
//	
//	bool test = false;
//	for (int i = 1; i <= interval; i++) {
//		cnt[data[i]]++;
//		if (cnt[data[i]] >= 2) {
//			test = true;
//		}
//	}
//	if (test == false) {
//		return true;
//	}
//
//	for (int i = 1; i <= n-interval; i++) {
//		
//		test = false;
//		cnt[data[i]]--;
//		cnt[data[i+interval]]++;
//
//		for (int j = i+1; j <= i+interval; j++) {
//
//			if (cnt[data[j]] >= 2) {
//				test = true;
//			}
//		}
//		if (test == false) {
//			return true;
//		}
//	}
//
//	return false;
//	
//
//
//}
//int main() {
//	scanf_s("%d",&n);
//
//	for (int i = 1; i <= n; i++) {
//		scanf_s("%d", &data[i]);
//	//	cnt[data[i]]++;
//	}
//
//	int start = 1;
//	int end = n;
//	int mid = 1;
//	int cnt = 0;
//
//
//	while (true) {
//		cnt++;
//		if (start > end) {
//		
//			//printf("start : %d end : %d mid : %d\n", start, end,mid);
//			printf("%d\n", end);
//			break;
//		}
//		mid = (start + end) / 2;
//
//		if (cnt == 1) {
//			if (mid == 1) {
//				if (data[start] != data[end]) {
//					printf("2");
//				}
//				else {
//					printf("1");
//				}
//				
//				return 0;
//			}
//		}
//
//		if (check(start,end,mid) == false) {		
//			end = mid - 1;
//		}
//		else {
//			start = mid + 1;
//		}
//	}
//
//}