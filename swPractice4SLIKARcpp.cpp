//#include<cstdio>
//#include<queue>
//
//using namespace std;
//
//
//int r, c;
//char dataa[101][101];
//bool waterCheck[101][101] = { false, };
//
//
//int cnt = 0;
//
//int dx[4] = { 0,0,-1,1 };
//int dy[4] = { -1,1,0,0 };
//
//bool vari = false;
//
//struct gosm {
//	int x;
//	int y;
//	int cnt;
//};
//
//void bfs(int x,int y) {
//	gosm Gosm;
// 
//	Gosm.x = x;
//	Gosm.y = y;
//	Gosm.cnt = 0;
//
//	queue<gosm> test;
//	test.push(Gosm);
//
//	while (!test.empty()) {
//
//		for (int i = 1; i <= r; i++) {  //물차오르는것
//			for (int j = 1; j <= c; j++) {
//				if (dataa[i][j] == '*') {
//					if (waterCheck[i][j] == false) {
//						for (int m = 0; m < 4; m++) {
//							int x = i + dx[m];
//							int y = j + dy[m];
//							if (dataa[x][y] == '.') {
//								dataa[x][y] = '*';
//								waterCheck[x][y] = true;
//							}
//						}
//					}
//				}
//			}
//		}
//
//		for (int i = 1; i <= r; i++) {
//			for (int j = 1; j <= c; j++) {
//				waterCheck[i][j] = false;
//			}
//		}
//
//		printf("\n");
//		for (int i = 1; i <= r; i++) {
//			for (int j = 1; j <= c; j++) {
//				printf("%c ", dataa[i][j]);
//			}printf("\n");
//		}
//	
//		gosm cur = test.front();
//		test.pop();
//
//		
//		for (int i = 0; i < 4; i++) {
//			int xx = cur.x + dx[i];
//			int yy = cur.y + dy[i];
//
//			if (dataa[xx][yy] == 'D') {
//				printf("last!! : %d\n", cur.cnt+1);
//				vari = true;
//				return;
//			}
//
//			gosm input;
//			input.x = xx;
//			input.y = yy;
//			input.cnt = cur.cnt +1;
//
//			if (dataa[xx][yy] == '.') {
//				test.push(input);
//			}
//		}
//
//	
//	}
//
//}
//
//int main() {
//
//	scanf_s("%d %d", &r, &c);
//
//	int bibuX, bibuY;//고슴도치
//
//	int lastX, lastY; // 비버위치
//	for (int i = 1; i <= r; i++) {
//		for (int j = 1; j <= c; j++) {
//			scanf_s(" %c", &dataa[i][j]);
//			if (dataa[i][j] == 'S') {
//				bibuX = i;
//				bibuY = j;
//			}
//			if (dataa[i][j] == 'D') {
//				lastX = i;
//				lastY = j;
//			}
//		}
//	}
//
//
//	bfs(bibuX, bibuY);
//
//	/*if (vari == true) {
//		break;
//	}*/
//
//	
//	/*printf(" 고슴 위치  %d %d \n", bibuX, bibuY);
//	bfs(bibuX, bibuY);
//	
//		for (int i = 1; i <= r; i++) {
//			for (int j = 1; j <= c; j++) {
//				printf("%c ", dataa[i][j]);
//			}printf("\n");
//		}*/
//	//
////	while (true) {
//
//		//for (int i = 1; i <= r; i++) {  //물차오르는것
//		//	for (int j = 1; j <= c; j++) {
//		//		if (dataa[i][j] == '*') {
//		//			if (waterCheck[i][j] == false) {
//		//				for (int m = 0; m < 4; m++) {
//		//					int x = i + dx[m];
//		//					int y = j + dy[m];
//		//					if (dataa[x][y] == '.') {
//		//						dataa[x][y] = '*';
//		//						waterCheck[x][y] = true;
//		//					}
//		//				}
//		//			}
//		//		}
//		//	}
//		//}
//
//		//for (int i = 1; i <= r; i++) {
//		//	for (int j = 1; j <= c; j++) {
//		//		waterCheck[i][j] = false;
//		//	}
//		//}
//		/*printf("\n");
//		for (int i = 1; i <= r; i++) {
//			for (int j = 1; j <= c; j++) {
//				printf("%c ", dataa[i][j]);
//			}printf("\n");
//		}*/
//
//		//bfs(bibuX, bibuY);
//
//		///*if (vari == true) {
//		//	break;
//		//}*/
//
//		//printf("\n");
//		//for (int i = 1; i <= r; i++) {
//		//	for (int j = 1; j <= c; j++) {
//		//		printf("%c ", dataa[i][j]);
//		//	}printf("\n");
//		//}
//
//		
//	
//	//	}	
//	
//
//}