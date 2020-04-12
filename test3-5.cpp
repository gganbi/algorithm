//#include<cstdio>
//using namespace std;
//
//int n, m, q;
//
//
//int t, y, x, w,c;
//
//int data[120][120][30] = { 0, };
//int main() {
//	scanf_s("%d %d %d", &n, &m, &q);
//
//
//	for (int i = 1; i <= q; i++) {
//		scanf_s("%d",&t);
//		
//		if (t == 1 || t == 2) {
//			scanf_s("%d %d %d %d", &y, &x, &w,&c);
//
//			int cnt = 1;
//
//			if (t == 1) {
//				
//				while (true) {
//					if (data[y][x][cnt] != 0) {
//						cnt++;
//					}
//					else {
//						data[y][x][cnt] = w;
//						break;
//					}
//				}
//				for (int m = 1; m <= c; m++) {
//					data[y][x][cnt++] = w;
//				}
//
//			}
//			else {
//				while (true) {
//					if (data[y][x][cnt] != 0) {
//						cnt++;
//					}
//					else {
//						break;
//					}
//				}
//				//cnt최고항 즉 넣어야될항, cnt-1까지 차있음
//				
//				for (int m = cnt-1; m>=1; m--) {  
//					data[y][x][m + c] = data[y][x][m];
//				}
//				
//				for (int m = 1; m <= c; m++) {
//					data[y][x][m] = w;
//				}
//			}
//
//		}
//		else {
//
//			if (t == 3) {
//				scanf_s("%d %d %d", &y, &x,&c);
//			}
//			else {
//				scanf_s("%d %d", &y, &x);
//			}
//			
//
//			int cnt = 1;
//			while (true) {
//				if (data[y][x][cnt] != 0) {
//					cnt++;
//				}
//				else {
//					break;
//				}
//			}
//
//			
//			if (t == 3) {
//				//cnt-1 이 최고차항
//
//
//				for (int m = 1; m <= c; m++) {
//					data[y][x][cnt - 1] = 0;
//					cnt--;
//				}
//				
//			}
//			else {
//				printf("%d\n", data[y][x][cnt-1]);
//			}
//			
//			
//		}
//		
//	}
//}