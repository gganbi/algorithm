//#include <cstdio>
//#include<queue>
//using namespace std;
//
//int n, m, k, t;
//
//int dataa[100][100];
//int map[100][100] = { 0, };  // 1,2,3, 표시할 map
//int tmp[100][100]; //복사용 초기화용도
//int cnt[100] = { 0, };
//int cntCnt = 0;
//bool check[100][100] = { false, }; //복사용
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
////절대 완벽한 설계 끝나기전 코드세부고민 들어가지말기!
//// 결국 말리게된다
//
//// 1. 우선 모든 항 bfs 돌인부분돌기
//// 한 케이스별로 파악
//
//// 다른 맵 만들어서 111 222 33 44 되는 배열만들어줌 bfs를 이용해서
//// 근데 만들어 줄시에 각 cur 케이스 돌고나서 2차원배열로 0체크 0 없으면 그때 값이
//// 최종 거리
//
//// 각 1,2,3,4,거리별 cnt 배열도 생성 1차원배열
//
//// 3차원포문 최종거리로 하고  전체 맵 돌면서 1또는2. 3 
//// 암튼 각 수와 같은곳 if걸고 그때 원래맵위치에넘 1이면 cnt배열 ++ 각 거리별 여자 수임
//
//// 위에 각 거리별 여자 수 구해놨음
//
//// 재귀함수 구성 
//// 리턴값은 가중치 값  인풋값은 1부터 최종 레이더범위 까지 넣어보면서 ex cnt[1] 
//// 리턴 값이 리본>=리턴값 하면서 포문 다돌고 그때의 인덱스값
//// 그럼 1부터 그 인덱스까지 cnt 합한 밧이 추정이성 전체 수
//
//
//
////위가 한취에서  나온값이며 다 초기화시켜주고 전역 max배열값에 넣어주고
//// 다돌면서 max< 이 처리해줘서 맥스값 구해냄
//
//
//
//
//int tt = 1;
//int getResult(int r) {
//
//
//    if (r == 0) {
//
//        return 0;
//    }
//    int value = r * cnt[tt++];
//     value += getResult(r - 1);
//
//
//
//    return value;
//
//}
//
//struct dataSet {
//    int x;
//    int y;
//    int value;
//    int cnt;
//
//};
//
//// bool check 배열로 닿았으면 TRUE
//// false 인부분돌면서 
//
//int lastIndex = 0;
//void bfs(int x, int y) {
//
//    dataSet dataset;
//    dataset.x = x;
//    dataset.y = y;
//    dataset.cnt = 0;
//    dataset.value = 0;
//    map[1][1] = 0;
//
//    queue<dataSet> queData;
//    queData.push(dataset);
//
//    while (!queData.empty()) {
//
//        dataSet cur = queData.front();
//        queData.pop();
//        bool check = false;
//        int tmpcnt = 0;
//        for (int i = 0; i < 4; i++) {
//
//           
//            int xx = cur.x + dx[i];
//            int yy = cur.y + dy[i];
//
//            if (map[xx][yy] == 0) {
//
//                if (xx == x && yy == y) {
//                
//                }
//                else {
//
//                    if ((xx >= 1 && xx <= n) && (yy >= 1 && yy <= m)) {
//                        check = false;
//                        dataSet next;
//                        next.x = xx;
//                        next.y = yy;
//                        next.cnt = cur.cnt + 1;
//                        map[xx][yy] = next.cnt;
//                        queData.push(next);
//
//                        if (lastIndex <= next.cnt) {
//                            lastIndex = next.cnt;
//                        }
//                    }
//
//                   
//                   // printf("%d\n", lastIndex);
//                   
//                }
//                
//            }
//        }
//       
//    }
//};
//
//
//
//int main() {
//
//    //Please Enter Your Code Here
//
//    scanf_s("%d", &t);
//
//
//    for (int iiii = 1; iiii <= t; iiii++) {
//
//        int lastttt = 0;
//        scanf_s("%d %d %d", &n, &m, &k);
//
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= m; j++) {
//                scanf_s("%d", &dataa[i][j]);
//            }
//        }
//
//        for (int i = 0; i <= n + 1; i++) {
//            dataa[i][0] = -1;
//            dataa[i][m + 1] = -1;
//            tmp[i][0] = -1;
//            tmp[i][m + 1] = -1;
//            map[i][0] = -1;
//            map[i][m + 1] = -1;
//        }
//        for (int i = 0; i <= m + 1; i++) {
//            dataa[0][i] = -1;
//            dataa[n + 1][i] = -1;
//            tmp[0][i] = -1;
//            tmp[n + 1][i] = -1;
//            map[0][i] = -1;
//            map[n + 1][i] = -1;
//        }
//
//        //  bfs(1, 2);
//
//
//        for (int iii = 1; iii <= n; iii++) {
//
//            for (int jjj = 1; jjj <= m; jjj++) {
//                bfs(iii, jjj);
//                //    bfs(1, 1);
//                for (int i = 1; i <= lastIndex; i++) {
//                    for (int j = 1; j <= n; j++) {
//                        for (int k = 1; k <= m; k++) {
//
//                            if (map[j][k] == i) {
//                                if (dataa[j][k] == 1) {
//                                    cnt[i]++;
//                                }
//                            }
//                        }
//                    }
//                }
//
//                for (int i = 0; i <= n + 1; i++) {
//                    for (int j = 0; j <= m + 1; j++) {
//                        map[i][j] = 0;
//                    }
//                }
//                int ribonIndex = 0; // 최대가능한 레이더 값
//                tt = 1;
//                for (int i = 1; i <= lastIndex; i++) {
//
//                    int re = getResult(i);
//                    tt = 1;
//                    if (re <= k) {
//                        //    printf("safdsd %d \n",re);
//
//
//                        ribonIndex = i;
//                    }
//                }
//                // printf("last : ! %d", ribonIndex);
//
//                int lastsumm = 0;
//                for (int i = 1; i <= ribonIndex; i++) {
//                    lastsumm += cnt[i];
//                }
//
//                if (lastttt <= lastsumm) {
//                    lastttt = lastsumm;
//                }
//
//                //    printf("%d \n", lastsumm);
//
//                lastIndex = 0;
//                for (int i = 1; i <= 100; i++) {
//                    cnt[i] = 0;
//                }
//
//            }
//        }
//
//        printf("#%d %d\n",iiii, lastttt);
//   
//    }
//   
//
// /* 
//    for (int i = 1; i <= lastIndex; i++) {
//    
//        printf("%d ", cnt[i]);
//    }
//    printf(" \n");
//  */
//
//    
//
//    //for (int i = 1; i <= n; i++) {
//    //    for (int j = 1; j <= m; j++) {
//    //        bfs(i, j);
//    //    }
//    //}
//
//
//
//    return 0;
//}
//
//
///*
//for(int i=0;i<=n+1;i++){
//      for(int j=0;j<=m+1;j++){
//        printf("%d",dataa[i][j]);
//      }printf("\n");
//  }
//  */