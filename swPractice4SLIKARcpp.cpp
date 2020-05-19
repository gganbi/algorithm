//#include<cstdio>
//#include<queue>
//#include<algorithm>
//#include<string.h>
//#include<stdlib.h>
//
//
//using namespace std;
//
//bool waterCheck[101][101] = { false, };
//bool gosmCheck[101][101] = { false, };
//
//
//int first = 1;
//struct dataSet {
//	int x;
//	int y;
//	int cnt;
//	char value;
//
//	char priorValue; 
//};
//
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
//int lastX, lastY;
//
//int r, c;
//
//char dataa[55][55];
//
//
//
//void bfs() {
//
//	queue<dataSet> myQue;
//
//
//	for (int i = 1; i <= r; i++) {
//		for (int j = 1; j <= c; j++) {
//			if (dataa[i][j] == '*' || dataa[i][j] == 'S') {
//				dataSet tt;
//				tt.x = i;
//				tt.y = j;
//				tt.cnt = 0;
//				tt.value = dataa[i][j];
//				myQue.push(tt);
//			}
//		}
//	}
//
//	while (!myQue.empty()) {
//
//		dataSet cur = myQue.front();
//		myQue.pop();
//		for (int i = 0; i < 4; i++) {
//			int xx = cur.x + dx[i];
//			int yy = cur.y + dy[i];
//
//			if ((xx >= 1 && xx <= r) && (yy >= 1 && yy <= c)) {
//				/*	dataSet next;
//					next.x = xx;
//					next.y = yy;
//					next.cnt = cur.cnt + 1;*/
//				if (cur.value == 'S') { //priorValue도 따져주기
//					if (dataa[xx][yy] == '.') {
//						dataSet next;
//						next.x = xx;
//						next.y = yy;
//						next.cnt = cur.cnt + 1;
//						next.value = 'S';
//						dataa[xx][yy] = 'S';
//						myQue.push(next);
//
//						/*printf("고슴 : \n");
//						for (int iiii = 1; iiii <= r; iiii++) {
//							for (int jjjj = 1; jjjj <= c; jjjj++) {
//								printf("%c ", dataa[iiii][jjjj]);
//							}printf("\n");
//						}*/
//					}
//					else if (dataa[xx][yy] == 'D') {
//						printf("%d", cur.cnt + 1);
//						return;
//					}
//				}
//				else { // * 인경우
//					if (dataa[xx][yy] == '.' || dataa[xx][yy] == '*') {
//
//						dataSet next;
//						next.x = xx;
//						next.y = yy;
//						next.cnt = cur.cnt + 1;
//						next.value = '*';
//						dataa[xx][yy] = '*';
//						myQue.push(next);
//
//						/*printf(" 물 : \n");
//						for (int iiii = 1; iiii <= r; iiii++) {
//							for (int jjjj = 1; jjjj <= c; jjjj++) {
//								printf("%c ", dataa[iiii][jjjj]);
//							}printf("\n");
//						}*/
//
//						int tmpCnt = 0;
//						for (int jj = 0; jj < 4; jj++) {
//							int xxx = lastX + dx[jj];
//							int yyy = lastY + dy[jj];
//							/*	if (dataa[xxx][yyy] == '*' || dataa[xxx][yyy] == 'X' || dataa[xxx][yyy] == '\0') {
//									tmpCnt++;
//									printf("asdfs %d \n", tmpCnt);
//								}*/
//
//
//							if ((xxx >= 0 && xxx <= r + 1) && (yyy >= 0 && yyy <= c + 1)) {
//								if (dataa[xxx][yyy] == '*' || dataa[xxx][yyy] == 'X' || dataa[xxx][yyy] == '\0') {
//									tmpCnt++;
//									//	printf("as%d \n",tmpCnt);
//								}
//							}
//						}
//
//						if (tmpCnt == 4) {
//							printf("KAKTUS");
//							return;
//						}
//					}
//				}
//			}
//		}
//		if (cur.value == 'S') {
//			dataa[cur.x][cur.y] = '.';
//		}
//
//		printf("ddddddd");
//	}
//}
//
//
//
//int main() {
//
//	scanf_s("%d %d", &r, &c);
//
//	for (int i = 1; i <= r; i++) {
//		for (int j = 1; j <= c; j++) {
//
//			scanf_s(" %c", &dataa[i][j]);
//			if (dataa[i][j] == 'D') {
//				lastX = i;
//				lastY = j;
//			}
//
//		}
//	}
//
//
//
//	bfs();
//
//
//
//}