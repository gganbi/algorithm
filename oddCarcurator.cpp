//#include<cstdio>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//
//int pluss[100000] = { 0, };  // �ε����ش��ϴ� ���� �ּ� ��ư����
//
//int n;
//int cnt = 1;
//char ynsan[2] = { '*','/' };
//int  value[2] = {2,3 };
//
//
//void bfs() {
//	queue<int> que;
//
//	que.push(1);
//	pluss[1] = 0; //���ڴ� 0����
//
//	while (!que.empty()) {
//		int current = que.front();
//		que.pop();
//
//		if (current == 0 ) {
//			continue;
//		}
//
//		for (int i = 0; i < 2; i++) {
//			int next;
//			if (ynsan[i] == '*') {
//				next = current * value[i];
//
//			}
//			else {
//				next = current / value[i];
//			}
//			
//			if (pluss[next] != 0) { //0�ΰ��� �ǹ̾����Ƿ� continueó��
//			
//				continue;
//			}
//			if (next >= 100000) {
//			//	printf("5�ڸ��Ѿ\n",next);
//				continue;
//			}
//
//			pluss[next] = pluss[current] + 1; //�����ε����� ������������ +1
//		
//			if (next != n) {
//				que.push(next);
//			}
//			else { //���� ���� ���� n�� ������ ��������
//				cnt = pluss[next];
//				return;
//			}
//		}
//	}
//}
//
//int main() {
//	scanf_s("%d", &n);
//
//	if (n != 1) {
//		bfs();
//	}
//
//	printf("%d", cnt);
//
//}
