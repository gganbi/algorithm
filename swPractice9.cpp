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
//        scanf_s("%d %d", &p[i], &s[i]); //p �����ο� s �����ð�
//    }
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            scanf_s(" %c", &dataa[i][j]);
//            // �����ϸ� �������⵵ �̷������� 2�������ȿ� ���� ��� ����ü���ܼ�
//            //�̰͸� ������ 
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
//        if (cur.check == true) {  //���� ���忡�ͼ� �������λ���
//            if (cur.minute != 0) { //mine=ue�� �ϳ��ٿ��ְ� ��ġ �״��
//                dataSet next;
//                next.cnt = cur.cnt + 1;
//                //cur.minute--;
//                next.minute = cur.minute - 1;
//                next.x = cur.x;
//                next.y = cur.y;
//                next.check = true;
//                myQue.push(next);
//            }
//            else {// ������������
//           // p[1]  a���忡 �� ��� ��
//           // p[2]  b���忡 �� ��� �� 
//
//           // dataa[cur.x][cur.y]-'A'+1 �ε����� 
//                p[dataa[cur.x][cur.y] - 'A' + 1]++; //�ο����� �÷���
//                //�� �������� �׳� ���??  ����� ť�� �׳� �ȳ������
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
//                        myQue.push(next);  // �궧�ű׷� �ٵ� ������ �׷� �ڱⰡ ���������� �������ִµ� ���ְ� �� �������� �ؾ����ݾ� �̰Ż�¦�ָ�
//                    }
//                    else if ((dataa[xx][yy]) >= 'A' && (dataa[xx][yy]) <= 'E') { //���常����
//
//                      
//
//                        if (dataa[xx][yy] - 'A' + 1 >= 3) {
//                            printf("%d\n", dataa[xx][yy] - 'A' + 1);
//                          }
//                       
//                        if (p[dataa[xx][yy] - 'A' + 1] != 0) {
//                            next.check = true; //�� �̹� ����Դٴ°� ǥ�� �̵�������
//                            next.minute = s[dataa[xx][yy] - 'A' + 1]; //�̵��Ѿ����� �����ð��־���
//                            p[dataa[xx][yy] - 'A' + 1]--;
//                            myQue.push(next);
//                        }
//                        else { //�� ���������  �̵����� �ʰ� ����ġ �״�ο��� cnt�� �÷���
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
//        //dataa[cur.x][cur.y]='0';�̰� �� �ʿ��Ѱ�? �ʿ��� ���̽��� �ְ�����
//    }     // �̰Ű�ư��� 0�ΰ͸� ã�ư������������� ���������
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