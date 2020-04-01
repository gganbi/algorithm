//#include<cstdio>
//#include<vector>
//
//
//
//// 9 12
//// 1 2
//// 1 3
//// 2 3
//// 2 4
//// 2 6
//// 3 7
//// 4 5
//// 4 7
//// 4 8
//// 5 6
//// 7 8
//// 8 9
//using namespace std;
//
//const int max = 100;
//int n, m; //정점 간선
//vector <int> myGrapgh[max];
//bool visited[max];
//
//
//void DFS(int x) {
//	visited[x] = true;
//	
//	printf("%d\n", x);
//	for (int i = 0; i < myGrapgh[x].size(); i++) {
//		int y = myGrapgh[x][i];
//		//x와 y가 연결됨
//		if (visited[y] == false) {
//			DFS(y);
//		}
//	}
//
//}
//int main() {
//	
//	scanf_s("%d %d", &n, &m);
//	
//	for (int i = 0; i < m; i++) {
//		int a, b;
//		scanf_s("%d %d", &a, &b);
//
//		myGrapgh[a].push_back(b);
//		myGrapgh[b].push_back(a);
//	}
//
//	DFS(1);
//	
//
//}