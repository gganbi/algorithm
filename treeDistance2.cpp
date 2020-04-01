//#include <stdio.h>
//
//int main() {
//	int parent[1005] = { 0, };
//	bool color[1005] = { 0, };
//	bool tmp[1005] = { 0, };
//	int n;
//	int x, y;
//	int value;
//
//	scanf_s("%d %d %d", &n, &x, &y);
//	int xx = x, yy = y;
//
//	for (int i = 0; i < n - 1; i++) {
//		int a, b;
//		scanf_s("%d %d", &a, &b);
//
//		parent[b] = a;
//		//b의 위에 a가 있다
//
//	}
//
//	while (1) {
//		color[x] = true;
//		if (x == 0) break;
//
//		x = parent[x];
//	}
//
//	while (1) {
//		if (color[y] == true) {
//			value = y;
//		//	printf("%d\n", y);
//			break;
//		}
//		color[y] = true;
//		y = parent[y];
//	}
//
//	int cnt1 = 0;
//	while (1) {
//
//		if (xx == value) {
//			break;
//		}
//		else {
//			cnt1++;
//			xx = parent[xx];
//		}
//		
//	}
//	int cnt2 = 0;
//	while (1) {
//		if (yy == value) {
//			break;
//		}
//		else {
//			cnt2++;
//			yy = parent[yy];
//		}
//	}
//
//	//printf("%d %d", cnt1, cnt2);
//	printf("%d", cnt1+cnt2);
//
//
//
//}