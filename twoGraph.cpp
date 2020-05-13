//#include <cstdio>
//#include<queue>
//#include<vector>
//
//using namespace std;
//
//int n, m;
//
//vector<int> dataa[1010];
//
//int color[1010];
//bool check[1010];
//
//
//void bfs() {
//
//	queue<int> map;
//	map.push(1);
//	color[1] = 1;
//
//	while (!map.empty()) {
//	
//		int cur = map.front();
//		check[cur] = true;
//		
//		map.pop();
//
//		for (int i = 0; i < dataa[cur].size(); i++) {
//
//			int next = dataa[cur][i];
//
//			if (check[next] == false) {
//				if (color[cur] == 1) {
//					color[next] = 2;
//				}
//				else if (color[cur] == 2) {
//					color[next] = 1;
//				}
//				map.push(next);
//			}
//			else {
//				if (color[cur] == color[next]) {
//					printf("NO");
//					return;
//				}
//
//			}
//		}
//	}
//	printf("YES");
//
//}
//
//
//int main() {
//
//
//	scanf_s("%d %d", &n, &m);
//
//	for (int i = 1; i <= m; i++) {
//		int a, b;
//		scanf_s("%d %d", &a, &b);
//
//		dataa[a].push_back(b);
//		dataa[b].push_back(a);
//	
//	}
//
//	bfs();
//
//
//}
//
//
//
//
