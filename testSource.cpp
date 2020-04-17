//#include<cstdio>
//#include<vector>
//using namespace std;
//
//int n, m;
//
//vector<int> myGraph[1010];
//
//bool check[1010] = { false, };
//
//void dfs(int x) {
//
//	check[x] = true;
//	printf("%d",x);
//	
//	for (int i = 0; i < myGraph[x].size(); i++) {
//	
//		int cur = myGraph[x][i];
//		
//		if (check[cur] == false) {
//
//			dfs(cur);
//		}
//	}
//
//
//
//}
//int main() {
//
//	scanf_s("%d %d", &n, &m);
//
//	for (int i = 1; i <= m; i++) {
//		int a, b;
//		scanf_s("%d %d", &a, &b);
//
//		myGraph[a].push_back(b);
//		myGraph[b].push_back(a);
//	}
//
//	dfs(0);
//
//}