//#include<stdio.h>
//
//const int max = 105;
//
//
//int n, r;
//char result[max];
//bool check[max];
//
//
//void getResult(int x) {
//	// x��° for���� ��������
//
//	if (x >= r) {
//		printf("%s\n", result);
//	}
//	else {
//		for (int i = 0; i < n; i++) {
//			char alpha = i + 'a';
//			
//				result[x] = alpha;
//				check[x] = true;
//				getResult(x + 1);
//				//x��°�� i�� �ִ� ����츦 �̹� �� �����
//				check[x] = false;
//				result[x] = 0;
//		
//		}
//		
//	}
//
//
//}
//
//
//
//
//int main() {
//
//	scanf_s("%d %d", &n, &r);
//	getResult(0);
//
//	return 0;
//
//
//
//}