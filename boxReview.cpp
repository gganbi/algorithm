//#include<cstdio>
//
//
//int n;
//int datan[1010] = { 0, };
//int cnt[1010] = {0,};
//int main() {
//
//	scanf_s("%d", &n);
//
//	for (int i = 1; i <= n; i++) {
//		scanf_s("%d", &datan[i]);
//		cnt[datan[i]]++;
//	}
//
//	int sum = 0;
//	for (int i = 1; i <= 1010; i++) {
//		if (cnt[i] >= 2) {
//			sum += 2;
//		}
//		else {
//			sum += 1;
//		}
//	}
//
//	if (sum == 6) {
//		printf("YES");	
//	}
//	else {
//		printf("NO");
//	}
//}