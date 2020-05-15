//#include<cstdio>
//
//int n;
//
//int datan[1010][6] = {0,};
//bool check[1010][1010] = {false,};
//
//
//int cnt[1010] = { 0, };
//
//int main() {
//
//	scanf_s("%d", &n);
//
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= 5; j++) {
//			scanf_s("%d", &datan[i][j]);
//		}
//	}
//
//	for (int i = 1; i <= n; i++) { //기준번학생
//		for (int j = 1; j <= 5; j++) {
//			for (int ii = 1; ii <= n; ii++) { //비교번학생
//				if (datan[i][j] == datan[ii][j]) {
//					check[i][ii] = true;
//				}
//			}
//		}
//	}
//
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//
//			if (check[i][j] == true) {
//				cnt[i]++;
//			}
//			
//		}
//	}
//
//	for (int i = 1; i <= n; i++) {
//		cnt[i]--;
//		printf("%d ", cnt[i]);
//		
//	}
//	printf("\n");
//	int max = cnt[1];
//	int maxIndex = 1;
//
//	for (int i = 2; i <= n; i++) {
//		if (max < cnt[i]) {
//			max = cnt[i];
//			maxIndex = i;
//		}
//	}
//
//	printf("%d %d", max,maxIndex);
//
//}