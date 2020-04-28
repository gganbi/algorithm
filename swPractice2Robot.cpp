//#include<cstdio>
//#include<queue>
//
//using namespace std;
//
//
//
//int n, m;
//int dataa[110][110];
//int dx[5] = { 0, 0,0,1,-1 };
//int dy[5] = { 0,1,-1,0,0 };
//
//int startX, startY, startD, lastX, lastY, lastD;
//
//
//struct dataSet {
//	int x;
//	int y;
//	int d;
//	int cnt;
//};
//
//
//void bfs() {
//
//	dataSet firstData;
//	firstData.x = startX;
//	firstData.y = startY;
//	firstData.d = startD;
//	firstData.cnt = 0; //이게 어케보면 명령횟수변수
//
//	dataa[startX][startY] = 1;
//
//	queue<dataSet> myQue;
//
//	myQue.push(firstData);
//
//	while (!myQue.empty()) {
//		
//		dataSet cur = myQue.front();
//		myQue.pop();
//
//		for (int i = 1; i <= 4; i++) {
//
//			int xx = cur.x + dx[i];
//			int yy = cur.y + dy[i];
//
//			
//			 첫번째이동
//			dataSet next;
//			if (dataa[xx][yy] == 0) {
//
//
//				해당 위치 왔을때  도착 처리 
//				if (xx == lastX && yy == lastY) {
//
//					int last = cur.cnt;
//					if (cur.d == lastD) {
//					}
//					else {
//						if (cur.d == 1 || cur.d == 2) {
//							if (lastD == 1 || lastD == 2) {
//								last = cur.cnt + 2;
//							}
//							else {
//								last = cur.cnt + 1;
//							}
//						}
//						else {
//							if (lastD == 3 || lastD == 4) {
//								last = cur.cnt + 2;
//							}
//							else {
//								last = cur.cnt + 1;
//							}
//						}
//					}
//					last += 1; //이동시켜준명령
//					printf("%d", last);
//					return;
//				}
//
//
//				
//				next.x = xx;
//				next.y = yy;
//				dataa[xx][yy] = 1;
//				next.d = i;
//
//				if (cur.d == i) {
//					next.cnt = cur.cnt;
//				}
//				else {
//					if (cur.d == 1 || cur.d == 2) {
//						if (i == 2 || i == 1) {
//							next.cnt = cur.cnt + 2;
//						}
//						else {
//							next.cnt = cur.cnt + 1;
//						}
//					}
//					else {
//						if (i == 3 || i == 4) {
//							next.cnt = cur.cnt + 2;
//						}
//						else {
//							next.cnt = cur.cnt + 1;
//						}
//					}
//				}
//				next.cnt += 1; //이동시켜준명령
//
//				myQue.push(next);
//
//				2번째 가능할때
//
//				int xxx = next.x + dx[i];
//				int yyy = next.y + dy[i];
//		
//				dataSet nextTwo;
//				if (dataa[xxx][yyy] == 0) {
//
//
//					해당 위치 왔을때  도착 처리 
//					if (xxx == lastX && yyy == lastY) {
//
//						int last = cur.cnt;
//						if (cur.d == lastD) {
//						}
//						else {
//							if (cur.d == 1 || cur.d == 2) {
//								if (lastD == 3 || lastD == 1) {
//									last = cur.cnt + 2;
//								}
//								else {
//									last = cur.cnt + 1;
//								}
//							}
//							else {
//								if (lastD == 3 || lastD == 4) {
//									last = cur.cnt + 2;
//								}
//								else {
//									last = cur.cnt + 1;
//								}
//							}
//						}
//						last += 1; //이동시켜준명령
//						printf("%d", last);
//						return;
//					}
//
//
//					dataa[xxx][yyy] = 1;
//
//					nextTwo.x = xxx;
//					nextTwo.y = yyy;
//					nextTwo.d = next.d;
//					nextTwo.cnt = next.cnt;
//
//					myQue.push(nextTwo);
//
//
//					3번째 가능할때
//
//					int xxxx = nextTwo.x + dx[i];
//					int yyyy = nextTwo.y + dy[i];
//
//					dataSet nextThree;
//					if (dataa[xxxx][yyyy] == 0) {
//
//						dataa[xxxx][yyyy] = 1;
//
//						해당 위치 왔을때  도착 처리 
//						if (xxxx == lastX && yyyy == lastY) {
//
//							int last = cur.cnt;
//							if (cur.d == lastD) {
//							}
//							else {
//								if (cur.d == 1 || cur.d == 2) {
//									if (lastD == 1 || lastD == 2) {
//										last = cur.cnt + 2;
//									}
//									else {
//										last = cur.cnt + 1;
//									}
//								}
//								else {
//									if (lastD == 3 || lastD == 4) {
//										last = cur.cnt + 2;
//									}
//									else {
//										last = cur.cnt + 1;
//									}
//								}
//							}
//							last += 1; //이동시켜준명령
//							printf("%d", last);
//							return;
//						}
//	
//						nextThree.x = xxx;
//						nextThree.y = yyy;
//						nextThree.d = next.d;
//						nextThree.cnt = nextTwo.cnt;
//						myQue.push(nextThree);
//					}
//				}
//			}
//
//			
//
//			
//		}
//	}
//
//	printf("asdfdf");
//}
//int main() {
//
//	scanf_s("%d %d", &n, &m);
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			scanf_s("%d", &dataa[i][j]);
//		}
//	}
//
//	for (int i = 0; i <= n+1; i++) {
//		dataa[i][0] = -1;
//		dataa[i][m + 1] = -1;
//	}
//	for (int i = 0; i <= m + 1; i++) {
//		dataa[0][i] = -1;
//		dataa[n+1][i] = -1;
//
//	}
//	scanf_s("%d %d %d", &startX, &startY,&startD);
//	scanf_s("%d %d %d", &lastX, &lastY, &lastD);
//
//
//	bfs();
//}