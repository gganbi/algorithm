//#include <stdio.h>
//
//int fs[130000] = {0,};
//
//int dd(int a) { //각 값마다 소수인놈에 갯수 출력
//
//	int first = a;
//	for (int i = 2; i <= a; i++) {  //배수
//		for (int j = 2; i*j <= a; j++) { //전체 돌면서 그 배수인애들 false	
//			fs[i * j] = 1;
//		}
//	}
//	int cnt = 0;
//	for (int i = 2; i <= a; i++) {
//		if (fs[i] == 0) {
//			cnt++;
//		}
//	}
//	return cnt;
//}
//
//
//int main() {
//
//
//
//	int data;
//	while (true) {
//		scanf_s("%d", &data);
//
//		if (data == 0) {
//			break;
//		}
//		else {
//			printf("%d\n",dd(data*2)- dd(data));
//		}
//		
//	
//	}
//	return 0;
//
//}