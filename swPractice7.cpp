#include <cstdio>
#include<queue>

using namespace std;




int t;
int n, m;
char dataa[60][60] = { 0, };
int  tmp[60][60] = { 0, };  //그 bfs돌면서 cnt값들임몇번만에 갔는지
bool check[60][60] = { 0, };

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

struct dataSet {
    int x;
    int y;
    char value;
    int cnt;
    int originCnt;
};
void bfs() {
    queue<dataSet> myQue;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (dataa[i][j] != '0') {
                dataSet dataset;
                dataset.x = i;
                dataset.y = j;
                dataset.originCnt = 1;
                tmp[i][j] = dataset.originCnt;
                dataset.value = dataa[i][j];
                dataset.cnt = dataa[i][j] - 'A' + 1;
                myQue.push(dataset);
                //    printf("%c %d %d %d\n",data[i][j],i,j,dataset.cnt);
            }
        }
    }
    while (!myQue.empty()) {

        dataSet cur = myQue.front();
        //  check[cur.x][cur.y]=true;
        myQue.pop();

        for (int i = 0; i < 4; i++) {

            int xx = cur.x + dx[i];
            int yy = cur.y + dy[i];

            if ((xx >= 1 && xx <= n) && (yy >= 1 && yy <= m)) {
                dataSet next;
                if (cur.value == dataa[cur.x][cur.y]) {


                    //  결국 갱신되어진애도 push애들어가졌던게 문제였음
                    //이놈 못들어가게 막기
                    if (cur.cnt - 1 == 0) {
                        if (dataa[xx][yy] == '0'
                            || ((tmp[xx][yy] == cur.originCnt + 1) && (dataa[xx][yy] < cur.value))) {

                            next.x = xx;
                            next.y = yy;

                            dataa[xx][yy] = cur.value;
                            next.value = cur.value;
                            next.cnt = cur.value - 'A' + 1;
                            next.originCnt = cur.originCnt + 1;
                            tmp[xx][yy] = next.originCnt;
                            myQue.push(next);
                        }
                    }
                    else {
                        next.x = cur.x;
                        next.y = cur.y;
                        next.value = cur.value;
                        next.cnt = cur.cnt - 1;
                        next.originCnt = cur.originCnt + 1;
                    //    tmp[xx][yy] = next.originCnt;
                        myQue.push(next);
                    }
                    printf("\n");
                    for (int i = 1; i <= n; i++) {
                        for (int j = 1; j <= m; j++) {
                            printf("%d ", tmp[i][j]);
                        }
                        printf("\n");
                    }
                }    
            }
        }
    }
};


//한 큐에 전부넣음
// 구조체에 cnt 넣고 
//각 알바펫별로 그 순서값 넣는다

// 그래서 자기값 cnt-- 해주고
// 그리고나서 0일때 해당위치가 true이면 않넣어주고
// false이면 data[x][y]그 위치에 알파벳과 현재 나의 크기 비교하여
// 내가 크면 갱신해서 넣어주기
// nextcnt는 cur과 비슷하거나 자기껄로 push 해줌 원래 cur위치 check 함수 true
// 0아니면 cnt--만

//근데 넣어주려고 하는데 확정된 check truu칸이면 안넣어줌

//키부터 체크

// 키 되면 자기 확정하고 좌우상하 경우 종자뿌리기

//자기는 이미 확정하기 딴놈이 못닿도록 check


int main() {

    //Please Enter Your Code Here

    scanf_s("%d %d", &n, &m);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            scanf_s(" %c", &dataa[i][j]);
        }
    }
    bfs();

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            printf("%c ", dataa[i][j]);
        }
        printf("\n");
    }


    return 0;
}
/*
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      printf("%c ",data[i][j]);
   }
   printf("\n");
  }*/