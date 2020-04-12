//#include <cstdio>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//bool check[100001];
//vector<int> myGraph[100001];
//
//int node[100001] = {0,};
//
//int n,m, a, b;
//
//bool flag = false;
//
//void bfs(int y) {
//
//	queue<int> que;
//	que.push(0);
//	check[0] = true;
//	node[0] = y;
//
//	while (que.empty() != true) {
//	
//		int current = que.front();
//		que.pop();
//
//		for (int i = 0; i < myGraph[current].size(); i++) {
//
//			int next = myGraph[current][i];		
//
//			
//
//			if (check[next] == true && node[current] == node[next]) {
//				flag = true;
//				return;
//			}
//			int yy;
//
//			if (node[current] == 1) {
//				yy = 2;
//			}
//			else {
//				yy = 1;
//			}
//			
//			if (check[next] == false) {
//				node[next] = yy;
//				check[next] = true;
//				que.push(next);
//			}
//		}
//	}
//
//}
//
//int main() {
//	scanf_s("%d %d",&n,&m);
//
//	for (int i = 1; i <= m; i++) {
//		scanf_s("%d %d", &a, &b);
//		myGraph[a].push_back(b);
//		myGraph[b].push_back(a);
//	}
//
//	bfs(1);
//
//	//for (int i = 0; i < n; i++) {
//	//	printf("%d ", node[i]);
//	//}
//
//	if (flag == true) {
//
//		printf("NO");
//
//	}
//	else {
//		printf("YES");
//	}
//
//	return 0;
//
//
//
//}