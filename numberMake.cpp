//#include<stdio.h>
//
//
//
//// 1~m������ ���ڸ� ���Ͽ� n�� ����� ����Ǽ�
//// n�� ������մ¹��
//
//int data[100010];
//
//int n, m;
//int main() {
//	m = 3;
//
//	scanf_s("%d", &n);
//
//	//table[1]=1;
//		//table[2]=table1+1;
//		//table[3]=table2+table1+1
//		//table[4]=table3+1+2
//		//table[5]=table4+table
//		//2������°���Ǽ�+1
//
//	data[1] = 1;
//	int sum = 0;
//	for (int i = 1; i <= m; i++) {
//		sum += data[i - 1];
//		data[i] = sum + 1;
//	}
//
//
//	for (int i = m + 1; i <= n; i++) {
//		for (int j = i - m; j <= i - 1; j++) {
//			data[i] += data[j];
//			data[i] %= 1000007;
//		}
//	}
//
//	printf("%d\n", data[n]);
//
//	return 0;
//
//}