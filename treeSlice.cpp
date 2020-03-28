//#include<stdio.h>
//
//int data[1000001];
//// long long int 로 풀어줘야함
//int n, m;
//int lastIndex = 0;
//
//
//int dd(int data[], int m, int minn, int maxx) {
//	
//	if (minn > maxx) {
//		return maxx;
//	}
//	
//	int sum = 0;
//	int mid = (minn + maxx) / 2;
//	for (int i = 1; i <= n; i++) {
//		if (data[i] - mid < 0) {
//			sum += 0;
//		}
//		else {
//			sum += (data[i] - mid);
//		}
//	}
//
//	if (sum == m) {
//		lastIndex = mid;
//		return mid;
//	}
//	else if (sum > m) {
//		minn = mid + 1;
//		dd(data, m, mid + 1, maxx);
//	}
//	else {
//		maxx = mid - 1;
//		dd(data, m,minn, mid - 1);
//	}
//
//
//
//}
//int main() {
//
//
//
//	scanf_s("%d %d", &n, &m);
//
//	for (int i = 1; i <= n; i++) {
//		scanf_s("%d", &data[i]);
//	}
//
//	int max = data[1];
//	for (int i = 2; i <= n; i++) {
//		if (max <= data[i]) {
//			max = data[i];
//		}
//	}
//
//	int minn = 1;
//	int maxx = max;
//
//
//	lastIndex=dd(data, m, minn, maxx);
//	while (true) {
//		 int sum = 0;
//		 int mid = (minn + maxx) / 2;
//		 for (int i = 1; i <= n; i++) {
//			 if (data[i] - mid <0 ) {
//				 sum += 0;
//			 }
//			 else {
//				 sum += (data[i] - mid);
//			 } 
//		 }
//		
//		 if (sum == m) {
//			 lastIndex = mid;
//
//			 break;
//		 }
//		 else if (sum > m) {
//			 minn = mid + 1;		 
//		 }
//		 else {
//			 maxx = mid - 1;
//		 }
//	}
//
//	printf("%d", lastIndex);
//
//
//}