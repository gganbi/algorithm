//#include<stdio.h>
//
//int main() {
//
//	int n, m;
//	scanf_s("%d %d", &n, &m);
//
//	int x, y;
//
//	int data[120][120];
//
//	
//
//	scanf_s("%d %d", &x, &y);
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			scanf_s("%d",&data[i][j]);
//		}
//	}
//
//	int cnt = 0;
//	if (data[x][y] == 1) {
//		printf("game over");
//	}
//	else {
//		if (data[x - 1][y] == 1) {
//			cnt++;
//		}
//		
//		if (data[x + 1][y] == 1) {
//			cnt ++ ;
//		}
//		
//		if (data[x ][y+1] == 1) {
//			cnt++;
//		}
//		
//		if (data[x ][y-1] == 1) {
//			cnt++;
//		}
//		
//		if (data[x + 1][y+1] == 1) {
//			cnt++;
//		}
//		
//		if (data[x + 1][y-1] == 1) {
//			cnt++;
//		}
//	
//		if (data[x - 1][y+1] == 1) {
//			cnt++;
//		}
//		
//		if (data[x - 1][y-1] == 1) {
//			cnt++;
//		}
//
//		printf("%d", cnt);
//	}
//
//	return 0;
//}