#include <stdio.h>

int main() {
	int n, q;
	int data[101] = {0,};

	int aa[101] = { 0, };
	int bb[101] = { 0, };

	scanf_s("%d", &n);
	scanf_s("%d", &q);

	for (int i = 0; i <n; i++) {
		scanf_s("%d", &data[i]);
	}
	for (int i = 0; i < q; i++) {
		scanf_s("%d %d", &aa[i], &bb[i]);
	}
	int index = 0;
	for (int i = 0; i < q; i++) {
		
		if (bb[i] / n >= 1) {
			bb[i] %= n;
		}
		if (aa[i] == 1) {
			if (index + bb[i] > n - 1) {
				index = bb[i]-(n-1-index)-1;
			}
			else {
				index += bb[i];
			}

			printf("%d\n", data[index]);
		}
		else {
			if (index - bb[i] < 0) {
				index = n +(index - bb[i]);
			}
			else {
				index -= bb[i];
			}
			printf("%d\n", data[index]);
		
		}
		
	}




	return 0;


}