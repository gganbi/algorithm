//#include<cstdio>
//#include<stack>
//#include<stdlib.h>
//#include<algorithm>
//using namespace std;
//
//
//int main() {
//
//
//	//원래 14개임
//	int dataa[15] = { 1,1,3,3,2,2,4,5,1,1,1,3,3,3,0 };
//	int temp[15] = { 0, };
//
//	int lastCnt = 1;
//
//	while (true) {
//
//		int tempCnt = 0;
//
//		int cnt = 1;
//		for (int i = 0; i < 15 - 1; i++) {
//			if (dataa[i] != 0) {
//				if (dataa[i] == dataa[i + 1]) {
//					cnt++;
//				}
//				else {
//					temp[tempCnt++] = cnt;
//					cnt = 1;
//				}
//			}
//		}
//		for (int i = 0; i < tempCnt; i++) {
//			dataa[i] = temp[i];
//		}
//		for (int i = tempCnt; i < 15-1; i++) {
//			dataa[i] = 0;
//		}
//
//		if (tempCnt == 1 && temp[0] == 1) {
//			printf(" 답 : %d", lastCnt);
//		}
//		lastCnt++;
//	/**	printf("!! %d %d \n", tempCnt, lastCnt++);
//		for (int i = 0; i < tempCnt; i++) {
//
//			printf("%d ", temp[i]);
//
//		}*/
//		
//		tempCnt = 0;
//		printf("\n");
//
//
//	}
//
//
//	//temp[tempCnt] = cnt;
///*
//	for (int i = 0; i < 14 ; i++) {
//
//		if (temp[i] != 0) {
//			printf("%d ", temp[i]);
//		}
//
//	}*/
//
//}
