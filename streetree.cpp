//#include<stdio.h>
//
//int data[100001] = { 0 };
// int n;
// int max=1;
//
// int vv(int a,int b) {
//
//	 int max = 1;
//
//	 while (true) {
//		 if (a % b == 0) {
//			 max = b;
//			 break;
//		 }
//		 else {
//			 int temp = a;
//			 a = b;
//			 b = temp % b;
//		 } 
//	 }
//	 return b;
// 
// }
//int main() {
//
//	int n;
//	scanf_s("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		scanf_s("%d", &data[i]);
//	}
//
//	int max = 0;
//
//	for (int i = 0; i < n - 1; i++) {
//		int distance = data[i + 1] - data[i];
//
//		if (i == 0) {
//			max = distance;
//		}
//		else {
//			max = vv(distance, max);
//		}
//
//	}
//
//
//	// 위까지는 탄탄함 
//	//아래에서 최대공약수 구하는게 관건임
//
//	
//
//	int cnt = 0;
//     int tt;
//	if (data[n - 1] % max > 0) {
//		tt = data[n - 1] / max + 1; // 총 가로수 갯수
//	}
//	else {
//		tt = data[n - 1] / max; // 총 가로수 갯수
//	}
//
//	if (max == 1) {
//		tt -= 1;
//	}
//	//근데  최대공약수가 첫항보다 크면 -1
//
//	// 최대공약수가 첫항보다 작으면
//	// -해준다  최대공약수부터 첫항까지 최대공약수에 대한 가로수갯수
//
//	int total = (data[n - 1] - data[0]) / max + 1; //총 이만큼 갯수 가져야함
//	printf("%d", total-n);
//
//
//}