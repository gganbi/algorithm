//#include<stdio.h>
//
//int data[100001] = { 0 };
// int n;
// int max=1;
//
// int vv(int a,int b) {
//
//	 int max = 1;
//
//	 while (true) {
//		 if (a % b == 0) {
//			 max = b;
//			 break;
//		 }
//		 else {
//			 int temp = a;
//			 a = b;
//			 b = temp % b;
//		 } 
//	 }
//	 return b;
// 
// }
//int main() {
//
//	int n;
//	scanf_s("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		scanf_s("%d", &data[i]);
//	}
//
//	int max = 0;
//
//	for (int i = 0; i < n - 1; i++) {
//		int distance = data[i + 1] - data[i];
//
//		if (i == 0) {
//			max = distance;
//		}
//		else {
//			max = vv(distance, max);
//		}
//
//	}
//
//
//	// �������� źź�� 
//	//�Ʒ����� �ִ����� ���ϴ°� ������
//
//	
//
//	int cnt = 0;
//     int tt;
//	if (data[n - 1] % max > 0) {
//		tt = data[n - 1] / max + 1; // �� ���μ� ����
//	}
//	else {
//		tt = data[n - 1] / max; // �� ���μ� ����
//	}
//
//	if (max == 1) {
//		tt -= 1;
//	}
//	//�ٵ�  �ִ������� ù�׺��� ũ�� -1
//
//	// �ִ������� ù�׺��� ������
//	// -���ش�  �ִ��������� ù�ױ��� �ִ������� ���� ���μ�����
//
//	int total = (data[n - 1] - data[0]) / max + 1; //�� �̸�ŭ ���� ��������
//	printf("%d", total-n);
//
//
//}