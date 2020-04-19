//#include<stdio.h>
//
//
//int n;
//int data[100];
//
//int map[212] = { 0,5,10,15,20,50,30,35,40,45,100,55,60,65,70,75,80,85,90,95,500,1000,0 };
//
//int main() {
//
//	scanf_s("%d", &n);
//
//	int sum = 0;
//	for (int i = 1; i <= n; i++) {
//	
//		scanf_s("%d", &data[i]);
//		sum += data[i];
//
//		if (sum >= 21) {
//			sum = 21;
//		}
//
//		printf("%d ", map[sum]);
//		if (sum == 21) {
//			break;
//		}
//		
//	}
//
//}