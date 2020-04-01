#include<stdio.h>


int k;
char inequal[100];

char check[100] = {false,};
int result[100];
int cnt = 0;
int minResult[100];

int max = 1;

void dd(int x) {

	if (x >= k) {
		max = x;
		cnt++;
		if (cnt == 1) {

			/*for (int i = 0; i <= x; i++) {
				printf("%d", result[i]);
			}printf("\n");*/
			//return;
			for (int i = 0; i <= x; i++) {
				minResult[i] = result[i];
			}
	
		}

		for (int i = 0; i < x; i++) {
				printf("%d", result[i]);
			}printf("\n");
	//	return;
		/*
		for (int i = 0; i <= x; i++) {
			printf("%d", result[i]);
		}printf("\n");*/
	
	}
	else {

	/*	if (result[0] == 1 && result[1] == 0 && result[2] == 2
			&& result[3] == 3 ) {
			printf("ddddd\n");
		
		}*/

		for (int i = 0; i <= 9; i++) {
			

			if (check[i] == false) {

				if (inequal[x] == '<') {
					if (i < j) {
						check[i] = true;
						result[x] = i;
						//result[x + 1] = j;

						dd(x + 1);
						check[i] = false;
					}

				}
				else {
					if (i > j) {
						check[i] = true;
						result[x] = i;
						//result[x + 1] = j;
						//해줘도 의미없음						
						dd(x + 1);
						check[i] = false;
					}
				}
				if (j == 9) { //머 부등호 하나도안걸린상황
					//결국 그 i값은 더 할필요가없음
				}
				

			
				//for (int j = 0; j <= 9; j++) {

				//	if (check[j] == false) {

				//	//	printf("%c\n", inequal[x]);
				//		if (inequal[x] == '<') {			
				//			if (i < j) {
				//				check[i] = true;
				//				result[x] = i;
				//				//result[x + 1] = j;
				//	
				//				dd(x + 1);
				//				check[i] = false;
				//			}	
				//			
				//		}
				//		else {
				//			if (i > j) {
				//				check[i] = true;
				//				result[x] = i;
				//				//result[x + 1] = j;
				//				//해줘도 의미없음						
				//				dd(x + 1);
				//				check[i] = false;
				//			}	
				//		}
				//		if (j == 9) { //머 부등호 하나도안걸린상황
				//			//결국 그 i값은 더 할필요가없음
				//		}
				//	}		
				//}//check[i] = false;
				
		
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


	/*for (int i = 0; i <= max; i++) {
		printf("%d", minResult[i]);
	}printf("\n");
	for (int i = 0; i <= max; i++) {
		printf("%d", result[i]);
	}printf("\n");*/

}