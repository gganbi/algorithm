#include<stdio.h>


int k;
char inequal[100];

char check[100] = {false,};
int result[100];
int cnt = 0;

void dd(int x) {

	if (x >= k) {

	//	if (cnt == 0) {
			for (int i = 0; i <= x; i++) {
				printf("%d", result[i]);
			}printf("\n");
			cnt++;
			return;
		
	//	}
		/*for (int i = 0; i <= x; i++) {
			printf("%d", result[i]);
		}printf("\n");*/
	
	}
	else {

		for (int i = 0; i <= 9; i++) {
			

			if (check[i] == false) {
				check[i] = true;

				
				for (int j = 0; j <= 9; j++) {

					if (check[j] == false) {
						if (inequal[x] == '<') {			
							if (i < j) {
								result[x] = i;
								result[x + 1] = j;
					
								dd(x + 1);
							}	
							
						}
						else {
							if (i > j) {
								result[x] = i;
								result[x + 1] = j;
														
								dd(x + 1);
							}
							
							
						}
						
					}
				}
				check[i] = false;


				
			}
			
		
		}
	
	}

}


int main() {

	scanf_s("%d", &k);

	for (int i = 0; i < k; i++) {
		scanf_s(" %c", &inequal[i]);
	}

	
	dd(0);


}