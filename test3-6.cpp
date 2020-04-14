#include <cstdio>
using namespace std;


int n, m, k, t;

int dataNum[110][110] = {0,};
int datax[110], datay[110], dataz[110], datad[110];
int data[110][110][110] = { 0, };

int dy[4] = { -1,1,0,0 };
int dx[4] = { 0,0,-1,1 };

int main() {

	scanf_s("%d %d %d %d", &n, &m, &k, &t);

	for (int i = 1; i <= k; i++) {
		scanf_s("%d %d %d", &datay[i], &datax[i], &datad[i]);
		dataz[i] = 0;
		dataNum[datay[i]][datax[i]]++;
		data[datay[i]][datax[i]][dataz[i]] = 1;
	}
	for (int i = 1; i <= t; i++) {
	
		for (int j = 1; j <= k; j++) {
		

			if (datad[j] == 0) {//╩С 

			}
			else if (datad[j] == 1) { //го

			}
			else if (datad[j] == 2) { //аб

				for (int h = 1; h <= k; h++) {
					if (datax[j] == datax[h] && datay[j] == datay[h]) {
						if (datax[h] == 1) {
							datax[h]++;
							if (dataNum[datay[h]][datax[h]] >= 1) {
								data[datay[h]][datax[h]][dataz[i]] = 1;
							}
							else {
							
							}
						}
						else {
							datax[h]--;
						}
					}
				}
			}
			else { //©Л
			
			}



		
		}
	
	
	}
	

}