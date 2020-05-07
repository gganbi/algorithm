//// 1: 36
//
//#include <stdio.h>
//#include<queue>
//using namespace std;
//
//
////문제 예제케이스 잘읽기! 이건 좌표조정문제가 크다
//
//struct dataSet {
//    int x;
//    int y;
//    int d;
//    bool explode;
//};
//
//int s;
//int x, y, d;
//int dataa[2100][2100] = { 0, };
//bool explodeCheck[2100][2100] = { false, };
//int explodeCnt = 0;
//
//void bfs(int s) {
//
//    queue<dataSet> myQue;
//    dataSet dataset;
//    for (int i = 1; i <= s; i++) {
//        scanf_s("%d %d %d", &x, &y, &d);
//        dataa[1000-y][x + 1000] = 1;
//        dataset.x = 1000 - y;
//        dataset.y = x + 1000;
//        dataset.d = d;
//        dataset.explode = false;
//        myQue.push(dataset);
//    }
//
//    while (!myQue.empty()) {
//
//        dataSet cur = myQue.front();
//        myQue.pop();
//        int xx = cur.x;
//        int yy = cur.y;
//       
//        if (cur.d == 0) {
//            xx -= 1;
//        }
//        else if (cur.d == 1) {
//            xx += 1;
//        }
//        else if (cur.d == 2) {
//            yy -= 1;
//        }
//        else {
//            yy += 1;
//        }
//
//    
//       
//
//        if ((xx >= 0 && xx <= 2000) && (yy >= 0 && yy <= 2000)) {
//    
//            if (explodeCheck[cur.x][cur.y] == true) {
//                
//
//                explodeCheck[cur.x][cur.y] = false;
//                explodeCnt++;
//                
//                dataa[cur.x][cur.y] = 0;
//            }
//            else {
//             //   printf("ddd\n");
//             //   printf(" %d %d %d %d\n", cur.x-1001, cur.y-1001, cur.x, cur.y);
//                dataa[cur.x][cur.y] = 0;
//                if (dataa[xx][yy] == 1) {
//                    explodeCheck[xx][yy] = true;
//                   
//                }
//                else {
//                    dataSet next;
//                    next.x = xx;
//                    next.y = yy;
//                    next.d = cur.d;
//                    next.explode = false;
//                    dataa[xx][yy] = 1;
//                  
//                    myQue.push(next);
//                }
//            }
//        }
//
//
//    }
//
//
//};
//
//int t;
//
//int main() {
//
//    scanf_s("%d", &t);
//
//    for (int iii = 1; iii <= t; iii++) {
//        scanf_s("%d", &s);
//        bfs(s);
//        printf("#%d %d\n",iii, explodeCnt);
//        for (int i = 0; i < 2100; i++) {
//            for (int j = 0; j < 2100; j++) {
//                dataa[i][j] = 0;
//                explodeCheck[i][j] = false;
//            }
//        }
//        explodeCnt = 0;
//    }
//
//   
//
//
//    return 0;
//}