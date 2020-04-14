//#include<cstdio>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//
//int pluss[100000] = { 0, };  // 인덱스해당하는 수에 최소 버튼갯수
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
//	pluss[1] = 0; //숫자는 0번임
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
//			if (pluss[next] != 0) { //0인경우는 의미없으므로 continue처리
//			
//				continue;
//			}
//			if (next >= 100000) {
//			//	printf("5자리넘어감\n",next);
//				continue;
//			}
//
//			pluss[next] = pluss[current] + 1; //기존인덱스가 가진갯수에서 +1
//		
//			if (next != n) {
//				que.push(next);
//			}
//			else { //최종 값이 최초 n과 같을때 빠져나옴
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
