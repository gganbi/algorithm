//#include<cstdio>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//
//int n,x,y; //정점 간선
//vector <int> myGrapgh[1001];
//bool visited[1001];
//
//int cnt[1001];
//
//struct dataSet {
//
//	int x;
//	int cnt;
//
//};
//
//
//int maxx = 0;
//
//void dfs(int x) {
//	visited[x] = true;
//	queue<dataSet> aa;
//	dataSet dd;
//
//	dd.x = x;
//	dd.cnt = 0;
//	aa.push(dd);
//
//	while (!aa.empty()) {
//	
//		dataSet cur = aa.front();
//		aa.pop();
//
//		for (int i = 0; i < myGrapgh[cur.x].size(); i++) {
//		
//			int xx = myGrapgh[cur.x][i];
//
//			if (visited[xx] == false) {
//				visited[xx] = true;
//				dataSet aaa;
//				aaa.x = xx;
//				aaa.cnt = cur.cnt + 1;
//
//				if (aaa.x == y) {
//					maxx = aaa.cnt;
//				}
//
//				aa.push(aaa);
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
//int main() {
//
//	scanf_s("%d %d %d", &n, &x,&y);
//
//	for (int i = 0; i < n-1 ; i++) {
//		int a, b;
//		scanf_s("%d %d", &a, &b);
//
//		myGrapgh[a].push_back(b);
//		myGrapgh[b].push_back(a);
//	}
//
//	dfs(x);
//
//	printf("%d", maxx);
//
//
//}