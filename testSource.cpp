//#include<cstdio>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//int n, m;
//
//
//bool checkD[1100] = {false,};
//bool checkB[1100]={false, };
//vector <int > ddf[1100];
//vector <int > bbf[1100];
//
//
//void bfs() {
//	queue<int> Que; 
//	checkB[0] = true;
//
//	Que.push(0);
//
//	while (!Que.empty()) {
//
//		int cur = Que.front();
//
//		printf("%d ", cur);
//		Que.pop();
//
//		for (int i = 0; i < bbf[cur].size(); i++) {
//			int tt = bbf[cur][i];
//
//			if (checkB[tt] == false) {
//				Que.push(tt);	
//				checkB[tt] = true;
//			}
//		}
//	
//	}
//
//
//}
//
//
//void dfs(int x) {
//	
//	checkD[x] = true;
//
//	printf("%d ", x);
//	for (int i = 0; i < ddf[x].size(); i++) {
//	
//		int cur = ddf[x][i];
//		if (checkD[cur] == false) {	
//			dfs(cur);	
//		}
//	}
//}
//
//int main() {
//
//	scanf_s("%d %d", &n, &m);
//
//	for (int i = 1; i <= m; i++) {
//		int a, b;
//		scanf_s("%d %d", &a, &b);
//		ddf[a].push_back(b);
//		ddf[b].push_back(a);
//
//		bbf[a].push_back(b);
//		bbf[b].push_back(a);
//		
//	}
//
//	for (int i = 0; i < n; i++) {
//		sort(ddf[i].begin(), ddf[i].end());
//		sort(bbf[i].begin(), bbf[i].end());
//	}
//
//
//	dfs(0);
//
//	printf("\n");
//
//	bfs();
//
//
//
//}