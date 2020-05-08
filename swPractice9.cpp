////2:05
//
//#include <cstdio>
//#include<queue>
//using namespace std;
//
//
//
//int n, m, k;
//char dataa[60][60];
//
//bool magang[60][60] = { false, };
//
//int p[20] = { 0, };
//int s[20] = { 0, };
//
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
//struct dataSet {
//    int x;
//    int y;
//    int cnt;
//    int minute;
//    bool check;
//    int value;
//};
//
//int getPIndex(int value) {
//    int returnn = -1;
//    for (int i = 1; i <= k; i++) {
//        if (p[i] == value) {
//            returnn = i;
//        }
//    }
//    return returnn;
//}
//
//
//int lastCnt = 0;
//void bfs() {
//    queue <dataSet> myQue;
//    for (int i = 1; i <= k; i++) {
//        scanf_s("%d %d", &p[i], &s[i]); //p 제한인원 s 관람시간
//    }
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            scanf_s(" %c", &dataa[i][j]);
//            // 일케하면 공간복잡도 이래서생김 2중포문안에 전부 계속 구조체생겨서
//            //이것만 고쳐줌 
//
//            if (dataa[i][j] == '1') {
//                dataSet tmp;
//                tmp.x = i;
//                tmp.y = j;
//                tmp.cnt = 0;
//                tmp.check = false;
//                myQue.push(tmp);
//            }
//        }
//    }
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            printf("%c ", dataa[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\n");
//
//    while (!myQue.empty()) {
//
//        dataSet cur = myQue.front();
//        myQue.pop();
//        if (cur.check == true) {  //현재 매장에와서 구경중인상태
//            if (cur.minute != 0) { //mine=ue만 하나줄여주고 위치 그대로
//                dataSet next;
//                next.cnt = cur.cnt + 1;
//                //cur.minute--;
//                next.minute = cur.minute - 1;
//                next.x = cur.x;
//                next.y = cur.y;
//                next.check = true;
//                myQue.push(next);
//            }
//            else {// 빠져나가야함
//           // p[1]  a매장에 그 사람 수
//           // p[2]  b매장에 그 사람 수 
//
//           // dataa[cur.x][cur.y]-'A'+1 인덱스임 
//                p[dataa[cur.x][cur.y] - 'A' + 1]++; //인원제한 늘려줌
//                //이 원래놈은 그냥 방생??  방생함 큐에 그냥 안넣으면됨
//                lastCnt = cur.cnt + 1;
//            }
//        }
//        else {
//            for (int i = 0; i < 4; i++) {
//                int xx = cur.x + dx[i];
//                int yy = cur.y + dy[i];
//                if ((xx >= 1 && xx <= n) && (yy >= 1 && yy <= m)) {
//                    dataSet next;
//                    next.x = xx;
//                    next.y = yy;
//                    next.cnt = cur.cnt + 1;
//                    next.check = false;
//                    next.minute = 0;
//
//                    if (dataa[xx][yy] == '0') {
//                        printf("dfd\n");
//                        myQue.push(next);  // 얘때매그럼 근데 문제는 그럼 자기가 지나간곳은 막을수있는데 딴애가 또 지나가게 해야하잖아 이거살짝애매
//                    }
//                    else if ((dataa[xx][yy]) >= 'A' && (dataa[xx][yy]) <= 'E') { //매장만날때
//
//                      
//
//                        if (dataa[xx][yy] - 'A' + 1 >= 3) {
//                            printf("%d\n", dataa[xx][yy] - 'A' + 1);
//                          }
//                       
//                        if (p[dataa[xx][yy] - 'A' + 1] != 0) {
//                            next.check = true; //얜 이미 매장왔다는걸 표시 이동안해줌
//                            next.minute = s[dataa[xx][yy] - 'A' + 1]; //이동한애한테 관람시간넣어줌
//                            p[dataa[xx][yy] - 'A' + 1]--;
//                            myQue.push(next);
//                        }
//                        else { //꽉 차있을경우  이동하지 않고 그위치 그대로에서 cnt만 올려줌
//                            next.x = cur.x;
//                            next.y = cur.y;
//                            next.minute = 0;
//                            myQue.push(next);
//                        }
//                       
//                    }
//                }
//            }
//
//        }
//        //dataa[cur.x][cur.y]='0';이거 꼭 필요한가? 필요한 케이스도 있겠지만
//    }     // 이거가튼경우 0인것만 찾아가도록해줬으니 안해줘야함
//
//    printf("sssssss");
//
//}
//
//int main() {
//
//    scanf_s("%d %d %d", &n, &m, &k);
//
//     bfs();
//
//     printf("%d", lastCnt);
//
//   /* for (int i = 0; i <= 4; i++) {
//        printf("%c", ('A' + i)-'A');
//    }*/
//    return 0;
//}