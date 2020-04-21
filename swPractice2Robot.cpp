//#include<cstdio>
//#include<queue>
//#include <string.h>
//using namespace std;
//
//
//int dataa[110][110];
//
//int n, m;
//
//int firstX, firstY, firstD;
//int lastX, lastY, lastD;
//
//int dx[5] = { 0,0,0,1,-1 };
//int dy[5] = { 0,1,-1,0,0 };
//
//int cnt = 0;
//
//struct dataSet {
//	int x;
//	int y;
//	int d;
//	int cnt;
//};
//
//void queueF() {
//	queue<dataSet> Que;
//
//	dataSet data;
//	data.x = firstX;
//	data.y = firstY;
//	data.d = firstD;
//
//	Que.push(data);
//
//	while (!Que.empty()) {
//
//		dataSet cur = Que.front();
//
//		Que.pop();
//
//
//		for (int i = 1; i <= 4; i++) {
//			//동서남북
//			int x = cur.x + dx[i];
//			int y = cur.y + dy[i];
//			
//			if (dataa[x][y] == 0) {
//
//				dataSet tmp;
//				tmp.x = x;
//				tmp.y = y;
//				tmp.d = i;
//
//				dataa[x][y] = 1;
//				if (cur.d == i) {
//					tmp.cnt = 0;
//				}
//				else {
//					if (cur.d % 2 == i % 2) {//서,북 둘이 같은라인이지만 방향반대일때
//						tmp.cnt = 2;
//					}
//					else
//						tmp.cnt = 1;
//				}
//				tmp.cnt += cur.cnt;
//				Que.push(tmp);
//			}
//			
//			
//			
//		}
//	}
//}
//
//
//int main() {
//
//	scanf_s("%d %d", &n, &m);
//
//	for (int i = 1; i <= n; i++) {
//	
//		for (int j = 1; j <= m; j++) {
//			scanf_s("%d",&dataa[i][j]);
//		}
//	
//	}
//
//	scanf_s("%d %d %d",&firstX,&firstY,&firstD);
//	scanf_s("%d %d %d", &lastX, &lastY, &lastD);
//
//
//}