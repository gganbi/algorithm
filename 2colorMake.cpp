//#include<cstdio>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int n, m;
//vector <int> myGraph[100];
//
//
//bool check[100] = { 0, }; // trul�� ��ĥ�̵�
//
//int pushCheck[10001] = { 0, }; // trul�� ��ĥ�̵�
//
//bool last = false;
//int cnt = 0;
//
//void BFS() {
//
//	queue<int> Queue;
//	Queue.push(0);
//	check[0] = true;
//	pushCheck[0] = cnt++;
//	while (Queue.empty()==false) {
//
//		int current = Queue.front();
//		Queue.pop();
//
//		
//		printf("%d ", current); //current�湮��
//		for (int i = 0; i < myGraph[current].size(); i++) {
//			int next = myGraph[current][i];
//
//			if (check[next] == false) {
//				check[next] = true;
//				Queue.push(next);
//				
//			}
//		}
//		cnt++;
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
//	if (last == true) {
//		printf("NO");
//	}
//	else {
//		printf("YES");
//	}
//
//
//}
//
//
//
////.push(x)  x�� ť����
//// .pop() ť�� �� �տ� �ִ� ���� ����
//// .front �Ǿտ� �մ� ���� ��ȯ
//// empty ��������� true ��ȯ
