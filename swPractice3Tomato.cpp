//#include<cstdio>
//#include <stack>
//#include <queue>
//
//using namespace std;
//
//
//int b[110][110][110] = { 0, };
//int a[110][110][110] = { 0, };
//int n, m, h;
//int dx[6] = { -1,1,0,0,0,0 };
//int dy[6] = { 0,0,-1,1,0,0 };
//int dz[6] = { 0,0,0,0,1,-1 };
//
//int cnt = 0;
//
//int impossible = 1;
//int main() {
//
//
//	
//
//	scanf_s("%d %d %d", &m,&n,&h);
//
//	bool first = false;
//	for (int ii = 1; ii <= h; ii++) {
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= m; j++) {
//				scanf_s("%d",&b[i][j][ii]);
//				if (b[i][j][ii] == 0) {
//					first = true;
//					b[i][j][ii] = 100;
//				}
//				a[i][j][ii] = b[i][j][ii];
//			}
//		}
//	}
//
//	if (first == false) {  //첫처장케이스 처리함
//
//		printf("0");
//		return 0;
//	}
//
//	//여기서부터 와일문시작
//
//	while (true) {
//
//		cnt++;
//		bool flag = false;
//
//		for (int ii = 1; ii <= h; ii++) {
//			for (int i = 1; i <= n; i++) {
//				for (int j = 1; j <= m; j++) {
//					if (b[i][j][ii] == 1) {
//						//for (int jj = 0; jj < 6; jj++) {
//							int x = i + dx[0];
//							int y = j + dy[0];
//							int z = ii + dz[0];
//							if (b[x][y][z] == 100) {
//								a[x][y][z] = 1;
//								flag = true;
//							}
//							 x = i + dx[1];
//							 y = j + dy[1];
//							 z = ii + dz[1];
//							if (b[x][y][z] == 100) {
//								a[x][y][z] = 1;
//								flag = true;
//							}
//							x = i + dx[2];
//							y = j + dy[2];
//							z = ii + dz[2];
//							if (b[x][y][z] == 100) {
//								a[x][y][z] = 1;
//								flag = true;
//							}
//							x = i + dx[3];
//							y = j + dy[3];
//							z = ii + dz[3];
//							if (b[x][y][z] == 100) {
//								a[x][y][z] = 1;
//								flag = true;
//							}
//							x = i + dx[4];
//							y = j + dy[4];
//							z = ii + dz[4];
//							if (b[x][y][z] == 100) {
//								a[x][y][z] = 1;
//								flag = true;
//							}
//							x = i + dx[5];
//							y = j + dy[5];
//							z = ii + dz[5];
//							if (b[x][y][z] == 100) {
//								a[x][y][z] = 1;
//								flag = true;
//							}
//						
//						//}
//					}
//				}
//			}
//		}
//
//		int cntt = 0;
//		for (int ii = 1; ii <= h; ii++) {
//			for (int i = 1; i <= n; i++) {
//				for (int j = 1; j <= m; j++) {
//					b[i][j][ii] = a[i][j][ii];
//
//					if (a[i][j][ii] == 1) {
//						cntt++;
//					}
//				}
//			}
//		}
//
//	/*		printf("\n");
//		for (int ii = 1; ii <= h; ii++) {
//			for (int i = 1; i <= n; i++) {
//				for (int j = 1; j <= m; j++) {
//					printf("%d ", a[i][j][ii]);
//				}
//				printf("\n");
//			}
//			printf("\n");
//		}*/
//
//		
//	    if (flag == false) { //나머지항부터 한번도 안바겻을때
//			impossible = 3;
//		//	printf("222222\n");
//			break;
//		}
//
//		if (cntt == h * n * m) {
//			impossible = 1;
//		//	printf("3333333\n");
//			break;
//		}
//	}
//	
//
//
//    if (impossible == 3) {
//		printf("-1");
//	
//	}
//	else {
//		printf("%d", cnt);
//	}
//
//	//printf("\n");
//	//for (int ii = 1; ii <= h; ii++) {
//	//	for (int i = 1; i <= n; i++) {
//	//		for (int j = 1; j <= m; j++) {
//	//			printf("%d ", a[i][j][ii]);
//	//		}
//	//		printf("\n");
//	//	}
//	//	printf("\n");
//	//}
//
//	//printf("\n");
//
//	//닿지않는곳 체킹
//	//1 변환후 그 전에위치와 그 다음 후에 하나도 안바뀔때
//}