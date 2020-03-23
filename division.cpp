//#include <stdio.h>
//#include <string.h>
//
//
//const int max = 100;
//int r;
//int result[max];
//bool check[max];
//int sum = 0;
//
//int temp2;
//int count = 0;
//
//void dd(int x) {
//
//
//	if (sum == r) {
//		int i = 0;
//		int index;
//		while (true) {
//			if (result[i] != 0) {
//				//	printf("%d+", result[i]);
//				i++;
//			}
//			else {
//				index = i;
//				break;
//			}
//		}
//		for (int i = 0; i < index - 1; i++) {
//			printf("%d+", result[i]);
//		}
//		printf("%d", result[index - 1]);
//		printf("\n");
//		count++;
//
//	}
//	else {
//
//		int tempp;
//		tempp = temp2;
//		for (int i = tempp; i >= 1; i--) {
//
//			bool temp = false;
//			temp2 = i;
//
//			sum += i;
//			if (sum <= r) {
//				result[x] = i;
//				dd(x + 1);
//				result[x] = 0;
//				sum -= i;
//			}
//			else {
//				sum -= i;
//			}
//		}
//	}
//}
//
//
//int main() {
//
//	scanf_s("%d", &r);
//
//	temp2 = r - 1;
//	dd(0);
//
//	printf("%d", count);
//	return 0;
//}