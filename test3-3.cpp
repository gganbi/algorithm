//#include<cstdio>
//using namespace std;
//
//int n, m, k, t;
//
//int data[1001][1001] = { 0, };
//
//int main() {
//
//	scanf_s("%d %d %d %d", &n, &m, &k, &t); 
//
//	for (int i = 1; i <= k; i++) {
//		int y, x, d, f;
//		scanf_s("%d %d %d %d", &y, &x, &d, &f);
//
//		for (int i = 1; i <= t; i++) {
//			
//			if (d == 0) {  //��
//				if (y - f >= 1) {
//					y = y - f;
//				}
//				else {
//					y = 1;
//				}
//			}
//			else if (d == 1) { //��
//				if (y + f <= n) {
//					y = y + f;
//				}
//				else {
//					y = n;
//				}
//			
//			}
//			else if (d == 2) { //��
//				if (x - f >= 1) {
//					x = x - f;		
//				}
//				else {
//					x = 1;
//				}
//			}
//			else { //��
//				if (x + f <= m) {
//					x = x + f;
//				}
//				else {
//					x = m;
//				}
//			
//			}
//		
//		}
//
//		printf("%d %d\n", y, x);
//	
//	}
//
//}