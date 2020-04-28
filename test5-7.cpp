//#include <cstdio>
//#include<queue>
//
//using namespace std;
//
//
//int n, m;
//
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
//int dataa[120][120];
//int test[120][120];
//
//
//struct dataset {
//
//	int x;
//	int y;
//	int cnt;
//};
//
//
//
//int lastMin = 300;
//
//int cnt = 0;
//
//int cnt2 = 0;
//
//int dfusulCnt = 0;
//
//int bfs(int i,int j) {
//
//	queue<dataset> Que;
//
//	dataset tmp;
//	tmp.x = i;
//	tmp.y = j;
//	tmp.cnt = 0;
//	Que.push(tmp);
//
//	while (!Que.empty()) {
//
//		dataset cur = Que.front();
//		Que.pop();
//
//		for (int ii = 0; ii < 4; ii++) {
//			int x = cur.x + dx[ii];
//			int y = cur.y + dy[ii];
//
//			if (dataa[x][y] != 400) { //���,��
//
//
//				bool checkkk = false;
//				if (dataa[x][y] == 0 || dataa[x][y] == 2000 ) {
//					dataa[x][y] = cur.cnt + 1;
//					checkkk = true;
//					
//				} 
//				else  if (dataa[x][y] > cur.cnt + 1) { // ������ ���� �־��� ���� �־��� ������ ���� ũ�� �������ش�
//					//�׷� ���ŵǱ����� que�� �� ���� ���ɵǳ�? �˾Ƽ� ��¥�� �� �����ֵ�� ���ŵǱ⶧���� ť���� ���͵� �ƹ��� �Ȼ���
//					dataa[x][y] = cur.cnt + 1;
//					checkkk = true;
//
//					//������ ���ŵǰ��� �� �� �� �������ֵ鵵 ������ �ްԵȴ�.!!!!! �̰͸� ó��
//				}
//
//				if (checkkk == true) {
//
//					dataset next;
//					next.x = x;
//					next.y = y;
//					next.cnt = dataa[x][y];  //3��°���̽��� �״�� �� �� ������
//					Que.push(next);
//
//					int cnt3 = 0;
//					for (int i = 1; i <= n; i++) {
//						for (int j = 1; j <= m; j++) {
//							if (dataa[i][j] != 400 && dataa[i][j] != 0) {
//								cnt3++;  //���� ��ջ� ������ ��ü����(��ǻ������,2000)
//							}
//						}
//					}
//
//					if (cnt == cnt3 - dfusulCnt) {
//						printf("%d", next.cnt);
//						return next.cnt;
//					}
//				
//				}
//				
//			}
//			
//		}
//	}
//
//	cnt2 = 0;
//	for (int i = 1; i <= n; i++) {  //ť�� �� ���Ҵµ��� �հ� �� ������ ���� ������ �����°���
//		for (int j = 1; j <= m; j++) {
//			if (dataa[i][j] != 400 && dataa[i][j] != 0) {
//				cnt2++;
//			}
//		}
//	}
//
//	if (cnt2- dfusulCnt != cnt) {
//		return -1;
//	}
//}
//
//
//struct defusalStrcut {
//
//	int x;
//	int y;
//};
//
//
//
//int main() {
//
//	defusalStrcut defu[11000];
//
//	scanf_s("%d %d", &n, &m);
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			scanf_s("%d", &dataa[i][j]);
//			
//			if (dataa[i][j] == 0) {
//				cnt++;
//			}
//			else if (dataa[i][j] == 1) { //���
//				dataa[i][j] = 400;
//			}
//			else if (dataa[i][j] == 2) { //���ó
//				dataa[i][j] = 2000;
//			}
//			else {
//			}
//		}
//	}
//
//	for (int i = 0; i <= n + 1; i++) {
//		dataa[i][0] = 400;
//		dataa[i][m + 1] = 400;
//	}
//	for (int i = 0; i <= m + 1; i++) {
//		dataa[0][i] = 400;
//		dataa[n + 1][i] = 400;
//
//	}
//
//	for (int i = 0; i <= n+1; i++) {
//		for (int j = 0; j <= m+1; j++) {
//			test[i][j] = dataa[i][j];
//		}
//	}
//
//	if (cnt == 0) {  // 0�� �ϳ��� �������̽��ϰ��� ��
//		printf("0");
//	}
//	else {
//
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= m; j++) {
//				if (dataa[i][j] == 2000) {
//					
//					++dfusulCnt; //��ǻ������
//					defu[dfusulCnt].x = i;
//					defu[dfusulCnt].y = j;
//				}
//			}
//		}
//		int value;
//		for (int i = 1; i <= dfusulCnt; i++) {
//
//			int value = bfs(defu[i].x, defu[i].y);
//
//			if (value != -1) {
//				if (lastMin >= value) {
//					lastMin = value;
//				}
//			}
//			for (int i = 0; i <= n + 1; i++) { //�ʱ�ȭ
//				for (int j = 0; j <= m + 1; j++) {
//					dataa[i][j] = test[i][j];
//				}
//			}
//		}
//
//		if (lastMin == 300) {  //���δ� -1�̾��ٴ°�
//			printf("-1");
//		}
//		else {
//			printf("%d", lastMin);
//		}
//		
//	}
//	
//
//
//
//
//}
//
