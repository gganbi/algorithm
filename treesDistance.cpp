//#include <stdio.h>
//
//int main() {
//	int parent[1005] = { 0, };
//	bool common[1005] = { 0, };
//	int n;
//	int x, y;
//
//	scanf_s("%d %d %d", &n, &x, &y);
//
//	for (int i = 0; i < n - 1; i++) {
//		int a, b;
//		scanf_s("%d %d", &a, &b);
//
//		parent[b] = a;
//		//b�� ���� a�� �ִ�
//
//	}
//	bool test = false;
//	int xCnt = 0;
//	int yCnt = 0;
//
//	int originX = x;
//	int originY = y;
//	while (1) {
//		
//		common[x] = true;
//		if (x == 0) break;
//		xCnt++;		
//		x = parent[x];
//		if (x == originY) {
//			printf("%d", xCnt);
//			return 0;
//		}
//	}
//
//	while (1) {	
//		
//		if (y == 0) break;
//		yCnt++;
//		if (common[y] == true) {
//			printf("%d\n", xCnt + yCnt);
//			return 0;
//		}
//
//		y = parent[y];
//		if (y == originX) {
//			printf("%d", yCnt);
//			return 0;
//		}
//	
//	}
//	printf("%d %d\n", xCnt, yCnt);
//
//	//1 . ���� ������������� �� �Ÿ� ���ϱ�
//	//2 . �갡 �긦 �����ϴ� ���� �׳� �� �������� �Ÿ�
//
//
//
//
//
//}