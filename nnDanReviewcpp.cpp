//#include <cstdio>
//using namespace std;
//
//
//int n;
//int dataa[100010];
//
//
//bool checkk(int size) {
//
//	int start = 1;
//	int tempCnt[100010] = { 0, };
//	for (int i = 1; i <= n - size + 1; i++) {
//		
//		bool che = false;
//		for (int j = i; j <= i + size - 1; j++) {
//			if (tempCnt[dataa[j]] != 0) {
//				che = true;
//				
//			}
//			else {
//				tempCnt[dataa[j]]++;
//			}
//		}
//
//		if (che == false) {
//			return true;
//		}
//		for (int j = i; j <= i + size - 1; j++) {
//			tempCnt[j] = 0;
//		}
//		
//	
//	
//	}
//
//
//	return false;
//}
//
//int main() {
//	scanf_s("%d", &n);
//
//	for (int i = 1; i <= n; i++) {
//		scanf_s("%d", &dataa[i]);
//	}
//
//
//	int value = 1;
//	for (int i = 1; i <= n; i++) {
//
//		
//		if (checkk(i) == true) {
//			value = i;
//		//	printf("%d\n", value);
//		}
//		else {
//			break;
//		}
//	}
//
//	printf("%d", value);
//
//
//
//
//
//}