//2:05

#include <cstdio>
#include<queue>
using namespace std;



int n, m, k;
char dataa[60][60];

bool tt[15][15][110] = { false, };

bool magang[60][60] = { false, };

int p[20] = { 0, };
int s[20] = { 0, };

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

struct dataSet {
    int x;
    int y;
    int cnt;
    int minute;
    bool check;
    int value;
};




int lastCnt = 0;
int valueCnt = 1;
void bfs() {
    queue <dataSet> myQue;
    for (int i = 1; i <= k; i++) {
        scanf_s("%d %d", &p[i], &s[i]); //p 제한인원 s 관람시간
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            scanf_s(" %c", &dataa[i][j]);
            // 일케하면 공간복잡도 이래서생김 2중포문안에 전부 계속 구조체생겨서
            //이것만 고쳐줌 

            if (dataa[i][j] == '1') {
                dataSet tmp;
                tmp.x = i;
                tmp.y = j;
                tmp.cnt = 0;
                tmp.check = false;
                tmp.value = valueCnt++;
                myQue.push(tmp);
            }
        }
    }

    while (!myQue.empty()) {

        dataSet cur = myQue.front();
        myQue.pop();
        if (cur.check == true) {  //현재 매장에와서 구경중인상태
            printf("!!!!!!!     dnhcd\n");
            if (cur.minute != 0) { //mine=ue만 하나줄여주고 위치 그대로
                dataSet next;
                next.cnt = cur.cnt + 1;
                //cur.minute--;
                next.minute = cur.minute - 1;
                next.x = cur.x;
                next.y = cur.y;
                next.check = true;
                myQue.push(next);
                tt[cur.x][cur.y][cur.value] = true;
            }
            else {// 빠져나가야함
                p[dataa[cur.x][cur.y] - 'A' + 1]++; //인원제한 늘려줌
                lastCnt = cur.cnt + 1;
            }
        }
        else {
           
            for (int i = 0; i < 4; i++) {
                int xx = cur.x + dx[i];
                int yy = cur.y + dy[i];
                if ((xx >= 0 && xx <= n+1) && (yy >= 0 && yy <= m+1)) {
                    dataSet next;
                    next.x = xx;
                    next.y = yy;
                    next.cnt = cur.cnt + 1;
                    next.check = false;
                    next.minute = 0;
                    printf("1111\n");
                    if (tt[xx][yy][cur.value] == false) {

                     
                        if (dataa[xx][yy] == '0') {
                            printf("222\n");
                            tt[cur.x][cur.y][cur.value] = true;
                            myQue.push(next);
                         
                        }
                        else if ((dataa[xx][yy]) >= 'A' && (dataa[xx][yy]) <= 'E') { //매장만날때

                            printf("5555\n");
                            if (p[dataa[xx][yy] - 'A' + 1] != 0) {
                                printf("3333\n");
                                next.check = true; //얜 이미 매장왔다는걸 표시 이동안해줌
                                next.minute = s[dataa[xx][yy] - 'A' + 1]; //이동한애한테 관람시간넣어줌
                                p[dataa[xx][yy] - 'A' + 1]--;
                                tt[cur.x][cur.y][cur.value] = true;
                            }
                            else { //꽉 차있을경우  이동하지 않고 그위치 그대로에서 cnt만 올려줌
                                printf("4444\n");
                                next.x = cur.x;
                                next.y = cur.y;
                                next.minute = 0;
                                tt[cur.x][cur.y][cur.value] = false;
                            }        
                            myQue.push(next);
                        }
                    } 
                }
            }

        }
        //dataa[cur.x][cur.y]='0';이거 꼭 필요한가? 필요한 케이스도 있겠지만
    }     // 이거가튼경우 0인것만 찾아가도록해줬으니 안해줘야함

    printf("last\n");



}

int main() {

    scanf_s("%d %d %d", &n, &m, &k);

    bfs();

    printf("%d", lastCnt);
    return 0;
}