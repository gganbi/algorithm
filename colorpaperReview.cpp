//#include<cstdio>
//
//
//int n;
//int datan[110][110] = {0,};
//
//int cntt[110] = {0,};
//int main(){
//	
//	scanf_s("%d", &n);
//
//	for (int i = 1; i <= n; i++) {
//		int a, b, c, d;
//		scanf_s("%d %d %d %d", &a, &b, &c, &d);
//		for (int m = a; m <= a + c - 1; m++) {	
//			for (int n = b; n <= b + d - 1; n++) {
//				datan[m][n] = i;
//			}
//		}
//	}
//
//	int cnt = 0;
//	for (int i = 0; i <= 101; i++) {
//		for (int m = 0; m <= 101; m++) {
//			cntt[datan[i][m]]++;
//		}
//	}
//
//	for (int i = 1; i <= n; i++) {
//		printf("%d\n", cntt[i]);
//	}
//
//	
//	
//
//
//
//
//}