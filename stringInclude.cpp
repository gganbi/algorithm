#include<stdio.h>
#include<string.h>
int main(){

	char aa[1001];
	char bb[1001];



	scanf_s("%s", aa, 1001);
	scanf_s("%s", bb, 1001);

	int diff = strlen(aa) - strlen(bb);
	bool temp = false;
	int cnt = 0;

	for (int i = 0; i <=diff; i++) {
		
		for (int j = 0; j < strlen(bb); j++) {
			if (aa[i+j] == bb[j]) {
				cnt++;
			}
		}
		if (cnt == strlen(bb)) {
			temp = true;
			break;
		}
		cnt = 0;
		
	}
	
	if (temp == true) {
		printf("YES");
	}
	else {
		printf("NO");
	}

	

}