//#include<stdio.h>
//
//int main() {
//	int aa[10];
//	int temp = 0;
//
//	for (int i = 0; i < 10; i++) {
//		scanf_s("%d", &aa[i]);
//	}
//
//	
//	
//	for (int i = 0; i < 9; i++) {
//		int min = aa[i];
//		int minIndex = i;
//		for (int j = i + 1; j < 10; j++) {
//			if (min >= aa[j]) {
//				min = aa[j];
//				minIndex = j;	
//			}
//		}
//		int temp = aa[minIndex];
//		aa[minIndex] = aa[i];
//		aa[i] = temp;
//	}
//
//	
//	int sum = 0;
//
//	for (int i = 0; i < 10; i++) {
//		sum += aa[i];
//	}
//
//	int cnt = 1;
//
//	int max = 1;
//
//	int value;
//	for (int i = 0; i < 9; i++) {
//		if (aa[i + 1] == aa[i]) {
//			cnt++;
//		}
//		else {
//			if (max < cnt) {
//				max = cnt;
//				value = aa[i];
//			}
//			cnt = 1;
//		}
//	}
//	printf("%d %d", sum / 10, value);
//}
