#include <cstdio>
#include <queue>
using namespace std;

int n, k;

int map[100][100];
int tmp[100][100];
int maxx = 0;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

// �ƽ��� ã��
// bfs�ѹ��ϰ��� �ٽ� map �ʱ�ȭ  �Ҷ����� �� �������̰� �����ϹǷ�


//�̰� �� �ϳ��� �ȱ����� ���̽�
//�ش� ����ü���� cnt�� �̵�Ƚ���� �ƴ� �� �װ��� �������
// �ٸ��� cnt���ִ°�
// ���⵵ �־�����ҵ�
// while����ͼ� cur�ҷ��ͼ� �����¿����ٶ����� cnt�̰� �Ǵ�
// max �������� ���� cnt�� max<=cnt �� ���Ű�����ָ�
// ť �ٵ��� �˾Ƽ� max�� �ִ밪 ������

// �� ��� �����̽�

// cur ���̽� �����¿���� ��������

// //�ڱ⺸�� �������� �� �ڸ��ʿ���� �� �ڸ��� �������� �� ���̽� �۾�����������
// �ڱ⺸�� ū �ָ� �߶���ҵ�



struct dataSet {
    int x;
    int y;
    int d;
    int cnt;
    int value;
    bool check;
};

int bfsMax = 0;//�ѹ� bfs ť �� ���� �׶��� �ִ� ���� ��

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
                if (cur.check == false) {  //�� �ȱ��� ���
                    if (cur.value > map[xx][yy]) {  //�������̽� 
                        if (cur.d == -1) { //��ó��������
                            next.cnt = cur.cnt;
                        }
                        else { //�ι�°���̽�����  
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
                    else { //ũ�ų� ���� ���̽� ���⼭ ����ִ»�Ȳ�߻�  (���⿡ ù���̽� �־��ֱ�)
                        for (int iii = 1; iii <= k; iii++) {
                            if ((next.value - iii < cur.value) && next.value != maxx) {  //�� ��쿡�� push ����
                                next.check = true;
                                next.value -= iii;
                                // �ΰ��� ��������� ���� ��� ó���� �߿�
                                // 1.�̷���  ������ ���ִ����̽� ????????? �̷��� 
                                // ť�� �� �־��ִ°� �ƴϰ� �������� ���̽�������
                                // for�������̽� ���ָ� �� que �ǻ���
                                // 2. ���ٶ� �� ���� ����⸸ �ƴϸ�� ������ 
                                //�����³� �� ��Ƶ���
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
                else {  //�� ���� ���  �׳� �������̽��� ���ָ�� (�̶� ù���̽��� ����)
                    if (cur.value > next.value) {  //�������̽� 
                        next.check = true;
                        if (cur.d == ii) {
                            //ȸ��Ƚ�� ��������
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

        printf("#%d %d\n", ttt, lastMax); //�� ���̽����̽��� ���� ��
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