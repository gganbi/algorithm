#include<stdio.h>

int n, k;

int result[200];

int cnt = 0;
int cnt1 = 0;  //1À» ¾´ °¹¼ö
int cnt2 = 0;  //0À» ¾´ °¹¼ö

void tobin(int x, int cnt) {
	if (cnt == k) {

		result[x] = 0;
		tobin(x + 1, cnt);
		return;
	}

	if (x >= n) {
		for (int i = 0; i < n; i++) {
			printf("%d", result[i]);
		}printf("\n");

	}
		result[x] = 1;
		tobin(x + 1, cnt + 1);
		result[x] = 0;
		tobin(x + 1, cnt);
		return;

}

int main() {
	scanf_s("%d %d", &n, &k);
	tobin(0,0);

	return 0;
}
