//#include <stdio.h>
//
//
//const int max = 100;
//int n, r;
//char result[max];
//bool check[max];
//
//void dd(int x) {
//
//	if (x >= r) {
//		printf("%s\n", result);
//	}
//	else {
//		for (int i = 0; i < n; i++) {
//			char value = i + 'a';
//			if (check[i] == false) {
//				result[i] = value;
//				check[i] = true;
//				dd(x + 1);	
//				check[i] = false;
//			}
//		}
//	}
//}
//
//int main() {
//
//
//	scanf_s("%d %d", &n, &r);
//
//	dd(0);
//
//
//	return 0;
//}