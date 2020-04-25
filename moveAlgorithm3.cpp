//#include<cstdio>
//using namespace std;
//
//
//
//
//int n, m, k, t;
//int y[110], x[110], d[110];
//
//int data[110][110][110] = { 0, };
//int num[110][110] = { 0, };
//
//
//
//int main() {
//
//
//	scanf_s("%d %d %d %d", &n, &m, &k, &t);
//
//
//
//
//	for (int i = 1; i <= k; i++) {
//		int yy, xx, dd;
//
//		//for(int j=1;j<=t;j++)  한칸씩기준
//		scanf_s("%d %d %d", &yy, &xx, &dd);
//
//
//		if (dd == 0) { // 상
//			t = t % (n * 2 - 2);
//		}
//		else if (dd == 1) { // 하
//			t = t % (n * 2 - 2);
//		}
//		else if (dd == 2) { // 좌
//			t = t % (m * 2 - 2);
//		}
//		else {  //우
//			t = t % (m * 2 - 2);
//		}
//		y[i] = yy;
//		x[i] = xx;
//		d[i] = dd;
//
//		if (num[yy][xx] >= 1) {
//			num[yy][xx]++;
//		}
//		else {
//			num[yy][xx] = 1;
//		}
//
//		
//		data[yy][xx][i] = num[yy][xx];
//		//높이의미
//
//	}
//
//
//	for (int iii = 1; iii <= t; iii++) {
//
//		for (int i = 1; i <= k; i++) {
//			if (d[i] == 0) { // 상
//				int high = data[y[i]][x[i]][i];
//				int tmp2 = num[y[i]][x[i]]; //현재있는곳에 갯수
//
//				int firstX = x[i];
//				int firstY = y[i];
//
//				int secondX = firstX;
//				int secondY = firstY;
//
//
//
//				int tmp = 0; //이동할 위치에 갯수
//				if (firstY - 1 <= 0) {
//					tmp = num[2][x[i]];
//				}
//				else {
//					tmp = num[firstY-1][firstX];
//	
//				}
//
//				//다 이동시킴
//				for (int ii = high; ii <= tmp2; ii++) {
//					for (int jjj = 1; jjj <= k; jjj++) {
//						if (data[firstY][firstX][jjj] == ii) {  // iii가 그 k번째애임
//							if (y[jjj] - 1 <= 0) {
//								y[jjj] = 2;
//								d[jjj] = 1;
//							}
//							else {
//								y[jjj] -= 1;
//							}
//							secondY = y[jjj];
//							data[y[jjj]][x[i]][jjj] = ++tmp;
//						}
//					}
//				}
//
//				
//				if (tmp2 == high) {
//					num[firstY][firstX] -= 1;
//					num[secondY][secondX] += 1;
//				}
//				else {
//					num[firstY][firstX] -= ((tmp2 - high) + 1);
//					num[secondY][secondX] += ((tmp2 - high) + 1);
//
//				}
//			}
//			else if (d[i] == 1) { // 하
//				int high = data[y[i]][x[i]][i];
//				int tmp2 = num[y[i]][x[i]]; //현재있는곳에 갯수
//
//				//그 i값 즉 k번째 애들 high 부터 tmp
//				//알아내고 data[y[그번째]][] 도 =y[i]
//
//				//예를들어 k 2 3  인걸알아냄
//
//				int firstX = x[i];
//				int firstY = y[i];
//
//				int secondX = firstX;
//				int secondY = firstY;
//
//				int tmp = num[y[i]][x[i]]; //이동할 위치에 갯수
//
//				if (firstY + 1 >= n+1) {
//					tmp = num[n-1][firstX];
//				}
//				else {
//					tmp = num[firstY +1][firstX];
//
//				}
//
//				//다 이동시킴
//				for (int ii = high; ii <= tmp2; ii++) {
//					for (int jjj = 1; jjj <= k; jjj++) {
//						if (data[firstY][firstX][jjj] == ii) {  // iii가 그 k번째애임
//							if (y[jjj] + 1 >= n + 1) {
//								y[jjj] = n - 1;
//								d[jjj] = 0;
//							}
//							else {
//								y[jjj] += 1;
//							}
//							secondY = y[jjj];
//							data[y[jjj]][x[i]][jjj] = ++tmp;
//							break;
//						}
//					}
//				}	
//				if (tmp2 == high) {
//					num[firstY][firstX] -= 1;
//					num[secondY][secondX] += 1;
//				}
//				else {
//					num[firstY][firstX] -= ((tmp2 - high)+1);
//					num[secondY][secondX] += ((tmp2 - high)+1);
//				
//				}
//			}
//			else if (d[i] == 2) { // 좌
//
//				//이동전에 자기보다 위층에 애들이 있나보기
//				// 얘의 높이를 찾아야함 높이부터 맨윗까지
//				int high = data[y[i]][x[i]][i];
//
//				int tmp2 = num[y[i]][x[i]]; //현재있는곳에 갯수
//
//				//얘포함해서 얘 위에있는애들 번수도 알아야함
//
//				//high부터 tmp2까지 가치움직임
//
//				//첫 위치
//
//				int firstX = x[i];
//				int firstY = y[i];
//
//				int secondX = firstX;
//				int secondY = firstY;
//
//				int tmp = num[y[i]][x[i]]; //이동할 위치에 갯수
//				
//				if (firstX - 1 <= 0) {
//					tmp = num[firstY][2];
//				}
//				else {
//					tmp = num[firstY][firstX-1];
//
//				}
//
//				//다 이동시킴
//				for (int ii = high; ii <= tmp2; ii++) {
//					for (int jjj = 1; jjj <= k; jjj++) {
//						if (data[firstY][firstX][jjj] == ii) {  // iii가 그 k번째애임
//							if (x[jjj] - 1 <= 0) {
//								x[jjj] = 2;
//								d[jjj] = 3;
//							}
//							else {
//								x[jjj] -= 1;
//							}
//							secondX = x[jjj];
//							data[y[i]][x[jjj]][jjj] = ++tmp;
//						}
//					}
//				}
//				if (tmp2 == high) {
//					num[firstY][firstX] -= 1;
//					num[secondY][secondX] += 1;
//				}
//				else {
//					num[firstY][firstX] -= ((tmp2 - high) + 1);
//					num[secondY][secondX] += ((tmp2 - high) + 1);
//
//				}
//			}
//			else if (d[i] == 3) {  //우
//				int high = data[y[i]][x[i]][i];
//				int tmp2 = num[y[i]][x[i]]; //현재있는곳에 갯수
//
//				//얘포함해서 얘 위에있는애들 번수도 알아야함
//
//				//high부터 tmp2까지 가치움직임
//
//				//첫 위치
//				int firstX = x[i];
//				int firstY = y[i];
//				int secondX = firstX;
//				int secondY = firstY;
//
//				int tmp = 0; //이동할 위치에 갯수
//
//				if (firstX + 1 >= m+1) {
//					tmp = num[firstY][m-1];
//				}
//				else {
//					tmp = num[firstY][firstX + 1];
//
//				}
//
//				//다 이동시킴
//				for (int ii = high; ii <= tmp2; ii++) {
//					for (int jjj = 1; jjj <= k; jjj++) {
//						if (data[firstY][firstX][jjj] == ii) {  // iii가 그 k번째애임
//
//							if (x[jjj] + 1 >= m + 1) {
//								x[jjj] = m - 1;
//								d[jjj] = 2;
//							}
//							else {
//								x[jjj] += 1;
//							}
//							secondX = x[jjj];
//							data[y[i]][x[jjj]][jjj] = ++tmp;
//						}
//					}
//				}
//				if (tmp2 == high) {
//					num[firstY][firstX] -= 1;
//					num[secondY][secondX] += 1;
//				}
//				else {
//					num[firstY][firstX] -= ((tmp2 - high) + 1);
//					num[secondY][secondX] += ((tmp2 - high) + 1);
//
//				}
//			}
//
//
//			
//		}
//	
//	
//	}
//
//	for (int i = 1; i <= k; i++) {
//		printf("%d %d\n", y[i], x[i]);
//	}
//	
//
//	
//}
//
////3 3 3 3
////3 2 2
////3 2 2
////2 3 1
////
////
////2 2
////2 2
////1 3
//
