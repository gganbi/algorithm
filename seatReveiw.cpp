//#include<cstdio>
//
//
//int n, m, k;
//
//int dataa[1010][1010];
//int cnt = 1;
//int main() {
//
//	scanf_s("%d %d &d", &n, &m, &k);
//
//
//	int startX = 1, startY = 1;
//	int tmpX = 1, tmpY = 1;
//	for (int i = startX; i <= m; i++) {
//		if (dataa[startX][startY + i - 1] == 0) {
//			dataa[startX][startY + i - 1] = cnt;
//			tmpX = startX;
//			tmpY = startY + i - 1;
//			cnt++;
//		}
//
//	}
//	startX = tmpX;
//	startY = tmpY;
//
//	for (int i = startY; i <= n; i++) {
//		if (dataa[startX + i - 1][startY] == 0) {
//			dataa[startX + i - 1][startY] = cnt;
//			tmpX = startX + i - 1;
//			tmpY = startY;
//			cnt++;
//		}
//	}
//	startX = tmpX;
//	startY = tmpY;
//
//
//	for (int i = startX; i <= m; i++) {
//		if (dataa[startX][startY - i + 1] == 0) {
//			dataa[startX][startY - i + 1] = cnt;
//			tmpX = startX;
//			tmpY = startY - i + 1;
//			cnt++;
//		}
//
//	}
//	startX = tmpX;
//	startY = tmpY;
//
//
//	for (int i = startY; i <= n; i++) {
//		if (dataa[startX - i + 1][startY] == 0) {
//			dataa[startX - i + 1][startY] = cnt;
//			tmpX = startX - i + 1;
//			tmpY = startY;
//			cnt++;
//		//}
//
//	}
//	startX = tmpX;
//	startY = tmpY;
//
//
//}