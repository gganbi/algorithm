//#include<cstdio>
//using namespace std;
//
//
//int result[1000];
//bool check[1000];
//int k;
//int count = 0;
//
//void getResult(int x) {
//
//	if (x >= 10) {
//		count++;
//
//		if (count == k) {
//			for (int i = 0; i < 10; i++) {
//				printf("%d ", result[i]);
//			}
//		
//		}
//		return;
//	}
//
//	for (int i = 1; i <= 4; i++) {
//	
//		result[x] = i;
//
//		getResult(x+1);
//	
//	}
//
//}
//
//
//int main() {
//
//	scanf_s("%d", &k);
//
//	getResult(0);
//
//
//}