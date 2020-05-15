//#include <cstdio>
//#include<queue>
//using namespace std;
//
//
//
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
//int n;
//int datan[120][120] = { 0, };
//
//int x, y, length;
//
//
//struct dataSet {
//	int x;
//	int y;
//	int cnt;
//
//};
//
//
//
//void bfs() {
//	scanf_s("%d %d %d", &x, &y, &length);
//
//	dataSet first;
//	first.x = x;
//	first.y = y;
//	first.cnt = 0;
//
//
//	queue<dataSet> myQue;
//
//	myQue.push(first);
//
//	while (!myQue.empty()) {
//	
//		dataSet cur = myQue.front();
//		myQue.pop();
//
//
//		for (int i = 0; i < 4; i++) {
//		
//			int xx = cur.x + dx[i];
//			int yy = cur.y + dy[i];
//
//			if ((xx >= 1 && xx <= n) && (yy >= 1 && yy <= n) && !(xx==x && yy==y)) {
//			
//				if ((datan[xx][yy] == 0)) {
//					if (datan[cur.x][cur.y] < length) {
//
//						dataSet next;
//						next.x = xx;
//						next.y = yy;
//						next.cnt = cur.cnt + 1;
//						datan[xx][yy] = cur.cnt + 1;
//						myQue.push(next);
//
//					}
//				}
//			}		
//		}
//	}
//}
//int main() {
//
//	scanf_s("%d", &n);
//	bfs();
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//
//			if (i == x & j == y) {
//				printf("x ");
//			}
//			else {
//				printf("%d ", datan[i][j]);
//			}
//			
//		}
//		printf("\n");
//	}
//}