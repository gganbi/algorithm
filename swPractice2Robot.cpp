#include<cstdio>
#include<queue>

using namespace std;



int n, m;
int dataa[110][110];
int dx[5] = { 0, 0,0,1,-1 };
int dy[5] = { 0,1,-1,0,0 };

int startX, startY, startD, lastX, lastY, lastD;


struct dataSet {
	int x;
	int y;
	int d;
	int cnt;
};


bool lastt = false;
void bfs() {

	dataSet firstData;
	firstData.x = startX;
	firstData.y = startY;
	firstData.d = startD;
	firstData.cnt = 0; //이게 어케보면 명령횟수변수

	queue<dataSet> myQue;

	myQue.push(firstData);

	while (!myQue.empty()) {
		
		dataSet cur = myQue.front();
		myQue.pop();

		for (int i = 1; i <= 4; i++) {

			int possible = 0;
			for (int mm = 1; mm <= 3; mm++) {
				int xx = cur.x + dx[i] * mm;
				int yy = cur.y + dy[i] * mm;

				if ((xx >= 1 && xx <= n) && (yy >= 1 && yy <= m)) {
					if (dataa[xx][yy] == 0) {
						possible++;
					}
					else {
						break;
					}
				}
				else {
					break;
				}
			}

			for (int mm = 1; mm <= possible; mm++) {
				int xx = cur.x + dx[i]*mm;
				int yy = cur.y + dy[i]*mm;
				//이동한거 1로체크하면안됨
				if ((xx >= 1 && xx <= n) && (yy >= 1 && yy <= m)) {
					
					if (dataa[xx][yy] == 0) {
						dataSet next;
						next.x = xx;
						next.y = yy;

						next.d = i;

						if (cur.d == i) {
							next.cnt = cur.cnt;
						}
						else {
							if (cur.d == 1 || cur.d == 2) {
								if (i == 2 || i == 1) {
									next.cnt = cur.cnt + 2;
								}
								else {
									next.cnt = cur.cnt + 1;
								}
							}
							else {
								if (i == 3 || i == 4) {
									next.cnt = cur.cnt + 2;
								}
								else {
									next.cnt = cur.cnt + 1;
								}
							}
						}
						next.cnt += 1; //이동시켜준명령
						myQue.push(next);
						//	해당 위치 왔을때  도착 처리 
						if (xx == lastX && yy == lastY) {

							int last = next.cnt;
							if (next.d == lastD) {
							}
							else {
								if (next.d == 1 || next.d == 2) {
									if (lastD == 1 || lastD == 2) {
										last = next.cnt + 2;
									}
									else {
										last = next.cnt + 1;
									}
								}
								else {
									if (lastD == 3 || lastD == 4) {
										last = next.cnt + 2;
									}
									else {
										last = next.cnt + 1;
									}
								}
							}
							printf("%d", last);
							return;
						}
					}

				}	
			}
			
			
		}
	}

}
int main() {

	scanf_s("%d %d", &n, &m);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf_s("%d", &dataa[i][j]);
		}
	}

	for (int i = 0; i <= n+1; i++) {
		dataa[i][0] = -1;
		dataa[i][m + 1] = -1;
	}
	for (int i = 0; i <= m + 1; i++) {
		dataa[0][i] = -1;
		dataa[n+1][i] = -1;

	}
	scanf_s("%d %d %d", &startX, &startY,&startD);
	scanf_s("%d %d %d", &lastX, &lastY, &lastD);


	


	if (startX == lastX && startY == lastY) {

	
		int last = 0;
		if (startD == lastD) {
		}
		else {
			if (startD == 1 || startD == 2) {
				if (lastD == 1 || lastD == 2) {
					last = 2;
				}
				else {
					last = 1;
				}
			}
			else {
				if (lastD == 3 || lastD == 4) {
					last = 2;
				}
				else {
					last = 1;
				}
			}
		}
		printf("%d", last);

		
	
	}
	else {
		bfs();
	}

	
}