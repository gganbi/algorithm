//#include <cstdio>
//using namespace std;
//
//
//
//
//int n;
//
//int data[2000];
//int main() {
//
//	scanf_s("%d", &n);
//
//	for (int i = 1; i <= n; i++) {
//		scanf_s("%d",&data[i]);
//	}
//
//
//
//	for (int i = n - 1; i>=1; i--) {
//		data[i + 1] = data[i];
//	}
//	data[1] = 0;
//
//	for (int i = 1; i <= n; i++) {
//		printf("%d ", data[i]);
//	}
//
//}