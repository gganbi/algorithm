//#include<cstdio>
//using namespace std;
//
//int n, m, q;
//
//
//int t, y, x, w;
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
//			scanf_s("%d %d %d", &y, &x, &w);
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
//				data[y][x][cnt++] = w;
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
//				for (int i = cnt-1; i>=1; i--) {
//					data[y][x][i + 1] = data[y][x][i];
//				}
//				data[y][x][1] = w;
//			}
//
//		}
//		else {
//			scanf_s("%d %d", &y, &x);
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
//			if (t == 3) {
//				//cnt-1 이 최고차항
//				data[y][x][cnt - 1] = 0;
//			}
//			else {
//		
//				printf("%d\n", data[y][x][cnt - 1]);
//			
//			}
//		}
//		
//	}
//}