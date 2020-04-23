//#include<cstdio>
//#include<queue>
//#include <string.h>
//using namespace std;
//
//
//
//int dataa[110][110];
//
//int n, m;
//
//int firstX, firstY, firstD;
//int lastX, lastY, lastD;
//
//int dx[5] = { 0,0,0,1,-1 };
//int dy[5] = { 0,1,-1,0,0 };
//
//int cnt = 0;
//
//struct dataSet {
//	int x;
//	int y;
//	int d;
//	int cnt;
//};
//
//bool lastCheck = false;
//
//void queueF() {
//	queue<dataSet> Que;
//
//	dataSet data;
//	data.x = firstX;
//	data.y = firstY;
//	data.d = firstD;
//	data.cnt = 0;
//
//	//dataa[firstX][firstY] = 1;
//
//	Que.push(data);
//
//	while (!Que.empty()) {
//
//		dataSet cur = Que.front();
//		Que.pop();
//
//		if (cur.x == lastX && cur.y == lastY) {
//			lastCheck = true;
//		}
//
//		if (lastCheck == true) {
//
//			if (cur.d == lastD) {
//			}
//			else {
//				if (cur.d == 1 || cur.d == 2) { //동 서
//					if (lastD == 1 || lastD == 2) {
//						cur.cnt += 2;
//					}
//					else {
//						cur.cnt += 1;
//					}
//				}
//				else {  // 남 북
//					if (lastD == 3 || lastD == 4) {
//						cur.cnt += 2;
//					}
//					else {
//						cur.cnt += 1;
//					}
//				}
//			}
//			printf("%d", cur.cnt);
//			return;
//		}
//
//		for (int i = 1; i <= 4; i++) {
//			int x = cur.x + dx[i];
//			int y = cur.y + dy[i];
//			if((x>=1 && x<=n) && (y>=1 && y<=m)){
//				if (dataa[x][y] == 0) {
//					
//				//	dataa[x][y] = 1;	
//					if (x == lastX && y == lastY) {
//						lastCheck = true;
//					}
//					dataSet tmp;
//					tmp.x = x;
//					tmp.y = y;
//					tmp.d = i;
//					tmp.cnt = 0;
//
//					if (cur.d == i) {
//						tmp.cnt = 0;
//					}
//					else {
//						if (cur.d == 1 || cur.d == 2) { //동 서
//							if (i == 1 || i == 2) {
//								tmp.cnt = 2;
//							}
//							else {
//								tmp.cnt = 1;
//							}
//						}
//						else {  // 남 북
//							if (i == 3 || i == 4) {
//								tmp.cnt = 2;
//							}
//							else {
//								tmp.cnt = 1;
//							}
//						}
//					}
//					tmp.cnt += cur.cnt;
//					tmp.cnt += 1; //이동시킨 명령
//					Que.push(tmp);
//
//					if (lastCheck == true) {
//						if (tmp.d == lastD) {
//						}
//						else {
//
//							if (tmp.d == 1 || tmp.d == 2) { //동 서
//								if (lastD == 1 || lastD == 2) {
//									tmp.cnt += 2;
//								}
//								else {
//									tmp.cnt += 1;
//								}
//							}
//							else {  // 남 북
//								if (lastD == 3 || lastD == 4) {
//									tmp.cnt += 2;
//								}
//								else {
//									tmp.cnt += 1;
//								}
//							}
//						}
//						printf("%d", tmp.cnt);
//						return;
//					}
//
//					if (lastCheck == false) {
//						if ((x + dx[i] >= 1 && x + dx[i] <= n) && (y + dy[i] >= 1 && y + dy[i] <= m)) { //범위내에서 조회
//
//							if (dataa[x + dx[i]][y + dy[i]] == 0) { //한칸더 앞이 0일때 더 갈수있음 
//								x += dx[i];
//								y += dy[i];
//								//dataa[x][y] = 1;
//
//								if (x == lastX && y == lastY) {  //움직이다가 도착위치와 같을때
//									lastCheck = true;
//								}
//								dataSet tmpp;
//								tmpp.x = x;
//								tmpp.y = y;
//								tmpp.d = i;
//								tmpp.cnt = 0;
//
//								if (cur.d == i) {
//									tmpp.cnt = 0;
//								}
//								else {
//
//									if (cur.d == 1 || cur.d == 2) { //동 서
//										if (i == 1 || i == 2) {
//											tmpp.cnt = 2;
//										}
//										else {
//											tmpp.cnt = 1;
//										}
//									}
//									else {  // 남 북
//										if (i == 3 || i == 4) {
//											tmpp.cnt = 2;
//										}
//										else {
//											tmpp.cnt = 1;
//										}
//									}
//								}
//								tmpp.cnt += cur.cnt;
//								tmpp.cnt += 1; //이동시킨 명령
//								Que.push(tmpp);
//
//								if (lastCheck == true) {
//									if (tmpp.d == lastD) {
//									}
//									else {
//
//										if (tmpp.d == 1 || tmpp.d == 2) { //동 서
//											if (lastD == 1 || lastD == 2) {
//												tmpp.cnt += 2;
//											}
//											else {
//												tmpp.cnt += 1;
//											}
//										}
//										else {  // 남 북
//											if (lastD == 3 || lastD == 4) {
//												tmpp.cnt += 2;
//											}
//											else {
//												tmpp.cnt += 1;
//											}
//										}
//									}
//									printf("%d", tmpp.cnt);
//									return;
//								}
//
//								if (lastCheck == false) {
//									if ((x + dx[i] >= 1 && x + dx[i] <= n) && (y + dy[i] >= 1 && y + dy[i] <= m)) { //범위내에서 조회
//										if (dataa[x + dx[i]][y + dy[i]] == 0) {  //한칸더 앞이 0일때 더 갈수있음 
//											x += dx[i];
//											y += dy[i];
//										//	dataa[x][y] = 1;
//
//											if (x == lastX && y == lastY) {//움직이다가 도착위치와 같을때
//												lastCheck = true;
//											}
//											dataSet tmppp;
//											tmppp.x = x;
//											tmppp.y = y;
//											tmppp.d = i;
//											tmppp.cnt = 0;
//
//											if (cur.d == i) {
//												tmppp.cnt = 0;
//											}
//											else {
//												if (cur.d == 1 || cur.d == 2) { //동 서
//													if (i == 1 || i == 2) {
//														tmppp.cnt = 2;
//													}
//													else {
//														tmppp.cnt = 1;
//													}
//												}
//												else {  // 남 북
//													if (i == 3 || i == 4) {
//														tmppp.cnt = 2;
//													}
//													else {
//														tmppp.cnt = 1;
//													}
//												}
//											}
//											tmppp.cnt += cur.cnt;
//											tmppp.cnt += 1; //이동시킨 명령
//											Que.push(tmppp);
//
//											if (lastCheck == true) {
//												if (tmppp.d == lastD) {
//												}
//												else {
//													if (tmppp.d == 1 || tmppp.d == 2) { //동 서
//														if (lastD == 1 || lastD == 2) {
//															tmppp.cnt += 2;
//														}
//														else {
//															tmppp.cnt += 1;
//														}
//													}
//													else {  // 남 북
//														if (lastD == 3 || lastD == 4) {
//															tmppp.cnt += 2;
//														}
//														else {
//															tmppp.cnt += 1;
//														}
//													}
//												}
//												printf("%d", tmppp.cnt);
//												return;
//											}
//										}
//									}	
//								}	
//							}
//						}	
//					}
//				}
//			}
//
//		}
//	}
//}
//
//
//int main() {
//
//	scanf_s("%d %d", &n, &m);
//
//	for (int i = 1; i <= n; i++) {
//
//		for (int j = 1; j <= m; j++) {
//			scanf_s("%d", &dataa[i][j]);
//		}
//
//	}
//
//	for (int i = 0; i <=n + 1; i++) {
//		dataa[i][0] = 1000;
//		dataa[i][m + 1] = 1000;
//	}
//	for (int i = 0; i <=m + 1; i++) {
//		dataa[0][i] = 1000;
//		dataa[n + 1][i] = 1000;
//	}
//
//
//	scanf_s("%d %d %d", &firstX, &firstY, &firstD);
//	scanf_s("%d %d %d", &lastX, &lastY, &lastD);
//	queueF();
//
//
//
//}