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
//bool check[100] = { 0, }; // trul�� ��ĥ�̵�
//
//int firstVisited[100] = { 0, };
//
//bool flag = false;
//
//void BFS() {
//
//	queue<int> Queue;
//	Queue.push(1);
//	check[1] = true;
//	firstVisited[1] = 1;
//	int y = 1;
//	while (Queue.empty()==false) {
//
//		int current = Queue.front();
//		Queue.pop();
//
//	//	printf("%d ", current); //current�湮��
//	
//	
//		
//		for (int i = 0; i < myGraph[current].size(); i++) {
//			int next = myGraph[current][i];
//
//			if (check[next]==true && firstVisited[next] == firstVisited[current]) {
//				flag = true;
//				return;
//			}
//
//			int tmp;
//			if (firstVisited[current] == 1) {
//				tmp = 2;
//			}
//			else {
//				tmp = 1;
//			}
//			
//			if (check[next] == false) {
//				
//				check[next] = true;
//				Queue.push(next);
//				firstVisited[next] = tmp;		
//			}
//		}
//		
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
//	if (flag == true) {
//				printf("No");
//			}
//			else {
//				printf("Yes");
//			}
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
