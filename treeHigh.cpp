//#include <stdio.h>
//
//int main() {
//	int parent[1005] = { 0, };
//	int cnt[1005] = { 0, };
//	int n;
//	int r;
//	scanf_s("%d %d", &n, &r);
//
//	parent[r] = 0;
//
//	for (int i = 0; i < n - 1; i++) {
//		int a, b;
//		scanf_s("%d %d", &a, &b);
//
//		parent[b] = a;
//		//b의 위에 a가 있다
//
//	}
//	for (int i = n - 1+r; i >=1+r; i--) {
//		int temp = 0;
//
//		int tmp = i;
//		while (1) {
//
//			temp++;
//			if (tmp == r) break;
//			tmp = parent[tmp];
//		}
//		cnt[i] += temp;
//	
//	}
//	int max = cnt[n - 1 + r];
//	for (int i = n - 1 + r-1; i >= 1+r; i--) {
//
//		if (cnt[i] >= max) {
//			cnt[i] = max;
//		}
//
//	}
//
//	printf("%d", max-1);
//
//
//	
//
//
//}