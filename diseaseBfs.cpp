//#include<cstdio>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int n,m;
//
//bool check[100] = { 0, }; // trul�� ��ĥ�̵�
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
//		//printf("%d ", current); //current�湮��
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
////.push(x)  x�� ť����
//// .pop() ť�� �� �տ� �ִ� ���� ����
//// .front �Ǿտ� �մ� ���� ��ȯ
//// empty ��������� true ��ȯ
