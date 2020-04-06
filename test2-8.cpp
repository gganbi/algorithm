//#include<stdio.h>
//
//
//int n,m,y, x, d, t;
//
//int dx[2] = { -1,1 };
//
//
//
//int main() {
//	int printX, printY;
//
//	scanf_s("%d %d %d %d %d %d", &n,&m,&y, &x, &d, &t);
//
//
//	if (d == 0) { //»ó  ÁÙ¾îµë
//		t %= (n * 2 - 2);
//	}
//	else if (d == 1) {//ÇÏ  ´Ã¾î³²
//		t %= (n * 2 - 2);
//	}
//	else if (d == 2) {//ÁÂ ÁÙ¾îµë
//		//m 97842  t 1678942  195682
//		t %= (m * 2 - 2);
//	}
//	else { //¿ì  //´Ã¾î³²
//		t %= (m * 2 - 2);
//	}
//
//
//	// d 0,2 °¨¼Ò 
//	// d 1,3 Áõ°¡
//	if (d == 2) { //ÁÂ
//		if (x - 1 >= t) {
//			printX = y;
//			printY = x - t;
//		}
//		else {
//			int temp = t - x + 2;
//			if (temp > m) {
//				temp = temp - m;
//				printX = y;
//				printY = m - temp;
//			}
//			else {
//				printX = y;
//				printY = temp;
//			}
//		}
//	}
//	else if(d==3) { //¿ì
//		if (m - x >= t) {
//			printX = y;
//			printY = x + t;
//		}
//		else {
//			int temp = t - (m - x);
//			if (temp > m) {
//				printX = y;
//				printY = temp - m + 2;
//			}
//			else {
//				printX = y;
//				printY = m - (temp + 1) + 1;
//			}
//		}
//	}
//
//
//	// d 0,2 °¨¼Ò 
//	// d 1,3 Áõ°¡
//	else if (d == 0) { //»ó
//		if (y - 1 >= t) {
//			printX = y - t;
//			printY = x;
//		}
//		else {
//			int temp = t - y + 2;
//			if (temp > n) {
//				temp = temp - n;
//				printX = n - temp;
//				printY = x;
//			}
//			else {
//				printX = temp;
//				printY = x;
//			} 
//		}
//	}
//	else if (d == 1) {  //ÇÏ
//		if (n - y >= t) {
//			printX = y + t;
//			printY = x;
//		}
//		else {
//			int temp = t - (n - y);
//			if (temp > n) {
//				printX = temp - n + 2;	
//				printY = x;
//			}
//			else {
//				printX = n - (temp + 1) + 1;
//				printY = x;
//			}
//		}
//	}
//
//	printf("%d %d", printX, printY);
//
//
//
//}