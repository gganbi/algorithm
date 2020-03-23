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
//	// x번째 for문을 돌려야함
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
//				//x번째에 i를 넣는 모든경우를 이미 다 고ㅕ함
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