#include<cstdio>
using namespace std;




int n, m, k, t;
int y[110], x[110], d[110];

int data[110][110][110] = { 0, };
int num[110][110] = { 0, };



int main() {


	scanf_s("%d %d %d %d", &n, &m, &k, &t);




	for (int i = 1; i <= k; i++) {
		int yy, xx, dd;

		//for(int j=1;j<=t;j++)  한칸씩기준
		scanf_s("%d %d %d", &yy, &xx, &dd);
		num[yy][xx] = 1;

		if (dd == 0) { // 상
			t = t % (n * 2 - 2);
		}
		else if (dd == 1) { // 하
			t = t % (n * 2 - 2);
		}
		else if (dd == 2) { // 좌
			t = t % (m * 2 - 2);
		}
		else {  //우
			t = t % (m * 2 - 2);
		}
		y[i] = yy;
		x[i] = xx;
		d[i] = dd;
		data[yy][xx][i] = 1; 
		//높이의미

	}


	for (int iii = 1; iii <= t; iii++) {

		for (int i = 1; i <= k; i++) {
			if (d[i] == 0) { // 상
				int high = data[y[i]][x[i]][i];
				int tmp2 = num[y[i]][x[i]]; //현재있는곳에 갯수

				int firstX = x[i];
				int firstY = y[i];

				if (y[i] - 1 <= 0) {
					y[i] = 2;
					d[i] = 1;
				}
				else {
					y[i] -= 1;
				}

				int tmp = num[y[i]][x[i]]; //이동할 위치에 갯수

				for (int ii = high; ii <= tmp2; ii++) {
					for (int jj = 1; jj <= k; jj++) {
						if (data[firstY][firstX][jj] == ii) { //이동 전 위치에 높이놈 찾고
							data[y[i]][x[i]][jj] = ++tmp;
							num[firstY][firstX]--;
							num[y[i]][x[i]]++;
							break;
						}
					}
				}

			}
			else if (d[i] == 1) { // 하
				int high = data[y[i]][x[i]][i];
				int tmp2 = num[y[i]][x[i]]; //현재있는곳에 갯수

				int firstX = x[i];
				int firstY = y[i];

				if (y[i] + 1 >= n+1) {
					y[i] = n - 1;
					d[i] = 0;
				}
				else {
					y[i] += 1;
				}

				int tmp = num[y[i]][x[i]]; //이동할 위치에 갯수

				for (int ii = high; ii <= tmp2; ii++) {
					for (int jj = 1; jj <= k; jj++) {
						if (data[firstY][firstX][jj] == ii) { //첫위치에 높이놈 찾고
							data[y[i]][x[i]][jj] = ++tmp;
							num[firstY][firstX]--;
							num[y[i]][x[i]]++;
							break;
						}
					}
				}
			}
			else if (d[i] == 2) { // 좌

				//이동전에 자기보다 위층에 애들이 있나보기
				// 얘의 높이를 찾아야함 높이부터 맨윗까지
				int high = data[y[i]][x[i]][i];

				int tmp2 = num[y[i]][x[i]]; //현재있는곳에 갯수

				//얘포함해서 얘 위에있는애들 번수도 알아야함

				//high부터 tmp2까지 가치움직임

				//첫 위치
				int firstX = x[i];
				int firstY = y[i];

				if (x[i] - 1 <= 0) {
					x[i] = 2;
					d[i] = 3;
				}
				else {
					x[i] -= 1;
				}
				// 이동후 위치에 누가 있나보기 
				int tmp = num[y[i]][x[i]]; //이동할 위치에 갯수

				for (int ii = high; ii <= tmp2; ii++) {
					for (int jj = 1; jj <= k; jj++) {
						if (data[firstY][firstX][jj] == ii) { //첫위치에 높이놈 찾고
							data[y[i]][x[i]][jj] = ++tmp;
							num[firstY][firstX]--;
							num[y[i]][x[i]]++;
							break;
						}
					}
				}
			}
			else if (d[i] == 3) {  //우
				int high = data[y[i]][x[i]][i];
				int tmp2 = num[y[i]][x[i]]; //현재있는곳에 갯수

				//얘포함해서 얘 위에있는애들 번수도 알아야함

				//high부터 tmp2까지 가치움직임

				//첫 위치
				int firstX = x[i];
				int firstY = y[i];

				if (x[i] + 1 >= m+1) {
					x[i] = m - 1;
					d[i] = 2;
				}
				else {
					x[i] += 1;
				}

				int tmp = num[y[i]][x[i]]; //이동할 위치에 갯수

				for (int ii = high; ii <= tmp2; ii++) {
					for (int jj = 1; jj <= k; jj++) {
						if (data[firstY][firstX][jj] == ii) { //첫위치에 높이놈 찾고
							data[y[i]][x[i]][jj] = ++tmp;
							num[firstY][firstX]--;
							num[y[i]][x[i]]++;
							break;
						}
					}
				}
			}
		}
	
	}

	for (int i = 1; i <= k; i++) {
		printf("%d %d\n", y[i], x[i]);
	}
	

	
}