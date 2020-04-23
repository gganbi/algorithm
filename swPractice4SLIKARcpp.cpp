#include<cstdio>
#include<queue>

using namespace std;


int r, c;
char dataa[101][101];
bool waterCheck[101][101] = { false, };
bool gosmCheck[101][101] = { false, };


int cnt = 0;

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

bool vari = false;

int cntt = 0;


int bibuX, bibuY;//고슴도치

int lastX, lastY; // 비버위치

struct gosm {
	int x;
	int y;
	int cnt;
};

void bfs(int x,int y) {
	gosm Gosm;
 
	Gosm.x = x;
	Gosm.y = y;
	Gosm.cnt = 0;

	queue<gosm> test;
	test.push(Gosm);

	int cntt = 0;

	while (!test.empty()) {

		for (int i = 1; i <= r; i++) {  //물차오르는것
			for (int j = 1; j <= c; j++) {
				if (dataa[i][j] == '*') {
					if (waterCheck[i][j] == false) {
						for (int m = 0; m < 4; m++) {
							int x = i + dx[m];
							int y = j + dy[m];
							if (dataa[x][y] == '.' || dataa[x][y] == 'S') {
								dataa[x][y] = '*';
								waterCheck[x][y] = true;
							}
						}
					}
				}
			}
		}

		for (int i = 1; i <= r; i++) {
			for (int j = 1; j <= c; j++) {
				waterCheck[i][j] = false;
			}
		}


		for (int i = 1; i <= r; i++) {  //물차오르는것
			for (int j = 1; j <= c; j++) {
				if (dataa[i][j] == 'S') {
					if (gosmCheck[i][j] == false) {
						for (int m = 0; m < 4; m++) {
							int x = i + dx[m];
							int y = j + dy[m];
							if (dataa[x][y] == '.') {
								dataa[x][y] = 'S';
								gosmCheck[x][y] = true;
							}
						}
					}
				}
			}
		}

		for (int i = 1; i <= r; i++) {
			for (int j = 1; j <= c; j++) {
				gosmCheck[i][j] = false;
			}
		}

		/*printf("\n");
		for (int i = 1; i <= r; i++) {
			for (int j = 1; j <= c; j++) {
				printf("%c ", dataa[i][j]);
			}printf("\n");
		}*/
	
		/*gosm cur = test.front();
		test.pop();


		cntt++;
		gosm input;
		int tmpCnt = 0;
		for (int i = 0; i < 4; i++) {
			int xx = cur.x + dx[i];
			int yy = cur.y + dy[i];

			if (dataa[xx][yy] == 'D') {
				printf("%d\n", cur.cnt+1);
				vari = true;
				return;
			}

			
			input.x = xx;
			input.y = yy;
			input.cnt = cur.cnt +1;

			if (dataa[xx][yy] == '.') {
				test.push(input);
				dataa[xx][yy] = 'S';
			}
			else {
				tmpCnt++;
			}
		}*/


	
		printf("\n");
		for (int i = 1; i <= r; i++) {
			for (int j = 1; j <= c; j++) {
				printf("%c ", dataa[i][j]);
			}printf("\n");
		}
	//	printf("\nfffff %d %d %d\n", input.x, input.y, input.cnt);
		
		
		/*for (int i = 1; i <= r; i++) {
			for (int j = 1; j <= c; j++) {
				if (dataa[i][j] == 'S') {

					for (int iii = 0; iii < 4; iii++) {
						int x = i + dx[iii];
						int y = j + dy[iii];

						if (dataa[x][y] == 'D') {
							printf("%d", input.cnt + 1);
							vari = true;
							return;
						}
					}

				}
			}
		}*/


		int cntj = 0;

		for (int i = 0; i < 4; i++) {
		
			int x = lastX + dx[i];
			int y = lastY + dy[i];


			if (dataa[x][y] == '*' || dataa[x][y] == '\0') {
				cntj++;
			}
		}

	//	printf("%d %c \n",cntj,dataa[0][1]);

		if (cntj == 4) {
			
			printf("KAKTUS");
				return;
		
		}

	
	}

}


int cnttt = 0;
int main() {


	scanf("%d %d", &r, &c);


	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= c; j++) {
			scanf(" %c", &dataa[i][j]);
			if (dataa[i][j] == 'S') {
				bibuX = i;
				bibuY = j;
			}
			if (dataa[i][j] == 'D') {
				lastX = i;
				lastY = j;
			}
		}
	}


	//bfs(bibuX, bibuY);
	while (true) {
		cnttt++;


		int cntj3 = 0;

		for (int i = 0; i < 4; i++) {

			int x = lastX + dx[i];
			int y = lastY + dy[i];


			if (dataa[x][y] == '*' || dataa[x][y] == '\0' || dataa[x][y] == 'X') {
				cntj3++;
			}
		}


		if (cntj3 == 4) {

			printf("KAKTUS");
			break;

		}


		for (int i = 1; i <= r; i++) {  //물차오르는것
			for (int j = 1; j <= c; j++) {
				if (dataa[i][j] == '*') {
					if (waterCheck[i][j] == false) {
						for (int m = 0; m < 4; m++) {
							int x = i + dx[m];
							int y = j + dy[m];
							if (dataa[x][y] == '.' || dataa[x][y] == 'S') {
								dataa[x][y] = '*';
								waterCheck[x][y] = true;
							}
						}
					}
				}
			}
		}

		for (int i = 1; i <= r; i++) {
			for (int j = 1; j <= c; j++) {
				waterCheck[i][j] = false;
			}
		}
		int cntj = 0;

		for (int i = 0; i < 4; i++) {

			int x = lastX + dx[i];
			int y = lastY + dy[i];


			if (dataa[x][y] == '*' || dataa[x][y] == '\0' || dataa[x][y] == 'X') {
				cntj++;
			}
		}


		if (cntj == 4) {

			printf("KAKTUS");
			break;

		}


		for (int i = 1; i <= r; i++) {  //고슴도치
			for (int j = 1; j <= c; j++) {
				if (dataa[i][j] == 'S') {
					if (gosmCheck[i][j] == false) {
						for (int m = 0; m < 4; m++) {
							int x = i + dx[m];
							int y = j + dy[m];
							if (dataa[x][y] == '.') {
								dataa[x][y] = 'S';
								gosmCheck[x][y] = true;
							}
						}
					}
				}
			}
		}

		for (int i = 1; i <= r; i++) {
			for (int j = 1; j <= c; j++) {
				gosmCheck[i][j] = false;
			}
		}


		bool cntjj = false;
		for (int i = 0; i < 4; i++) {

			int x = lastX + dx[i];
			int y = lastY + dy[i];

			if (dataa[x][y] == 'S') {
				cntjj = true;
				break;
			}
		}

		if (cntjj == true) {

			if (cnttt == 1) {
				printf("%d", cnttt);
			}
			else {

				printf("%d", cnttt + 1);
			}
			break;

		}

	}



}
