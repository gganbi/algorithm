//#include <cstdio>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//
//int n, m;	
//
//vector<int> dataa[10010];
//
//
//bool check[10010];
//int color[10010];
//
//
//bool lastCheck = false;
//void bfs() {
//
//	queue<int> quee;
//
//	quee.push(0);
//	check[0] = true;
//	color[0] = 3;
//	
//
//	while (!quee.empty()) {
//	
//		int cur = quee.front();
//
//		quee.pop();
//
//		for (int i = 0; i < dataa[cur].size(); i++) {
//			int tt = dataa[cur][i];
//
//			if (check[tt] == false) {
//			
//				check[tt] = true;
//				if (color[cur] == 3) {
//					color[tt] = 5;
//				}
//				else {
//					color[tt] = 3;
//				}
//				quee.push(tt);
//			}
//			else {
//
//				if (color[cur] == color[tt]) {
//					lastCheck = true;
//					break;
//				}
//			
//			}
//		}
//	}
//
//}
//
//int main() {
//
//	scanf_s("%d %d", &n, &m);
//	for (int i = 1; i <= m; i++) {
//	
//		int a, b;
//		scanf_s("%d %d", &a, &b);
//		dataa[a].push_back(b);
//		dataa[b].push_back(a);
//	}
//	bfs();
//
//	/*for (int i = 0; i <= n-1; i++) {
//
//		printf("%d ", color[i]);
//	}*/
//	if (lastCheck == true) {
//		printf("NO");
//	}
//	else {
//		printf("YES");
//	}
//
//
//	//printf("%d", dataa[0][3]);
//
//
//}