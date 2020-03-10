#include<stdio.h>

int main() {

	char a[10000];
	int i;
	
	fgets(a, sizeof(a), stdin);

	for (i = 0; i < sizeof(a); i++) {
		
		if (a[i] >= 'a' && a[i] <= 'z') {
			a[i] -= 32;
		}
		else if (a[i] >= 'A' && a[i] <= 'Z') {
			a[i] += 32;
		}
	}


		printf("%s",a);



	return 0;
}
