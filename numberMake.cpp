//#include<stdio.h>
//
//
//
//// 1~m까지의 숫자를 더하여 n을 만드는 경우의수
//// n을 만들수잇는방법
//
//int data[100];
//
//int n, m;
//int main() {
//
//	scanf_s("%d %d", &n, &m);
//
////table[1]=1;
//	//table[2]=table1+1;
//	//table[3]=table2+table1+1
//
//	data[1] = 1;
//	int sum = 0;
//	for (int i = 1; i <= m; i++) {
//		sum += data[i - 1];
//		data[i] = sum + 1;
//	}
//
//	for (int i = m + 1; i <= n; i++) {
//		for (int j = i - m; j <= i - 1; j++) {
//			data[i] += data[j];
//		}
//	}
//
//	printf("%d\n", data[n]);
//
//	return 0;
//
//}