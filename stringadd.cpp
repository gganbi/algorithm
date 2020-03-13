#include<stdio.h>
#include<string.h>
int main() {

	char aa[1000];
	char bb[1000];
	int cnt[1000] = { 0, };

	fgets(aa, 1000, stdin);

	fgets(bb, 1000, stdin);

	int diff = strlen(aa) - strlen(bb);


	if (strlen(aa) == 2 && strlen(bb) == 2
		&& aa[0]-'0' + bb[0]-'0' < 10) {
		printf("%d", aa[0]-'0' + bb[0]-'0');
	}
	else {
		if (diff > 0) {

			bb[strlen(bb) - 1 + diff] = '\0';
			for (int i = strlen(bb) - 2; i >= 0; i--) {
				bb[i + diff] = bb[i];
			}
			for (int i = 0; i < diff; i++) {
				bb[i] = '0';
			}

		}
		else if (diff < 0) {

			aa[strlen(aa) - 1 + diff * -1] = '\0';
			for (int i = strlen(aa) - 2; i >= 0; i--) {
				aa[i + diff * -1] = aa[i];
			}

			for (int i = 0; i < diff * -1; i++) {
				aa[i] = '0';
			}
		}

		int count = 1;

		if (diff >= 0) {
			for (int i = strlen(aa) - 2; i >= 0; i--) {
				if ((aa[i] - '0' + bb[i] - '0') >= 10) {
					cnt[count++] += ((aa[i] - '0' + bb[i] - '0') % 10);
					cnt[count] += ((aa[i] - '0' + bb[i] - '0') / 10);
				}
				else {
					cnt[count++] += (aa[i] - '0' + bb[i] - '0');
				}
			}
		}
		else {
			for (int i = strlen(bb) - 2; i >= 0; i--) {
				if ((aa[i] - '0' + bb[i] - '0') >= 10) {
					cnt[count++] += ((aa[i] - '0' + bb[i] - '0') % 10);
					cnt[count] += ((aa[i] - '0' + bb[i] - '0') / 10);
				}
				else {
					cnt[count++] += (aa[i] - '0' + bb[i] - '0');
				}
			}


		}


		if (diff > 0) {
			for (int i = strlen(aa) - 1; i >= 1; i--) {
				printf("%d", cnt[i]);
			}
		}
		else if (diff < 0) {
			for (int i = strlen(bb) - 1; i >= 1; i--) {
				printf("%d", cnt[i]);
			}
		}
		else {
			for (int i = strlen(aa); i >= 1; i--) {
				printf("%d", cnt[i]);
			}
		}
	
	}

	



	return 0;
}
