//#include<cstdio>
//#include<queue>
//#include<vector>
//
//using namespace std;
//
//
//vector<int> myGraph[100010];
//bool check[100010];
//
//int n, m;
//
//void bfs() {
//	queue<int> Que;
//	Que.push(0);
//	check[0]=true;
//	while (!Que.empty()) {
//		int current = Que.front();
//		Que.pop();
//		printf("%d\n", current);
//		for (int i = 0; i < myGraph[current].size(); i++) {
//			int next = myGraph[current][i];
//			if (check[next] == false) {
//				check[next] = true;
//				Que.push(next);
//			}
//		}
//	}
//}
//
//int main() {
//
//	scanf_s("%d %d", &n, &m);
//
//	for (int i = 0; i < m; i++) {
//	
//		int a, b;
//
//		scanf_s("%d %d", &a, &b);
//
//		myGraph[a].push_back(b);
//		myGraph[b].push_back(a);
//	}
//
//	bfs();
//
//	return 0;
//
//
//}