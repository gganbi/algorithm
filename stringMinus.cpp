#include <stdio.h>
#include <string.h>
int main() {

	char a[120];
	char b[120];

	scanf_s("%s",a,120);
	scanf_s("%s",b, 120);

	char temp[120];
	bool test = false;

	if (strcmp(a, b) == 0) {
		printf("0");
		return 0;
	}

	// 무조건 a가 
	if (strlen(a) < strlen(b)) {
		strcpy_s(temp, a);
		strcpy_s(a, b);
		strcpy_s(b, temp);
		test = true;
	}
	else if (strlen(a) == strlen(b)) {	
		for (int i = 0; i < strlen(a); i++) {
			if (a[i] - '0' < b[i] - '0') {
				strcpy_s(temp, a);
				strcpy_s(a, b);
				strcpy_s(b, temp);
				test = true;
				break;
			}
		}

	}
	//남는곳은 0으로 체우기
	int diff = strlen(a) - strlen(b);

	if(strlen(a)>strlen(b)){
		b[strlen(b) + diff] = '\0';
		for (int i = strlen(b)-1; i>=0; i--) {
			b[i +diff] = b[i];
		}
		for (int i = 0; i < diff; i++) {
			b[i] = '0';
		}
	}
	
    int  cnt[120] = {0,};

	for (int i = strlen(a)-1; i >= 0; i--) {
		if (a[i]-'0' - (b[i]-'0') < 0) {		
			cnt[strlen(a)-i]+= (a[i]-'0')+10 - (b[i]-'0');
			a[i - 1]--;			
		}
		else {
			cnt[strlen(a) - i] += (a[i] - '0') - (b[i] - '0');
		}
	}

	bool tempp = false;
	bool temppp = false;
		for (int i = strlen(a); i > 0; i--) {
			if (cnt[i] == 0 && temppp==false) {
				
			}
			else {
				temppp = true;

				if (test == true && tempp==false ) {
					tempp = true;
					cnt[i] *= -1;
				}
				printf("%d", cnt[i]);
			}	
		}
	
	

		return 0;
}