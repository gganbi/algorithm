//#include<stdio.h>
//int n;
//int k;
//
//int dataX[100001];
//int dataY[100001];
//
//
//int main() {
//
//
//	scanf_s("%d %d", &n,&k);
//
//	int mid = 1;;
//	int start = 1;
//	int end = n * n+1;
//	while (true) {
//
//		if (start > end) {
//			
//			mid = end;
//		
//			break;
//		}
//
//
//	
//		mid = (start + end) / 2;  //����
//		int cnt = 0; //��°
//		for (int i = 1; i <= n; i++) {
//
//			if (i * 1 >= mid) {  //ù���� �ش��׺��� Ŭ��
//				break;
//			}
//
//			if (i * n < mid) {  //������ �ش��׺��� ������
//				cnt += n;
//			}
//			else if (i * n == mid) { //���װ� �ش��� ������
//				cnt += (n - 1);
//			}
//			else { //������ �ش��׺��� Ŭ��
//				int temp = mid / i;
//				if (mid % i!=0) {
//					temp = mid / i;
//				}
//				else {
//					temp = mid / i-1;
//				}
//				cnt += temp;	
//			}
//		}
//	
//		cnt++;
//		
//		if (cnt > k) {
//			end = mid - 1;
//		}
//		else {
//			start = mid + 1;
//		}
//
//	}
//
//
//	printf("%d", mid);
//
//	//for()
//
//}