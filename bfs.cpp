//#include<cstdio>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int n,m;
//vector <int> myGraph[100];
//
//
//bool check[100] = { 0, }; // trul면 색칠이됨
//
//void BFS() {
//
//	queue<int> Queue;
//	Queue.push(1);
//	check[1] = true;
//	while (Queue.empty()==false) {
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
//
//
//int main() {
//
//	scanf_s("%d %d", &n, &m);
//	for (int i = 0; i < m; i++) {
//		int a, b;
//		scanf_s("%d %d", &a, &b);
//
//		myGraph[a].push_back(b);
//		myGraph[b].push_back(a);
//	
//	}
//
//	BFS();
//
//
//}
//
//
//
////.push(x)  x를 큐사입
//// .pop() 큐의 맨 앞에 있는 원소 제거
//// .front 맨앞에 잇는 원서 반환
//// empty 비어있으면 true 반환
