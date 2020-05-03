//#include<cstdio>
//using namespace std;
//
//
//
//int n, q;
//
//int dataan[100100];
//int dataaq[100100];
//
//void sortt(int data[], int n) {
//
//	for (int i = 1; i <= n - 1; i++) {
//		for (int j = i + 1; j <= n; j++) {
//			if (data[i] > data[j]) {
//				int temp = data[i];
//				data[i] = data[j];
//				data[j] = temp;
//			}
//		}
//	}
//
//
//}
//
//int main() {
//
//	scanf_s("%d %d", &n, &q);
//
//	for (int i = 1; i <= n; i++) {
//		scanf_s("%d", &dataan[i]);
//	}
//	for (int i = 1; i <= q; i++) {
//		scanf_s("%d", &dataaq[i]);
//	}
//
//
//	sortt(dataan, n);
//
//	for (int i = 1; i <= n; i++) {
//		printf("%d ", dataan[i]);
//	}
//	printf("\n");
//
//	for (int i = 1; i <= q; i++) {
//		int target = dataaq[i];
//		int startIndex = 1;
//		int endIndex = n;
//		
//		while (true) {
//			int mid = (startIndex + endIndex) / 2;
//
//			if (startIndex > endIndex) {
//				printf("NO\n");
//				break;
//			}
//
//			if (dataan[mid] > target) {
//			
//				endIndex = mid - 1;
//			}else if (dataan[mid] <target) {
//
//				startIndex = mid +1;
//			}
//			else {
//				printf("YES\n");
//				break;
//			}
//
//		}
//	}
//
//
//}