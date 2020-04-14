//#include<cstdio>
//#include<vector>
//using namespace std;
//
//int n, x, d, t;
//
//
//int main() {
//
//
//	scanf_s("%d %d %d %d", &n, &x, &d, &t);
//
//
//	t = t%(n * 2 - 2);
//
//	while ((x - t<0 && d==0) || (x + t>n && d==1)) {
//		
//		if (d == 0) {
//			int temp = x - 1;
//			x = x - (x - 1);
//			t = t - temp;
//			d = 1;
//		}
//		else if (d == 1) {
//			int temp = n - x;
//			x = x + (n - x);
//			t = t - temp;
//			d = 0;
//		}
//	}
//
//	if (d == 0) {
//		x = x - t;
//	}
//	else {
//		x = x + t;
//	}
//
//	printf("%d %d", x, d);
//
//
//}