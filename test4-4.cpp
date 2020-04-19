#include<stdio.h>


int n;
int data[100];

int map[110] = { 10000,5,10,15,20,50,30,35,40,45,100,55,60,65,70,75
,80,85,90,95,500,1000
,275,250,300,1501,175,1502,125,350,400 ,0,
};
int map2[110] = { 10000,5,10,15,20,50,30,35,40,45,100,55,60,65,70,75
,80,85,90,95,500,1000
,275,250,300,1501,175,1502,125,350,400 ,0,
};



int specialArray[12][6] = {
	{50,275,250,300,1501,175},	
	{100,1502,125,300,350,400},
	{275,250,300,1501,175,75},
	{250,300,1501,175,75,80},
	{300,350,400,500,1000,1000},
	{1501,175,75,80,85,90},
	{175,75,80,85,90,95},
	{75,80,85,90,95,500},
	{1502,125,300,350,400,500},
	{125,300,350,400,500,1000},
	{350,400,500,1000,1000,1000},
	{400,500,1000,1000,1000,1000},
};

int main() {



	scanf_s("%d", &n);

	int sum = 0;

	for (int i = 1; i <= n; i++) {
		scanf_s("%d", &data[i]);
	}

	for (int i = 1; i <= n; i++) {


		bool flag = false;
		int tt;
		if (i >= 2) { //두번째부터는 그 특이케이스인지 판단
			
			for (int j = 0; j < 12; j++) {
				if (map[sum] == specialArray[j][0]) {
					tt = j;
					flag = true;
				}
			}
		}
		
		if (flag == true) {
			sum += data[i];
			map[sum]= specialArray[tt][data[i]];
		}
		else {
			//sum[map]에 해당되는애 인덱스값 구해서 
			//거기서 sum+=해주기

			//printf("%d \n", map[sum]);
			int ta = 0;
			for (int mm = 1; mm <= 100; mm++) {
				if (map2[mm] == map[sum]) {
					ta = mm;
					break;
				}
			}
			sum = ta;
			sum += data[i];

			if (sum > 21) {
				printf("1000");
				//55435

				map[sum] = 0;
			}	
		}

		

		
		
		if (flag==false && map[sum] == 0 ) {

			break;
		}
		else if (flag == false) {
			printf("%d ", map[sum]);
			if (map[sum] == 1000) {

				break;
			}
		}

		if (flag==true && (map[sum] == 1501 || map[sum] == 1502)) {
			printf("150 ");
		}
		else if(flag == true) {
			printf("%d ", map[sum]);

			if (map[sum] == 1000) {

				break;
			}
		}

	
		
		

	}
	return 0;
}