//#include<stdio.h>
//
//int data[100001] = {0};
//int tmp[100001] = { 0 };
//int main() {
//
//
//	int n;
//	scanf_s("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		scanf_s("%d", &data[i]);
//	}
//
//	for (int i = 0; i < n-1; i++) {
//		tmp[i] = data[i + 1] - data[i];
//	}
//
//
//	// 위까지는 탄탄함 
//	//아래에서 최대공약수 구하는게 관건임
//
//	int tmpMax = tmp[0];
//	for (int i = 1; i < n - 2; i++) {
//		if (tmpMax <= tmp[i]) {
//			tmpMax = tmp[i];
//		}
//	}
//	int max = 1;  //최대공약수 
//	for (int i = 1; i <= tmpMax; i++) {
//		int temp = 0;
//		for (int j = 0; j < n - 1; j++) {		
//			if (tmp[j] % i == 0) {
//				temp++;
//			}
//		}
//
//		if (temp == (n - 1)) {
//			max = i;
//		}
//	}
//
//
//	int cnt = 0;
//	int tt;
//	if (data[n - 1] % max > 0) {
//		tt = data[n - 1] / max+1; // 총 가로수 갯수
//	}
//	else {
//		tt = data[n - 1] / max; // 총 가로수 갯수
//	}
//
//	printf("%d", tt-n);
//}