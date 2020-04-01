//#include<stdio.h>
//
//
//int n;
//int data[100001];
//int cnt[100001] = {0,};
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
//bool check(int interval) {
//
//	int cnttt = 1;
//	int tmp[100001]= { 0, };
//	bool test = false;
//	for (int i = 1; i <= interval; i++) {
//		cnt[data[i]]++;
//		if (cnt[data[i]] >= 2) {
//			tmp[cnttt++] = data[i];
//			test = true;
//		}
//	}
//	if (test == false) {
//		return true;
//	}
//
//	test = false;
//	for (int i = 1; i <= n - interval; i++) {
//
//		cnt[data[i]]--;
//		for (int j = 1; j <= n; j++) {
//		
//		}
//
//		
//		if (cnt[data[i]] >= 2) {
//			test = true;
//		}
//		cnt[data[i + interval]]++;
//		if (cnt[data[i+ interval]] >= 2) {
//			test = true;
//		}
//
//		//이렇게하면 가운데 중복됬떤애들 못거른다
//	}
//	if (test == false) {
//		return true;
//	}
//
//
//}
//int main() {
//	scanf_s("%d", n);
//
//	for (int i = 1; i <= n; i++) {
//		scanf_s("%d", &data[i]);
//		//cnt[data[i]]++;
//	}
//
//	int start = 1;
//	int end = n;
//	int mid = 1;
//
//
//	while (true) {
//		mid = (start + end) / 2;
//
//		if (check(mid) == false) {
//		
//		
//		}
//
//
//
//
//	
//	
//	}
//
//
//	
//
//}