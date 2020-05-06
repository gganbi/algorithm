#include <cstdio>
#include<queue>

using namespace std;




int t;
int n, m;
char dataa[60][60] = { 0, };
int  tmp[60][60] = { 0, };  //�� bfs���鼭 cnt�����Ӹ������ ������
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


                    //  �ᱹ ���ŵǾ����ֵ� push�ֵ������� ��������
                    //�̳� ������ ����
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


//�� ť�� ���γ���
// ����ü�� cnt �ְ� 
//�� �˹��꺰�� �� ������ �ִ´�

// �׷��� �ڱⰪ cnt-- ���ְ�
// �׸����� 0�϶� �ش���ġ�� true�̸� �ʳ־��ְ�
// false�̸� data[x][y]�� ��ġ�� ���ĺ��� ���� ���� ũ�� ���Ͽ�
// ���� ũ�� �����ؼ� �־��ֱ�
// nextcnt�� cur�� ����ϰų� �ڱⲬ�� push ���� ���� cur��ġ check �Լ� true
// 0�ƴϸ� cnt--��

//�ٵ� �־��ַ��� �ϴµ� Ȯ���� check truuĭ�̸� �ȳ־���

//Ű���� üũ

// Ű �Ǹ� �ڱ� Ȯ���ϰ� �¿���� ��� ���ڻѸ���

//�ڱ�� �̹� Ȯ���ϱ� ������ ���굵�� check


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