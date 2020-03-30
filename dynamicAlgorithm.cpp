//#include<stdio.h>
//
//// 1. 테이블정의
//// 2. 점화ㅏ식
//
//// Table(i) = i번째 숫자를 오른쪽 끝으로 하는 연속 부분 최대합
//// Table(i)=max(Table(i-1)+Data(i),Data(i))  , 그 삼각형
//const int MAX = 100;
//int Table[MAX];
//int data[MAX];
//int n;
//
//int main() {
//
//	scanf_s("%d", &n);
//	
//		for (int i = 0; i < n; i++) {
//			scanf_s("%d", &data[i]);
//		}
//	
//	
//
//	Table[0] = data[0];
//	for (int i = 1; i < n; i++) {
//		if (Table[i - 1] + data[i] > data[i]) Table[i] = Table[i - 1] + data[i];
//		else{
//			Table[i] = data[i];
//		}
//	}
//
//	int myMax = -933333;
//
//	for (int i = 0; i < n; i++) {
//		if (Table[i] > myMax) {
//			myMax = Table[i];
//		}
//	}
//
//	printf("%d\n", myMax);
//	return 0;
//
//}