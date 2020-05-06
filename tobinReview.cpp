//#include<cstdio>
//#include<queue>
//#include<stdlib.h>
//#include<algorithm>
//#include<string.h>
//
//using namespace std;
//
//
//int n, k;
//
//int result[40] = { 0, };
//
//
//void getResult(int x, int kk) {
//
//	if (x >= n) {	
//
//
//		int cnt = 0;
//		for (int i = 0; i <= x - 1; i++) {
//
//			if (result[i] == 1) {
//				cnt++;
//			}
//		}
//
//		if (cnt == k) {
//			for (int ii = 0; ii <= x-1; ii++) {
//
//				printf("%d", result[ii]);
//			}
//			printf("\n");	
//		}
//	
//		return;
//	}
//
//
//
//	if (kk == 0) {
//		result[x] = 0;
//		getResult(x + 1, kk);
//	}
//	else {
//		result[x] = 1;
//		getResult(x + 1, kk - 1);
//		result[x] = 0;
//		getResult(x + 1, kk);
//		
//	}
//
//}
//
//
//int main() {
//
//
//	scanf_s("%d %d", &n, &k);
//
//	getResult(0,k);
//
//
//
//}