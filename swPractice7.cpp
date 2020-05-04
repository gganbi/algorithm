#include <cstdio>
#include <queue>
using namespace std;

int n, k;

int map[100][100];
int tmp[100][100];
int maxx = 0;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

// 맥스값 찾기
// bfs한번하고나서 다시 map 초기화  할때마다 그 높이줄이고 ㅈㄹ하므로


//이건 산 하나도 안깍을때 케이스
//해당 구조체에서 cnt는 이동횟수가 아닌 전 항과의 방향비교후
// 다를때 cnt해주는것
// 방향도 넣어줘야할듯
// while문들와서 cur불러와서 상하좌우해줄때부터 cnt이거 판단
// max 전역변수 만들어서 cnt값 max<=cnt 로 갱신계속해주면
// 큐 다돌면 알아서 max에 최대값 들어가있음

// 산 깍는 케케이스

// cur 케이스 상하좌우부터 뭔가해줌

// //자기보다 작은값은 더 자를필요없음 더 자르면 원래보다 더 케이스 작아질수있으니
// 자기보다 큰 애를 잘라야할듯



struct dataSet {
    int x;
    int y;
    int d;
    int cnt;
    int value;
    bool check;
};

int bfsMax = 0;//한번 bfs 큐 다 돌때 그때의 최대 꺽인 값

void bfs(int i, int j, int value) {

    queue<dataSet> myQue;
    dataSet firstData;
    firstData.x = i;
    firstData.y = j;
    firstData.cnt = 0;
    firstData.d = -1;
    firstData.value = value;
    firstData.check = false;
    myQue.push(firstData);

    while (!myQue.empty()) {
        dataSet cur = myQue.front();
        myQue.pop();
        for (int ii = 0; ii < 4; ii++) {

            dataSet next;

            int xx = cur.x + dx[ii];
            int yy = cur.y + dy[ii];
            next.x = xx;
            next.y = yy;
            next.d = ii;
            next.value = map[xx][yy];
            next.check = false;
            if ((xx >= 1 && xx <= n) && (yy >= 1 && yy <= n)) {
                if (cur.check == false) {  //산 안깍은 경우
                    if (cur.value > map[xx][yy]) {  //작은케이스 
                        if (cur.d == -1) { //맨처음시작한
                            next.cnt = cur.cnt;
                        }
                        else { //두번째케이스부터  
                            if (cur.d == ii) {
                                next.cnt = cur.cnt;
                            }
                            else {
                                next.cnt = cur.cnt + 1;
                            }
                        }
                        myQue.push(next);
                        if (bfsMax <= next.cnt) {
                            bfsMax = next.cnt;
                        }
                    }
                    else { //크거나 같은 케이스 여기서 깍아주는상황발생  (여기에 첫케이스 넣어주기)
                        for (int iii = 1; iii <= k; iii++) {
                            if ((next.value - iii < cur.value) && next.value != maxx) {  //이 경우에만 push 가능
                                next.check = true;
                                next.value -= iii;
                                // 두가지 고려사항이 생김 얘네 처리가 중요
                                // 1.이렇게  원래값 빼주는케이스 ????????? 이렇게 
                                // 큐에 다 넣어주는게 아니고 각ㄱ각의 케이스로해줌
                                // for문들어간케이스 해주면 각 que 또생성
                                // 2. 빼줄때 그 항이 꼭대기만 아니면됨 기존에 
                                //내려온놈 또 깍아도됨
                                if (cur.d == ii) {
                                    next.cnt = cur.cnt;
                                }
                                else {
                                    next.cnt = cur.cnt + 1;
                                }
                                myQue.push(next);
                                if (bfsMax <= next.cnt) {
                                    bfsMax = next.cnt;
                                }
                            }
                        }
                    }
                }
                else {  //산 깍은 경우  그냥 작은케이스만 가주면됨 (이땐 첫케이스가 없음)
                    if (cur.value > next.value) {  //작은케이스 
                        next.check = true;
                        if (cur.d == ii) {
                            //회전횟수 증가안함
                            next.cnt = cur.cnt;
                        }
                        else {
                            next.cnt = cur.cnt + 1;
                        }
                        myQue.push(next);
                        if (bfsMax <= next.cnt) {
                            bfsMax = next.cnt;
                        }
                    }
                }
            }
        }
    }
}


int lastMax = 0;
int t;
int main() {

    //Please Enter Your Code Here

    scanf_s("%d", &t);

    for (int ttt = 1; ttt <= t; ttt++) {
        scanf_s("%d %d", &n, &k);
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                scanf_s("%d", &map[i][j]);
                tmp[i][j] = map[i][j];
                if (map[i][j] >= maxx) {
                    maxx = map[i][j];
                }
            }
        }

        for (int i = 0; i <= n + 1; i++) {
            map[i][0] = -1;
            map[i][n + 1] = -1;
            tmp[i][0] = -1;
            tmp[i][n + 1] = -1;
        }
        for (int i = 0; i <= n + 1; i++) {
            map[0][i] = -1;
            map[n + 1][i] = -1;
            tmp[0][i] = -1;
            tmp[n + 1][i] = -1;
        }
      

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (maxx == map[i][j]) {
                    bfs(i, j, maxx);

                    if (lastMax <= bfsMax) {
                        lastMax = bfsMax;
                    }
                    for (int i = 1; i <= n; i++) {
                        for (int j = 1; j <= n; j++) {
                            map[i][j] = tmp[i][j];
                        }
                    }
                    bfsMax = 0;
                }
            }
        }

        printf("#%d %d\n", ttt, lastMax); //한 테이스케이스에 대한 값
        lastMax = 0;
        maxx = 0;

        for (int i = 0; i < 100; i++) {
            for (int j = 0; j < 100; j++) {
                map[i][j] = 0;
                tmp[i][j] = 0;
            }
        }
    }
    

};

/*
for(int i=0;i<=n+1;i++){
    for(int j=0;j<=n+1;j++){
      printf("%d",map[i][j]);
    }
    printf("\n");
  }*/