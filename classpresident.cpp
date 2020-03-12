#include <stdio.h>

int data[1001][6];
int tmp[1001][1001];
int cnt[1001];
int main() {

	

	int a;

	scanf_s("%d", &a);

	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= 5; j++) {
			scanf_s("%d", &data[i][j]);
		}
	}


	for (int i = 1; i <= a; i++) { //학생
		for (int j = 1; j <= 5; j++) {  //학년
			for (int m = 1; m <= a; m++) {   //해당 학년 학생에서 그 학년에서 같은반인 학생 찾기
				if (data[i][j] == data[m][j]) {
					if (i != m) {
						tmp[i][m] = 1;
					}
					
				}
			}
		}
	}

	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= a; j++) {
			cnt[i] += tmp[i][j];
		}
	}

	int max = cnt[1];

	int temp = 1;
	for (int j = 2; j <= a; j++) {
		if (max < cnt[j]) {
			max = cnt[j];
			temp = j;
		}
	}


	printf("%d", temp);
	


	return 0;
}
