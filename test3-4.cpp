//#include<cstdio>
//using namespace std;
//
//int n, m, k, t;
//
//int data[1001][1001] = { 0, };
//
//int main() {
//
//	scanf_s("%d %d %d %d", &n, &m, &k, &t);
//
//	for (int i = 1; i <= k; i++) {
//		int y, x, d;
//		scanf_s("%d %d %d %d", &y, &x, &d);
//
//		
//	
//		if (d == 0 || d == 1) {  //상  하
//
//			t = t%(n * 2 - 2);
//			while (true) {
//
//				if (d == 0) {
//
//				}
//				else {
//
//				}
//
//			}
//
//		}
//
//		else if (d == 2 || d == 3) { //좌 우
//
//			t = t%(m * 2 - 2);
//
//			if (d == 2) {
//				if (x > t) {
//					x = x - t;
//				}
//				else {
//					if (y-1+m-1<=t) { //한번바뀜
//						d = 3;
//						x = 1+ t - (x - 1);	
//					}
//					else {  //한번 더 바뀜
//
//						// t가 6이상인경우 
//						x = m - (y - 1 + m - 1 - m);
//						d = 2;
//					}
//				}
//			}
//			else {
//				
//				if (x + t <= m) {
//					x = x + t;
//				}
//				else {
//					
//					if(m-x-1+m<=t){
//						d = 2;
//						t=m-x-1
//					}
//					else {
//					
//					}
//
//
//				}
//
//			}
//		}
//			
//
//
//	}
//
//}