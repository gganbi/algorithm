//#include<cstdio>
//#include<vector>
//using namespace std;
//
//vector<int> myGrape[1000];
//
//bool visit[1000];
//
//
//int n, m;
//int countt = -1;
//
//void dfs(int x) {
//
//	visit[x] = true;
//	//printf("%d\n", x);
//	countt++;
//
//	for (int i = 0; i < myGrape[x].size(); i++) {	
//		int tmp = myGrape[x][i];
//		if (visit[tmp] ==false) {
//			dfs(tmp);
//		}
//	}
//
//}
//
//
//int main() {
//	
//	scanf_s("%d %d", &n, &m);
//	for (int i = 1; i <= m; i++) {
//		int a, b;
//		scanf_s("%d %d", &a, &b);
//		
//		myGrape[a].push_back(b);
//		myGrape[b].push_back(a);
//	}
//
//
//
//	dfs(1);
//
//	printf("%d", countt);
//
//
//}