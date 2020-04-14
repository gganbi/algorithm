//#include<cstdio>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int n,m;
//
//bool check[100] = { 0, }; // trul면 색칠이됨
//
//int countt = 0;
//
//void BFS(int k) {
//
//	queue<int> Queue;
//	Queue.push(k);
//	check[k] = true;
//	while (Queue.empty()==false) {
//
//		int current = Queue.front();
//		Queue.pop();
//
//		//printf("%d ", current); //current방문함
//		countt++;
//
//		int a = current * 2;
//		int b = current / 3;
//		
//		if (a <= n) {
//			if (check[a] == false) {
//				check[a] = true;
//				Queue.push(a);
//			}
//		
//		}
//		
//
//		if (b != 0) {
//			if (check[b] == false) {
//				check[b] = true;
//				Queue.push(b);
//			}
//		}
//	}
//}
//
//
//int main() {
//
//	scanf_s("%d %d", &n, &m);
//
//
//	BFS(m);
//
//
//	printf("%d", n - countt);
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
