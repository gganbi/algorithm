//#include<cstdio>
//#include<vector>
//#include <queue>
//#include<algorithm>
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
//
//int n, m; //정점 간선
//vector <int> myGrapgh[1001];
//bool visited[1001];
//
//
//
//bool check[1001] = { 0, }; // trul면 색칠이됨
//void DFS(int x) {
//	visited[x] = true;
//	
//	printf("%d ", x);
//	for (int i = 0; i < myGrapgh[x].size(); i++) {
//		int y = myGrapgh[x][i];
//		//x와 y가 연결됨
//		if (visited[y] == false) {
//			DFS(y);
//		}
//	}
//
//}
//vector <int> myGraph[1001];
//
//void BFS() {
//
//	queue<int> Queue;
//	Queue.push(0);
//	check[0] = true;
//	while (Queue.empty() == false) {
//
//		int current = Queue.front();
//		Queue.pop();
//
//		printf("%d ", current); //current방문함
//		for (int i = 0; i < myGraph[current].size(); i++) {
//			int next = myGraph[current][i];
//
//			if (check[next] == false) {
//				check[next] = true;
//				Queue.push(next);
//			}
//		}
//	}
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
//		myGraph[a].push_back(b);
//		myGraph[b].push_back(a);
//	}
//
//
//	for (int i = 0; i < n; i++) {
//		sort(myGrapgh[i].begin(), myGrapgh[i].end());
//		sort(myGraph[i].begin(), myGraph[i].end());
//	}
//
//	
//	DFS(0);
//	printf("\n");
//	BFS();
//	
//
//}