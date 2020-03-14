#include<stdio.h>
#include<string.h>
int main() {

	char aa[1000];
	char bb[1000];
	int cnt[1000] = { 0, };


	scanf_s("%s", aa, 1000);

	scanf_s("%s", bb, 1000);

	int diff = strlen(aa) - strlen(bb);


	if (diff > 0) {

		bb[strlen(bb) + diff] = '\0';
		for (int i = strlen(bb) - 1; i >= 0; i--) {
			bb[i + diff] = bb[i];
		}
		for (int i = 0; i < diff; i++) {
			bb[i] = '0';
		}

	}
	else if (diff < 0) {

		aa[strlen(aa) + diff * -1] = '\0';
		for (int i = strlen(aa) - 1; i >= 0; i--) {
			aa[i + diff * -1] = aa[i];
		}

		for (int i = 0; i < diff * -1; i++) {
			aa[i] = '0';
		}
	}

	printf("%s\n", aa);
	printf("%s\n", bb);
	int count = 1;

	if (diff >= 0) {
		for (int i = strlen(aa) - 1; i >= 0; i--) {
			if ((aa[i] - '0' + bb[i] - '0')+cnt[count] >= 10) {
				int tmp = (aa[i] - '0' + bb[i] - '0') + cnt[count];
				cnt[count++] = (tmp % 10);
				cnt[count] += (tmp / 10);
			}
			else {
				cnt[count++] += (aa[i] - '0' + bb[i] - '0');
			}
		}
	}
	else {
		for (int i = strlen(bb) - 1; i >= 0; i--) {
			if ((aa[i] - '0' + bb[i] - '0')+cnt[count] >= 10) {
				int tmp = (aa[i] - '0' + bb[i] - '0') + cnt[count];
				cnt[count++] = (tmp % 10);
				cnt[count] += (tmp / 10);
			}
			else {
				cnt[count++] += (aa[i] - '0' + bb[i] - '0');
			}
		}


	}





		if (cnt[strlen(aa) + 1] > 0) {
			for (int i = strlen(aa) + 1; i >= 1; i--) {
				printf("%d", cnt[i]);
			}
		}
		else {
			for (int i = strlen(aa); i >= 1; i--) {
				printf("%d", cnt[i]);
			}

		}



	return 0;
}
