//#include<cstdio>
//#include<vector>
//using namespace std;
//
//int n, m, y, x, t,k,f,d;
////double d;
//
//
//int main() {
//
//
//
//	scanf_s("%d %d %d %d", &n, &m, &k, &t);
//
//	if (d == 2 || d == 3) {
//		t = t % (m * 2 - 2);
//	}
//	else {
//		t = t % (n * 2 - 2);
//	}
//
//	
//
//	for (int i = 1; i <= k; i++) {
//		int tt = t;
//		scanf_s("%d %d %d %d", &y, &x, &d, &f);
//		if (d == 2 || d == 3) {
//		//	t = t % (m * 2 - 2);
//			while ((x - tt*f < 1 && d == 2) || (x + tt*f > m && d == 3)) {
//
//				if (d == 2) {
//					int temp = x - 1;
//					x = x - temp;
//
//
//					tt = tt - temp/f;
//					d = 3;
//				}
//				else if (d == 3) {
//					int temp = n - x;
//					x = x + temp;
//					tt = tt - temp;
//					d = 2;
//				}
//			}
//			if (d == 2) {
//				x = x - tt * f;
//			}
//			else {
//				x = x + tt * f;
//			}
//		}
//		else {
//		//	t = t % (n * 2 - 2);
//			while ((y - t * f < 1 && d == 0) || (y + t * f > n && d == 1)) {
//
//				if (d == 0) {
//					int temp = y - 1;
//					y = y - (y - 1);
//					t = t - temp;
//					d = 1;
//				}
//				else if (d == 1) {
//					int temp = n - y;
//					y = y + (n - y);
//					t = t - temp;
//					d = 0;
//				}
//			}
//			if (d == 0) {
//				y = y - t * f;
//			}
//			else {
//				y = y + t * f;
//			}
//		}
//		printf("%d %d\n", y, x);
//	}
//
//}