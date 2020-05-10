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
                tmp.value = valueCnt++;
                myQue.push(tmp);
            }
        }
    }

    while (!myQue.empty()) {

        dataSet cur = myQue.front();
        myQue.pop();
        if (cur.check == true) {  //���� ���忡�ͼ� �������λ���
            printf("!!!!!!!     dnhcd\n");
            if (cur.minute != 0) { //mine=ue�� �ϳ��ٿ��ְ� ��ġ �״��
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
            else {// ������������
                p[dataa[cur.x][cur.y] - 'A' + 1]++; //�ο����� �÷���
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
                        else if ((dataa[xx][yy]) >= 'A' && (dataa[xx][yy]) <= 'E') { //���常����

                            printf("5555\n");
                            if (p[dataa[xx][yy] - 'A' + 1] != 0) {
                                printf("3333\n");
                                next.check = true; //�� �̹� ����Դٴ°� ǥ�� �̵�������
                                next.minute = s[dataa[xx][yy] - 'A' + 1]; //�̵��Ѿ����� �����ð��־���
                                p[dataa[xx][yy] - 'A' + 1]--;
                                tt[cur.x][cur.y][cur.value] = true;
                            }
                            else { //�� ���������  �̵����� �ʰ� ����ġ �״�ο��� cnt�� �÷���
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
        //dataa[cur.x][cur.y]='0';�̰� �� �ʿ��Ѱ�? �ʿ��� ���̽��� �ְ�����
    }     // �̰Ű�ư��� 0�ΰ͸� ã�ư������������� ���������

    printf("last\n");



}

int main() {

    scanf_s("%d %d %d", &n, &m, &k);

    bfs();

    printf("%d", lastCnt);
    return 0;
}