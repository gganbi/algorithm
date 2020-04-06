//#include<stdio.h>
//
//
//int n, m, y, x, d, t, k,f;
//
//int dx[2] = { -1,1 };
//
//
//
//int main() {
//	
//
//	scanf_s("%d %d %d %d", &n,&m,&k, &t);
//
//
//	for (int i = 1; i <= k; i++) {
//		scanf_s("%d %d %d %d", &y, &x, &d, &f);
//
//		if (d == 0) { //»ó  ÁÙ¾îµë
//			f %= (n * 2 - 2);
//		}
//		else if (d == 1) {//ÇÏ  ´Ã¾î³²
//			f %= (n * 2 - 2);
//		}
//		else if (d == 2) {//ÁÂ ÁÙ¾îµë
//			//m 97842  t 1678942  195682
//			f %= (m * 2 - 2);
//		}
//		else { //¿ì  //´Ã¾î³²
//			f %= (m * 2 - 2);
//		}
//		int printX=0, printY=0;
//		for (int j = 1; j <= t; j++) {
//			if (d == 2) { //ÁÂ
//				if (x - 1 >= f) {
//					printX = y;
//					printY = x - f;
//					x = printY;
//				}
//				else {
//					int temp = f - x + 2;
//					if (temp > m) {
//						temp = temp - m;
//						printX = y;
//						printY = m - temp;
//						x = printY;
//					}
//					else {
//						printX = y;
//						printY = temp;
//						x = printY;
//					}
//				}
//			}
//			else if (d == 3) { //¿ì
//				if (m - x >= f) {
//					printX = y;
//					printY = x + f;
//					x = printY;
//				}
//				else {
//					int temp = f - (m - x);
//					if (temp > m) {
//						printX = y;
//						printY = temp - m + 2;
//						x = printY;
//					}
//					else {
//						printX = y;
//						printY = m - (temp + 1) + 1;
//						x = printY;
//					}
//				}
//			}
//			else if (d == 0) { //»ó
//				if (y - 1 >= f) {
//					printX = y - f;
//					printY = x;
//					y = printX;
//				}
//				else {
//					int temp = f - y + 2;
//					if (temp > n) {
//						temp = temp - n;
//						printX = n - temp;
//						printY = x;
//						y = printX;
//					}
//					else {
//						printX = temp;
//						printY = x;
//						y = printX;
//					}
//				}
//			}
//			else if (d == 1) {  //ÇÏ
//				if (n - y >= f) {
//					printX = y + f;
//					printY = x;
//					y = printX;
//				}
//				else {
//					int temp = f - (n - y);
//					if (temp > n) {
//						printX = temp - n + 2;
//						printY = x;
//						y = printX;
//					}
//					else {
//						printX = n - (temp + 1) + 1;
//						printY = x;
//						y = printX;
//					}
//				}
//			}
//		}
//		printf("%d %d\n", printX, printY);
//		
//	}
//
//	
//
//
//
//}