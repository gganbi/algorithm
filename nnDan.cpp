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
//		mid = (start + end) / 2;  //숫자
//		int cnt = 0; //번째
//		for (int i = 1; i <= n; i++) {
//
//			if (i * 1 >= mid) {  //첫항이 해당항보다 클때
//				break;
//			}
//
//			if (i * n < mid) {  //끝항이 해당항보다 작을때
//				cnt += n;
//			}
//			else if (i * n == mid) { //끝항과 해당항 같을때
//				cnt += (n - 1);
//			}
//			else { //끝항이 해당항보다 클때
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