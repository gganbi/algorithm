//#include <stdio.h>
//
//int main() {
//
//	int n, m,q;
//	int data[200][200];
//
//
//	int aa[1001] = {0,};
//	int bb[1001] = {0,};
//
//
//
//	scanf_s("%d %d %d",&n,&m,&q);
//
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			scanf_s("%d", &data[i][j]);
//		}
//	}
//
//	for (int i = 1; i <= q; i++) {
//		scanf_s("%d %d",&aa[i], &bb[i]);
//	}
//
//	//int y, x, d, r;
//
//	//scanf_s("%d %d %d %d", &y, &x, &d, &r);
//
//	//for (int i = 0; i <= n + 1; i++) {
//	//	data[i][0] = -1;
//	//	data[i][m + 1] = -1;
//	//}
//
//	//for (int i = 0; i <= m + 1; i++) {
//	//	data[0][i] = -1;
//	//	data[n + 1][i] = -1;
//
//	//}
//
//
//
//	//y += 1;
//	//x += 1;
//
//	//bool tmp = false;
//	//if (d == 0) {
//
//
//	//	for (int i = 1; i <= r; i++) {
//	//		if (data[y][x +i] == -1) {
//	//			printf("%d", data[y][x + i - 1]);
//	//			tmp = true;
//	//			break;
//	//		}
//	//	}
//	//	if (tmp == false) {
//	//		printf("%d", data[y][x + r]);
//	//	}
//	//
//	//}
//	//else if (d == 1) {
//	//	for (int i = 1; i <= r; i++) {
//	//		if (data[y][x - i] == -1) {
//	//			printf("%d", data[y][x - i + 1]);
//	//			tmp = true;
//	//			break;
//	//		}
//	//	}
//	//	if (tmp == false) {
//	//		printf("%d", data[y][x - r]);
//	//	}
//
//	//	//printf("%d", data[y][x - r]);
//	//}
//	//else if (d == 2) {
//
//	//	for (int i = 1; i <= r; i++) {
//	//		if (data[y + i][x] == -1) {
//	//			printf("%d", data[y + i - 1][x]);
//	//			tmp = true;
//	//			break;
//	//		}
//	//	}
//	//	if (tmp == false) {
//	//		printf("%d", data[y + r][x]);
//	//	}
//	//	//printf("%d", data[y+r][x]);
//	//}
//	//else {
//	//	for (int i = 1; i <= r; i++) {
//	//		if (data[y - i][x] == -1) {
//	//			printf("%d", data[y - i + 1][x]);
//	//			tmp = true;
//	//			break;
//	//		}
//	//	}
//	//	if (tmp == false) {
//	//		printf("%d", data[y - r][x]);
//	//	}
//	//	}
//
//	return 0;
//}
//
