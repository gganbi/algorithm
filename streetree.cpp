//#include<stdio.h>
//
//long long int data[100001] = {0};
//long long int tmp[100001] = { 0 };
//int main() {
//
//
//	int n;
//	scanf_s("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		scanf_s("%lld", &data[i]);
//	}
//
//	for (int i = 0; i < n-1; i++) {
//		tmp[i] = data[i + 1] - data[i];
//	}
//
//
//	// �������� źź�� 
//	//�Ʒ����� �ִ����� ���ϴ°� ������
//
//	long long int tmpMax = tmp[0];
//	for (long long int i = 1; i < n - 2; i++) {
//		if (tmpMax <= tmp[i]) {
//			tmpMax = tmp[i];
//		}
//	}
//	long long int max = 1;  //�ִ����� 
//	for (long long int i = 1; i <= tmpMax; i++) {
//		long long int temp = 0;
//		for (long long int j = 0; j < n - 1; j++) {		
//			if (tmp[j] % i == 0) {
//				temp++;
//			}
//		}
//
//		if (temp == (n - 1)) {
//			max = i;
//		}
//	}
//
//
//	long long cnt = 0;
//	long long int tt;
//	if (data[n - 1] % max > 0) {
//		tt = data[n - 1] / max+1; // �� ���μ� ����
//	}
//	else {
//		tt = data[n - 1] / max; // �� ���μ� ����
//	}
//	//�ٵ�  �ִ������� ù�׺��� ũ�� -1
//
//	// �ִ������� ù�׺��� ������
//	// -���ش�  �ִ��������� ù�ױ��� �ִ������� ���� ���μ�����
//
//	long long int total = data[n - 1] - data[0] / max + 1;
//	printf("%lld", total - n);
//
////	printf("%d\n", max);
//
//	//if (max < data[0]) {
//
//	//	long long int mm;
//	//	if (data[0] % max > 0) {
//	//		mm = data[0] / max ; // ù�׺��� �ִ�����
//	//	}
//	//	else {
//	//		mm = data[0] / max-1; // ù�׺��� �ִ�����
//	//	}
//	//	printf("%lld", tt - n - mm);
//	//}
//	//else {
//	//	printf("%lld", tt - n);
//	//}
//
//
//}