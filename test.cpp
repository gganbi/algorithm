#include <cstdio>
#include<queue>
using namespace std;



int n, m, k;
char dataa[60][60];

bool tt[15][15][110] = { false, };

bool checking[10] = { false };

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
    int valueCnt;  //��� �⺻Ű
};


int lastCnt = 0;
int valueCnt = 1;
void bfs() {
    queue <dataSet> myQue;
    for (int i = 1; i <= k; i++) {
        scanf_s("%d %d", &p[i], &s[i]); //p �����ο� s �����ð�
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            scanf_s(" %c", &dataa[i][j]);
            // �����ϸ� �������⵵ �̷������� 2�������ȿ� ���� ��� ����ü���ܼ�
            //�̰͸� ������ 

            if (dataa[i][j] == '1') {
                dataSet tmp;
                tmp.x = i;
                tmp.y = j;
                tmp.cnt = 0;
                tmp.check = false;
                tmp.valueCnt = valueCnt++;
                myQue.push(tmp);
            }
        }
    }

    while (!myQue.empty()) {

        dataSet cur = myQue.front();
        myQue.pop();
        if (cur.check == true) {  //���� ���忡�ͼ� �������λ���
            if (cur.minute != 1) { //mine=ue�� �ϳ��ٿ��ְ� ��ġ �״��
                dataSet next;
                next.cnt = cur.cnt + 1;
                next.minute = cur.minute - 1;
                next.x = cur.x;
                next.y = cur.y;
                next.check = true;
                next.valueCnt = cur.valueCnt;
                myQue.push(next);
                tt[cur.x][cur.y][cur.valueCnt] = false;
            }
            else {// ������������
           // p[1]  a���忡 �� ��� ��
           // p[2]  b���忡 �� ��� �� 

           // dataa[cur.x][cur.y]-'A'+1 �ε����� 
                p[dataa[cur.x][cur.y] - 'A' + 1]++; //�ο����� �÷���
                //�� �������� �׳� ���??  ����� ť�� �׳� �ȳ������
                checking[cur.valueCnt] = true;
                tt[cur.x][cur.y][cur.valueCnt] = false;

                int tmpCnt = 0;
                
                lastCnt++;

                for (int ii = 1; ii <= valueCnt; ii++) {
                    if (checking[ii] == true) {
                        tmpCnt++;
                    }
                }
                printf("ddddd %d %d %d %d %d %d %d \n", cur.x, cur.y, cur.cnt,cur.valueCnt, valueCnt - 1, lastCnt,tmpCnt);
             
                if (valueCnt-1 == tmpCnt) {
                    printf("mmmmm %d\n", lastCnt);
                }
            }
        }
        else {
            for (int i = 0; i < 4; i++) {
                int xx = cur.x + dx[i];
                int yy = cur.y + dy[i];
                if ((xx >= 1 && xx <= n) && (yy >= 1 && yy <= m)) {
                    dataSet next;
                    next.x = xx;
                    next.y = yy;
                    next.cnt = cur.cnt + 1;
                    next.check = false;
                    next.minute = 0;
                    next.valueCnt = cur.valueCnt;

                    if (dataa[xx][yy] == '0' && tt[xx][yy][next.valueCnt]==false) {
                        tt[xx][yy][next.valueCnt] = true;
                        myQue.push(next);
                    }
                    else if (((dataa[xx][yy]) >= 'A' && (dataa[xx][yy]) <= 'E') && tt[xx][yy][next.valueCnt] == false) { //���常����
                        if (p[dataa[xx][yy] - 'A' + 1] != 0) {
                            next.check = true; //�� �̹� ����Դٴ°� ǥ�� �̵�������
                            next.minute = s[dataa[xx][yy] - 'A' + 1]; //�̵��Ѿ����� �����ð��־���
                            p[dataa[xx][yy] - 'A' + 1]--;
                            tt[xx][yy][next.valueCnt] = true;
                        }
                        else { //�� ���������  �̵����� �ʰ� ����ġ �״�ο��� cnt�� �÷���
                            next.x = cur.x;
                            next.y = cur.y;
                            next.minute = 0;
                            next.check = false;
                        }     
                        myQue.push(next);
                    }
                }
            }

        }
        //dataa[cur.x][cur.y]='0';�̰� �� �ʿ��Ѱ�? �ʿ��� ���̽��� �ְ�����
    }     // �̰Ű�ư��� 0�ΰ͸� ã�ư������������� ���������

    printf("ddd\n");



}

int main() {

    scanf_s("%d %d %d", &n, &m, &k);

    bfs();

   // printf("%d", lastCnt);
    return 0;
}