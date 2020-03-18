//#include <stdio.h>
//
//bool aa(int a) {
//	int cnt = 0;
//
//	for (int i = 1; i <= a; i++) {
//		if (a % i == 0) {
//			cnt++;
//		}
//	}
//	if (cnt == 2) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//int dd(int a,int b) {
//
//
//	int cnt = 0;
//	for (int i = a + 1; i <= b; i++) {
//		if (aa(i)) {
//			cnt++;
//		}
//	}
//	return cnt;
//
//}
//
//
//int main() {
//
//	int data;
//	while (true) {
//		scanf_s(" %d", &data);
//
//		if (data == 0) {
//			break;
//		}
//		else {
//			printf("%d\n", dd(data, 2 * data));
//		}
//		data = 0;
//	
//	}
//	return 0;
//
//}