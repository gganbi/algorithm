//#include<cstdio>
//
//using namespace std;
//
//int n;
//
//int result[100] = {0,};
//void getResult(int x) {
//
//	
//
//
//		/*for (int i = n - 1; i >= 1; i--) {
//			printf("%d+", result[i]);
//		}
//		printf("%d\n", result[0]);
//		return;*/
//		int cnt = 0;
//		for (int i = 0; i < n; i++) {
//			cnt += result[i];
//		}
//
//		if (cnt == n) {
//			int tmp = 0;
//				for (int i = 0; i<n-1; i++) {
//
//					if (result[i+1] != 0) {
//						printf("%d+", result[i]);
//						
//					}
//					else {
//						printf("%d", result[i]);
//						tmp = i;
//						break;
//					}
//					
//				}
//				
//				printf("\n");
//			//	printf("%d\n", result[tmp]);
//			return;
//
//		}
//		else if (cnt > n) {
//			return;
//		}
//
//
//	
//
//	
//	
//	for (int i = n-1; i >= 1; i--) {
//		result[x] = i;
//		getResult(x + 1);
//	}
//
//
//}
//
//
//
//int main() {
//
//	scanf_s("%d", &n);
//
//
//	getResult(0);
//
//
//}