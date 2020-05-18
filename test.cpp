//#include <cstdio>
//#include<vector>
//#include<queue>
//using namespace std;
//
//
//struct dataSet {
//
//	int x;
//	int y;
//	int cnt;
//	int value;
//
//};
//
//char dataa[20][20] = { 0, };
//int tmp[20][20] = { 0, };
//
//int p[10] = { 0, };
//int s[10] = { 0, };
//
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
//int n, m, k;
//
//void bfs() {
//
//	queue<dataSet> myQue;
//	scanf_s("%d %d %d", &n, &m, &k);
//
//	for (int i = 1; i <= k; i++) {
//		scanf_s("%d %d", &p[i], &s[i]);
//	}
//
//	int customerCnt = 1;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			scanf_s("%c", &dataa[i][j]);
//			if (dataa[i][j] == '1') {
//				dataSet customer;
//				customer.x = i;
//				customer.y = j;
//				customer.cnt = 0;
//				customer.value = customerCnt;
//				tmp[i][j] = customerCnt++;
//				myQue.push(customer);
//			}
//			else if (dataa[i][j] != '0') {
//				tmp[i][j] = 100;
//			}
//		}
//	}
//
//	while (!myQue.empty()) {
//	
//		dataSet cur = myQue.front();
//		myQue.pop();
//
//		for (int i = 0; i < 4; i++) {
//		
//			int xx = cur.x + dx[i];
//			int yy = cur.y + dy[i];
//
//			if ((xx >= 1 && xx <= n) && (yy >= 1 && yy <= m)) {
//				if (tmp[xx][yy] != cur.cnt) {
//					tmp[cur.x][cur.y] = cur.value;
//				}
//			}
//
//		
//		}
//
//	}
//	
//
//
//}
//
//
//int main() {
//
//	bfs();
//
//
//}