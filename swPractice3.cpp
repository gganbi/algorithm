//#include<cstdio>
//#include<queue>
//using namespace std;
//
//
//int T;
//
//int n, m, k;
//
//int pungsunCnt = 0;
//// �ᱹ �ٴ� �����ϴ� ���̽��� ���� �ٸ��Ƿ� 
//// ���° ǳ���� �Ͷ߸����� ���ؾ���
//// 1 2 3 4 5 ���� ��͹���
//// 1. 
//// �� �������� ���̽��̴¹� �ɾ ���δ� ����
//// ����ü ��ȣ�ɾ���. 
//// �׷��� x>=r �� ��� �׶� bfs �ɾ��� 
//// �׶� bfs�� �� ���Ե� ����ü��ȣ�� x,y��ǥ�� ���� �־���
//// �׷��� ���Ƚ����ְ� check truue �Ⱦָ� ť�� �־���
//// ���� que �� ���Ҿ� 
//// �� ����  ǳ���� ������������
//// ���� �������� ������ ǳ�� ���鼭 bfs������
//// bfs �ٵ����� �� üũ check true �Ǵ� 
//// �̶� bfs�� ������ �ּ� �ٴ��� ��
//
//int dataa[20][20];
//int tmp[20][20];
//bool checkk[20][20] = { false, };
//
//struct dataSet {
//    int x;
//    int y;
//};
//dataSet pungsunData[20];
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
//int result[20] = { 0, };
//bool check[20] = { false, };
//
//void bfs(int result[], int cnt) {
//
//    int* resultt = result;
//    queue<dataSet> dataset;
//
//    for (int i = 0; i < cnt; i++) {
//        dataset.push(pungsunData[resultt[i]]);
//    }
//
//    while (!dataset.empty()) {
//        dataSet cur = dataset.front();
//        dataset.pop();
//        checkk[cur.x][cur.y] = true;
//        int cnt = dataa[cur.x][cur.y];
//
//        // while������ �ȳ����� ���� �����ε��� �ɸ���Ȳ����!! �� �� �����Ѿ�°͵�����!
//        for (int ii = 0; ii < 4; ii++) {
//            for (int jj = 1; jj <= cnt; jj++) {
//                int xx = cur.x + dx[ii] * jj;
//                int yy = cur.y + dy[ii] * jj;
//
//                if ((xx >= 1 && xx<=n) && (yy >= 1 && yy<=m)) {  //�̷� �������������ϼ��� �ִ�
//                    if (dataa[xx][yy] != -1 && checkk[xx][yy] == false) {
//                        checkk[xx][yy] = true;
//                        if (dataa[xx][yy] != 0) {// ť�� �־������ ��
//                            dataSet tmpp;
//                            tmpp.x = xx;  // num �־�����ϳ�??
//                            tmpp.y = yy;
//                            dataset.push(tmpp);
//                        }
//                      /*  printf("\n");
//                        for (int iii = 1; iii <= n; iii++) {
//                            for (int jjj = 1; jjj <= m; jjj++) {
//                                printf("%d ", checkk[iii][jjj]);
//                            }
//                            printf("\n");
//                        }
//                        printf("\n");*/
//
//                    }   
//                }       
//            }
//        }    
//    }
//   // printf("last!!\n");
//}
//
//
////x,y ������ ǳ����ȣ ������
//int getNum(int x, int y) {
//    int returnValue = 0;
//    for (int i = 1; i <= pungsunCnt; i++) {
//
//        if (pungsunData[i].x == x && pungsunData[i].y == y) {
//            returnValue = i;
//        }
//    }
//    return returnValue;
//}
//
//
//int lastValue = 100;
//
//void getResult(int x) {
//    if (x >= k) {  //���� ���̽����� �̰� �ϰ� �ʱ�ȭ����
//
//        bfs(result, x);
//        int cnttt = 0;
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= m; j++) {
//                if (checkk[i][j] == true) {
//                    cnttt++;
//                }
//            }
//        }
//
//        if (cnttt == n*m) { //�ش����̽����� �� �����ٴ°�
//            lastValue = 0;
//            return;
//        }
//
//
//        int bfsCnt = 0;
//
//        int temp[1];
//
//        //if (cnttt == 14) {
//        //    printf("dddd\n");
//        //}
//
//
//
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= m; j++) {
//                if (checkk[i][j] == false) {
//                    bfsCnt++;
//                    temp[0] = getNum(i, j);
//                    bfs(temp, 1);
//                    cnttt = 0;
//
//                    for (int ii = 1; ii <= n; ii++) {
//                        for (int jj = 1; jj <= m; jj++) {
//                            if (checkk[ii][jj] == true) {
//                                cnttt++;
//                            }
//                        }
//                    }
//                    if (cnttt == n*m) { //�ش����̽����� �� �����ٴ°�
//                        break;
//                    }
//                }
//            }
//            if (cnttt == n*m) { //�ش����̽����� �� �����ٴ°�
//                break;
//            }
//        }
//
//        if (bfsCnt < lastValue) {
//            lastValue = bfsCnt;
//        }
//
//        for (int i = 0; i <= 19; i++) {
//            for (int j = 0; j <= 19; j++) {
//                checkk[i][j] = false;
//            }
//        }
//
//        //�����̽� ���ذ��� �׷��� �ʱ�ȭ
//        return;
//    }
//
//
//    // 1 2 3 
//    // 1 3 2 �� �ȵǰ���
//    for (int i = 1; i <= pungsunCnt; i++) {
//        if (check[i] == false) {
//            check[i] = true;
//            result[x] = i;
//            if (x >= 1) {   
//                if (result[x - 1] < result[x]) {      
//                    getResult(x + 1);
//                    check[i] = false;   
//                }
//            }
//            else {
//                getResult(x + 1);
//                check[i] = false;
//            }   
//        }
//    }
//}
//
//
//int main() {
//
//    //Please Enter Your Code Here
//
//    //scanf("%d",&T);
//    scanf_s("%d %d %d", &n, &m, &k);
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            scanf_s("%d", &dataa[i][j]);
//            tmp[i][j] = dataa[i][j];
//            if (dataa[i][j] != 0) {
//                pungsunCnt++;
//                pungsunData[pungsunCnt].x = i;
//                pungsunData[pungsunCnt].y = j;
//            }
//        }
//    }
//
//   
//    for (int i = 0; i <= m + 1; i++) {
//        dataa[0][i] = -1;
//        dataa[n + 1][i] = -1;
//        tmp[0][i] = -1;
//        tmp[n + 1][i] = -1;
//    }
//    for (int i = 0; i <= n + 1; i++) {
//        tmp[i][0] = -1;
//        tmp[i][m + 1] = -1;
//    }
//    getResult(0);
//
//
//    printf("%d", lastValue);
//
//    return 0;
//}