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
//
//struct dataSet {
//	int x;
//	int y;
//	int cnt;
//	char value;
//};
//
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
//int lastX, lastY;
//
//int r, c;
//
//char dataa[200][200];
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
//
//			}
//			
//			if (dataa[i][j] == 'D') {
//				lastX = i;
//				lastY = j;
//			}
//		}
//	}
//
//	while (!myQue.empty()) {
//	
//		dataSet cur = myQue.front();
//		myQue.pop();
//		printf("\n cur :  %d %d %c \n", cur.x, cur.y,dataa[cur.x][cur.y]);
//
//		if (dataa[cur.x][cur.y] == 'S') {	
//
//		//	printf("\n cur :  %d %d\n", cur.x, cur.y);
//
//
//			for (int ii = 0; ii < 4; ii++) {
//			
//			/*	if (cur.x == 3 && cur.y == 1) {
//					printf("\nggd\n");
//
//					for (int i = 1; i <= r; i++) {
//						for (int j = 1; j <= c; j++) {
//							printf("%c ", dataa[i][j]);
//						}
//						printf("\n");
//					}
//				}*/
//				int xx = cur.x + dx[ii];
//				int yy = cur.y + dy[ii];
//
//				if (dataa[xx][yy] == '.') {
//					printf("sss\n");
//					dataSet tmp;
//					tmp.x = xx;
//					tmp.y = yy;
//					tmp.cnt = cur.cnt + 1;
//				//	tmp.value = 'S';
//					dataa[xx][yy] = 'S';
//					myQue.push(tmp);  //한번더 체킹
//
//					printf("\ss\n");
//
//					for (int i = 1; i <= r; i++) {
//						for (int j = 1; j <= c; j++) {
//							printf("%c ", dataa[i][j]);
//						}
//						printf("\n");
//					}
//
//					//printf("\n tmp :  %d %d\n", tmp.x, tmp.y);
//
//					for (int iii = 0; iii < 4; iii++) {
//
//						int xxx = tmp.x + dx[iii];
//						int yyy = tmp.y + dy[iii];
//						if (dataa[xxx][yyy] == 'D') {
//							printf("AAAAAAAA%d", tmp.cnt + 1);
//							return;
//						}
//					}
//
//
//
//				}
//				else if (dataa[xx][yy] == 'D') {		
//					printf("AAAAAAAA%d", cur.cnt + 1);
//					return;
//				}
//			}
//		}
//		else if (dataa[cur.x][cur.y] == '*') {
//			for (int ii = 0; ii < 4; ii++) {
//
//				int xx = cur.x + dx[ii];
//				int yy = cur.y + dy[ii];
//
//				if (dataa[xx][yy] == '.' || dataa[xx][yy] == 'S') {
//
//					printf("ddd\n");
//					dataSet tmp;
//					tmp.x = xx;
//					tmp.y = yy;
//					tmp.cnt = cur.cnt + 1;
//				//	tmp.value = '*';
//
//					dataa[xx][yy] = '*';
//					myQue.push(tmp);
//					printf("\dd\n");
//
//					for (int i = 1; i <= r; i++) {
//						for (int j = 1; j <= c; j++) {
//							printf("%c ", dataa[i][j]);
//						}
//						printf("\n");
//					}
//				}
//			}
//		}
//		else if (dataa[cur.x][cur.y] == 'D') {
//			printf("%d", cur.cnt + 1);
//			return;
//
//		}
//	}
//
//	int lastCnt = 0;
//	//Q 다돌고 걔위치확인
//	for (int ii = 0; ii < 4; ii++) {
//
//
//		
//		int xx = lastX +dx[ii];
//		int yy = lastY + dy[ii];
//		
//
//		if (dataa[xx][yy] == '*' || dataa[xx][yy] == '\0' || dataa[xx][yy] == 'X') {
//			lastCnt++;
//		}
//	}
//
//	if (lastCnt == 4) {
//		printf("KAKTUS");
//		printf("\n %d %d \n", lastX, lastY);
//		return;
//	}
//
//
//
//	
//	
//
//
//
//}
//
//
//
//int main() {
//
//	scanf_s("%d %d",&r,&c);
//
//
//	for (int i = 1; i <= r; i++) {
//		for (int j = 1; j <= c; j++) {
//			scanf_s(" %c",&dataa[i][j]);
//		}
//	}
//
//
//	/*
//
//	for (int i = 1; i <= r; i++) {
//		for (int j = 1; j <= c; j++) {
//			printf("%c ",dataa[i][j]);
//		}
//		printf("\n");
//	}*/
//
//	bfs();
//
//
//}