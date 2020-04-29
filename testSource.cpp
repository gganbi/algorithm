//#include<cstdio>
//#include<queue>
//using namespace std;
//
//
//int T;
//
//int n, m, k;
//
//int pungsunCnt = 0;
//// 결국 바늘 선택하는 케이스에 따라 다르므로 
//// 몇번째 풍선을 터뜨릴지도 정해야함
//// 1 2 3 4 5 조합 재귀문제
//// 1. 
//// 저 조합으로 케이스뽑는법 걸어서 전부다 해줌
//// 구조체 번호걸어줌. 
//// 그래서 x>=r 인 경우 그때 bfs 걸어줌 
//// 그때 bfs에 그 포함된 구조체번호에 x,y좌표들 전부 넣어줌
//// 그래서 폭팔시켜주고 check truue 된애만 큐에 넣어줌
//// 만일 que 다 돌았어 
//// 다 돌면  풍선이 남아있을꺼임
//// 이중 포문으로 안터진 풍선 고르면서 bfs시켜줌
//// bfs 다돌고나서 올 체크 check true 판단 
//// 이때 bfs에 갯수가 최소 바늘의 수
//
//int dataa[20][20];
//int tmp[20][20];
//bool checkk[20][20] = { false, };
//
//struct dataSet {
//    int x;
//    int y;
//};
//dataSet pungsunData[20];
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
//int result[10] = { 0, };
//bool check[10] = { false, };
//
//void bfs(int result[], int cnt) {
//
//    int* resultt = result;
//    queue<dataSet> dataset;
//
//    for (int i = 0; i < cnt; i++) {
//        dataset.push(pungsunData[resultt[i]]);
//    }
//
//    while (true) {
//        dataSet cur = dataset.front();
//        dataset.pop();
//        checkk[cur.x][cur.y] = true;
//        int cnt = dataa[cur.x][cur.y];
//
//        for (int ii = 0; ii < 4; ii++) {
//            for (int jj = 1; jj <= cnt; jj++) {
//                int xx = cur.x + dx[ii] * jj;
//                int yy = cur.y + dy[ii] * jj;
//                if (dataa[xx][yy] != -1) {
//                    checkk[xx][yy] = true;
//                    if (dataa[xx][yy] != 0) {// 큐에 넣어줘야할 놈
//                        dataSet tmpp;
//                        tmpp.x = xx;  // num 넣어줘야하나??
//                        tmpp.y = yy;
//                        dataset.push(tmpp);
//                    }
//                }
//            }
//        }
//    }
//}
//
//
////x,y 값으로 풍선번호 가져옴
//int getNum(int x, int y) {
//    int returnValue = 0;
//    for (int i = 1; i <= pungsunCnt; i++) {
//
//        if (pungsunData[i].x == x && pungsunData[i].y == y) {
//            returnValue = i;
//        }
//    }
//    return returnValue;
//}
//
//
//int lastValue = 100;
//
//void getResult(int x) {
//    if (x >= k) {  //각각 케이스들임 이거 하고 초기화해줌
//
//        bfs(result, x);
//        int cnttt = 0;
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= m; j++) {
//                if (checkk[i][j] == true) {
//                    cnttt++;
//                }
//            }
//        }
//
//        if (cnttt == 0) { //해당케이스에서 다 끝나다는것
//            lastValue = 0;
//            return;
//        }
//
//
//        int bfsCnt = 0;
//
//        int temp[1];
//
//       
//                    
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= m; j++) {
//                if (checkk[i][j] == true) {
//                    bfsCnt++;
//                    temp[0] = getNum(i, j);
//                    bfs(temp, 1);
//                    cnttt = 0;
//
//                    for (int ii = 1; ii <= n; ii++) {
//                        for (int jj = 1; jj <= m; jj++) {
//                            if (checkk[ii][jj] == true) {
//                                cnttt++;
//                            }
//                        }
//                    }
//                    if (cnttt == 0) { //해당케이스에서 다 끝나다는것
//                        break;
//                    }
//                }
//            }
//            if (cnttt == 0) { //해당케이스에서 다 끝나다는것
//                break;
//            }
//        }
//
//        if (bfsCnt < lastValue) {
//            lastValue = bfsCnt;
//        }
//
//        for (int i = 0; i <= 19; i++) {
//            for (int j = 0; j <= 19; j++) {
//                checkk[i][j] = false;
//            }
//        }
//
//        //한케이스 해준거임 그래서 초기화
//        return;
//    }
//
//    for (int i = 1; i <= pungsunCnt; i++) {
//        if (check[i] == false) {
//            check[i] = true;
//            result[x] = i;
//            getResult(x + 1);
//            check[i] = false;
//        }
//    }
//}
//
//
//int main() {
//
//    //Please Enter Your Code Here
//
//    //scanf("%d",&T);
//    scanf_s("%d %d %d", &n, &m, &k);
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            scanf_s("%d", &dataa[i][j]);
//            tmp[i][j] = dataa[i][j];
//            if (dataa[i][j] != 0) {
//                pungsunCnt++;
//                pungsunData[pungsunCnt].x = i;
//                pungsunData[pungsunCnt].y = j;
//            }
//        }
//    }
//    for (int i = 0; i <= m + 1; i++) {
//        dataa[0][i] = -1;
//        dataa[n + 1][i] = -1;
//        tmp[0][i] = -1;
//        tmp[n + 1][i] = -1;
//    }
//    for (int i = 0; i <= n + 1; i++) {
//        tmp[i][0] = -1;
//        tmp[i][m + 1] = -1;
//    }
//    getResult(0);
//    printf("%d", lastValue);
//
//    return 0;
//}