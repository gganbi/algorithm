//#include<stdio.h>
//
//
//int n;
//int data[100001];
//int cnt[100001] = {0,};
//
//
//bool check(int a) {
//
//
//	// 4 4 1 1 2 3 
//	// 이런식으로 개별숫자 갯수세는로직을 못짜겟음
//	//중복체크
//	for (int i = 1; i <= a; i++) {
//		cnt[data[i]]++;
//	}
//
//	//중복체크
//	for (int i = 1; i <= a; i++) {
//		if (cnt[data[i]] == 1)
//			return true;
//	}
//
//
//
//}
//int main() {
//	scanf_s("%d", n);
//
//	for (int i = 1; i <= n; i++) {
//		scanf_s("%d", &data[i]);
//		cnt[data[i]]++;
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