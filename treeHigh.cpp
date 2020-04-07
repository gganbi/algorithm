//#include<cstdio>
//#include<vector>
//
//
//using namespace std;
//
//const int max = 100;
//int n, r; //정점 간선
//vector <int> myGrapgh[max];
//bool visited[max];
//
//int cnt[100];
//
//
//void dfs(int x) {
//	visited[x] = true;
//
//	cnt[x]++;
//
//	if (x == r) {
//	
//		return;
//	}
//
//	
//	
//	//printf("%d\n", x);
//	for (int i = 0; i < myGrapgh[x].size(); i++) {
//		int y = myGrapgh[x][i];
//		//x와 y가 연결됨
//		if (visited[y] == false) {
//			
//		
//				dfs(y);
//			
//
//			
//		}
//	}
//
//}
//int main() {
//	
//	scanf_s("%d %d", &n, &r);
//	
//	for (int i = 0; i < n-1; i++) {
//		int a, b;
//		scanf_s("%d %d", &a, &b);
//
//		myGrapgh[a].push_back(b);
//		myGrapgh[b].push_back(a);
//	}
//
//	for (int i = 0; i <= n; i++) {
//		dfs(i);
//	}
//	
//
//}