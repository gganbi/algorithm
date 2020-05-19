//#include<cstdio>
//#include<queue>
//
//using namespace std;
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
//	//int priorValue;
//};
//
//bool lastt = false;
//
//
//int lastValue = 9999999;
//int lastValueTwo = 9999999;
//void bfs() {
//	queue<dataSet> myQue;
//	
//	dataSet first;
//	first.x = startX;
//	first.y = startY;
//	first.d = startD;
//	first.cnt = 0;
//
//	myQue.push(first);
//	// 이문제는 전에 돌았던곳막을필요가 구지없다
//	//즉 무한루프 큐 돌더라도 어짜피 최종위치만 닿을때 끝내주면되니까
//	while (!myQue.empty()) {
//	
//		dataSet cur = myQue.front();
//		myQue.pop();
//
//		for (int i = 1; i <= 4; i++) {
//			int length = 0; //닿을수 있는거리
//			for (int ii = 1; ii <= 3; ii++) {
//				int xx = cur.x + dx[i] * ii;
//				int yy = cur.y + dy[i] * ii;
//				if ((xx >= 1 && xx <= n) && (yy >= 1 && yy <= m)) {
//					if (dataa[xx][yy] == 0) {
//						length++;
//					}
//					else {
//						break;
//					}
//				}
//				else {
//					break;
//				}
//			}
//			
//			for (int j = 1; j <= length; j++) {
//				int xx = cur.x + dx[i] * j;
//				int yy = cur.y + dy[i] * j;
//
//				dataSet next;
//				next.x = xx;
//				next.y = yy;
//				next.d = i;
//				//next.cnt = cur.cnt;
//				if (cur.d == i) {
//					next.cnt = cur.cnt;
//				}
//				else {
//					if (cur.d == 1 || cur.d == 2) {
//						if (i == 3 || i == 4) {
//							next.cnt = cur.cnt + 1;
//						}
//						else {
//							next.cnt = cur.cnt + 2;
//						}
//					}
//					else if (cur.d == 3 || cur.d == 4) {
//						if (i == 1 || i == 2) {
//							next.cnt = cur.cnt + 1;
//						}
//						else {
//							next.cnt = cur.cnt + 2;
//						}
//					}
//				}
//
//				next.cnt += 1;  //이동해준거 횟수올리기
//				myQue.push(next);
//
//				//도착위치 체크  //이ㅣ게문젤수도있따 왜냐면 이게 상하좌우순으로 큐에들어가서 실행되야하는데 이건 그게아니라서?
//				if (xx == lastX && yy == lastY) {
//
//					printf("dddddd %d \n", next.d);
//
//					if (lastValueTwo == 9999999) {  //맨처음일때
//						lastValueTwo = next.cnt;
//					}
//
//
//					int temp = next.cnt;
//				
//					if (lastValueTwo == next.cnt) {  //두번이상부터 똑같은 위치온애일때
//						
//						int last = 0;
//
//						if (next.d == lastD) {
//							//printf("%d", next.cnt);
//							last = next.cnt;
//						}
//						else {
//							if (next.d == 1 || next.d == 2) {
//								if (lastD == 3 || lastD == 4) {
//									//printf("%d", next.cnt + 1);
//									last = next.cnt + 1;
//								}
//								else {
//									//printf("%d", next.cnt + 2);
//									last = next.cnt + 2;
//								}
//							}
//							else if (next.d == 3 || next.d == 4) {
//								if (lastD == 1 || lastD == 2) {
//									//printf("%d", next.cnt + 1);
//									last = next.cnt + 1;
//								}
//								else {
//									//printf("%d", next.cnt + 2);
//									last = next.cnt + 2;
//								}
//							}
//						}
//
//						if (lastValue > last) {
//							lastValue = last;
//						}
//					
//					}
//					else {
//					
//						printf("%d", lastValue);
//						return;
//					}
//
//					
//				
//					//return;
//
//				}
//
//
//			}
//				
//				
//		}
//	}
//}
//
//int main() {
//	scanf_s("%d %d", &n, &m);
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			scanf_s("%d", &dataa[i][j]);
//		}
//	}
//	scanf_s("%d %d %d", &startX, &startY, &startD);
//	scanf_s("%d %d %d", &lastX, &lastY, &lastD);
//
//	bfs();
//
//
//}