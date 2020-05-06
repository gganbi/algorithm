//#include<cstdio>
//#include<algorithm>
//#include<stdlib.h>
//using namespace std;
//
//
//
//int n;
//
//int dataa[100100];
//int dataa2[100100];
//
//void sortt(int data[],int n) {
//
//	for (int i = 1; i <= n - 1; i++) {	
//		for (int j = i + 1; j <= n; j++) {
//			
//			if (data[i] > data[j]) {			
//				int temp = data[i];
//				data[i] = data[j];
//				data[j] = temp;
//			}
//		}
//	}
//}
//
//
//void bina(int data[],int i,int target,int start,int end) {
//
//	int mid = (start + end) / 2;
//
//	if (start > end) {
//	
//		printf("\n%d %d %d %d", start,data[start] ,end,data[end]);
//
//		if()
//		dataa2[i] = data[end];
//		return;
//	}
//
//	
//	if (data[mid] == target) {
//		dataa2[i] = target;
//		return;	
//	}
//	else if (data[mid] >= target) {
//		end = mid - 1;
//		bina(dataa, i, target, start, end);
//
//	}
//	else {
//		start = mid + 1;
//		bina(dataa, i, target, start, end);
//	}
//
//
//}
//
//int main() {
//	scanf_s("%d", &n);
//
//	for (int i = 1; i <= n; i++) {
//		scanf_s("%d", &dataa[i]);
//	}
//
//	sort(dataa+1, dataa+n+1);
//	for (int i = 1; i <= n; i++) {
//		printf("%d ", dataa[i]);
//	}
//	printf("\n");
//	for (int i = 1; i <= n; i++) {
//		
//		bina(dataa,i, dataa[i] * -1, 1, n);
//		printf("\n");
//
//	}
//
//	
//	
//
//
//
//	
//
//}