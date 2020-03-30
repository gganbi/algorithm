//#include <stdio.h>
//
//int main() {
//	int parent[1005] = { 0, };
//	bool color[1005] = { 0, };
//	int n;
//	int x, y;
//
//	scanf_s("%d %d %d", &n, &x, &y);
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
//			printf("%d\n", y);
//			return 0;
//		}
//		color[y] = true;
//		y = parent[y];
//	}
//
//
//
//}