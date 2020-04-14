//#include<cstdio>
//#include<vector>
//using namespace std;
//
//int n,m,y, x, d, t;
//
//
//int main() {
//
//
//	scanf_s("%d %d %d %d %d %d", &n,&m,&y, &x, &d, &t);
//
//	if (d == 2 || d == 3) {
//		t = t % (m * 2 - 2);
//		while ((x - t < 1 && d == 2) || (x + t > m && d == 3)) {
//
//			if (d == 2) {
//				int temp = x - 1;
//				x = x - (x - 1);
//				t = t - temp;
//				d = 3;
//			}
//			else if (d == 3) {
//				int temp = m - x;
//				x = x + (m - x);
//				t = t - temp;
//				d = 2;
//			}
//		}
//		if (d == 2) {
//			x = x - t;
//		}
//		else {
//			x = x + t;
//		}
//	}
//	else {
//		t = t % (n * 2 - 2);
//		while ((y - t < 1 && d == 0) || (y + t > n && d == 1)) {
//
//			if (d == 0) {
//				int temp = y - 1;
//				y = y - (y - 1);
//				t = t - temp;
//				d = 1;
//			}
//			else if (d == 1) {
//				int temp = n - y;
//				y = y + (n -y);
//				t = t - temp;
//				d = 0;
//			}
//		}
//		if (d == 0) {
//			y = y - t;
//		}
//		else {
//			y = y + t;
//		}
//	}
//	
//
//	printf("%d %d", y, x);
//
//
//}