//#include<stdio.h>
//
//long long int data[100001] = {0};
//long long int tmp[100001] = { 0 };
//int main() {
//
//
//	int n;
//	scanf_s("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		scanf_s("%lld", &data[i]);
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
//	long long int tmpMax = tmp[0];
//	for (long long int i = 1; i < n - 2; i++) {
//		if (tmpMax <= tmp[i]) {
//			tmpMax = tmp[i];
//		}
//	}
//	long long int max = 1;  //최대공약수 
//	for (long long int i = 1; i <= tmpMax; i++) {
//		long long int temp = 0;
//		for (long long int j = 0; j < n - 1; j++) {		
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
//	long long cnt = 0;
//	long long int tt;
//	if (data[n - 1] % max > 0) {
//		tt = data[n - 1] / max+1; // 총 가로수 갯수
//	}
//	else {
//		tt = data[n - 1] / max; // 총 가로수 갯수
//	}
//	//근데  최대공약수가 첫항보다 크면 -1
//
//	// 최대공약수가 첫항보다 작으면
//	// -해준다  최대공약수부터 첫항까지 최대공약수에 대한 가로수갯수
//
//	long long int total = data[n - 1] - data[0] / max + 1;
//	printf("%lld", total - n);
//
////	printf("%d\n", max);
//
//	//if (max < data[0]) {
//
//	//	long long int mm;
//	//	if (data[0] % max > 0) {
//	//		mm = data[0] / max ; // 첫항부터 최대공약수
//	//	}
//	//	else {
//	//		mm = data[0] / max-1; // 첫항부터 최대공약수
//	//	}
//	//	printf("%lld", tt - n - mm);
//	//}
//	//else {
//	//	printf("%lld", tt - n);
//	//}
//
//
//}