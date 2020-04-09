//#include<cstdio>
//#include<vector>
//
//
//using namespace std;
//
//
//int n, r; //정점 간선
//vector <int> myGrapgh[100];
//bool visited[100];
//
//int cnt[100];
//
//
//int max=0;
//
//void dfs(int x) {
//	visited[x] = true;
//
//	
//	int temp = 0;
//	for (int i = 0; i < myGrapgh[x].size(); i++) {
//		int y = myGrapgh[x][i];
//		//x와 y가 연결됨
//		if (visited[y] == false) {
//			dfs(y);
//			if (cnt[x] <= cnt[y] + 1) {
//				cnt[x] = cnt[y] + 1;
//			}	
//		}
//		else {
//			temp++;
//
//		}
//	}
//	if (temp == myGrapgh[x].size()) {
//		cnt[x] = 0;
//	}
//	
//	//아무것도 만난점이없는 끝점일때 or 다 돌았을때
//
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
//	dfs(r);
//
//	printf("%d", cnt[r]);
//
//
//}