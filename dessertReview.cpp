//#include<cstdio>
//
//using namespace std;
//
//
//int n;
//
//
//char result[20];
//bool check[3];
//
//
//void getResult(int x) {
//
//	if (x > n) {
//		
//		for (int i = 1; i <= n * 2 - 1; i++) {
//			printf("%c ", result[i]);
//		}
//		printf("\n");
//
//
//		return;
//	
//	}
//	// 1 2 3 4 5 6   7  8 9
//	// 1 3 5 7 9 11 13 15 17
//
//	for (int i = 0; i < 3; i++) {
//		result[2*x-1] = (2*x-1)/2+1+'0';
//		if (i == 0) {
//			result[2 * x - 1 + 1] = '+' + i;
//		}
//		else {
//			result[2 * x - 1 + 1] = '+' + i + 1;
//		}
//		getResult(x+1);
//		
//	
//	}
//	
//
//
//
//
//
//}
//
//
//int main() {
//
//	scanf_s("%d", &n);
//	getResult(1);
//
//	char tmp = '+';
//	char tmp2 = '-';
//	char tmp3 = '.';
//	printf("%d %d %d     %d %d", tmp,tmp+2,tmp+3, tmp2, tmp3);
//
//}