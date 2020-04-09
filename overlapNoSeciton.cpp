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
//
//int cnt[100001] = { 0, };
//
//int tmp[100001] = { 0, };
//int num[100001] = { 0, };
//bool check(int start,int end,int interval) {
//
//	
//
//	 for (int i = 0; i <= 100000; i++) {
//		 cnt[i] = 0;
//		 tmp[i] = 0;
//		 num[i] = 0;
//	 }
//
//	bool test = false;
//	int tt = 0;
//	for (int i = 1; i <= interval; i++) {
//		cnt[data[i]]++;
//		if (cnt[data[i]] >= 2) {
//			test = true;
//		
//			tmp[data[i]] = cnt[data[i]];
//
//			if (num[data[i]] == 0) {
//				num[data[i]] = 2;
//			}
//			else {
//				num[data[i]]++; //data[i] 숫자의 갯수
//			}
//			
//		}
//	}
//	int sum = 0; //여기가문제임 동일 data[i]에대해 여러번 더해짐
//	for (int i = 1; i <= interval; i++) {
//		if (num[data[i]] >= 2) {
//			sum += tmp[data[i]];
//			num[data[i]] = 0;
//		}	
//	}
//
//	if (test == false) {
//		return true;
//	}
//
//	
//
//
//	for (int i = 1; i <= n-interval; i++) {
//		
//		test = false;
//		if (cnt[data[i]] >= 3) {
//			sum = sum - 1;
//		}else if (cnt[data[i]] == 2) {
//			sum = sum -2;
//		}
//		cnt[data[i]]--;
//		
//		cnt[data[i + interval]]++;
//
//		if (cnt[data[i + interval]] == 2) {
//			sum = sum + 2;
//		}else if (cnt[data[i + interval]] >= 2) {
//			sum = sum + 1;
//		}
//		
//		
//		if (sum == 0) {
//		
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