//#include <cstdio>
//#include<queue>
//using namespace std;
//
//int n, m, k, t;
//
//int dataa[100][100];
//int map[100][100] = { 0, };  // 1,2,3, ǥ���� map
//int tmp[100][100]; //����� �ʱ�ȭ�뵵
//int cnt[100] = { 0, };
//int cntCnt = 0;
//bool check[100][100] = { false, }; //�����
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
////���� �Ϻ��� ���� �������� �ڵ弼�ΰ�� ��������!
//// �ᱹ �����Եȴ�
//
//// 1. �켱 ��� �� bfs ���κκе���
//// �� ���̽����� �ľ�
//
//// �ٸ� �� ���� 111 222 33 44 �Ǵ� �迭������� bfs�� �̿��ؼ�
//// �ٵ� ����� �ٽÿ� �� cur ���̽� ������ 2�����迭�� 0üũ 0 ������ �׶� ����
//// ���� �Ÿ�
//
//// �� 1,2,3,4,�Ÿ��� cnt �迭�� ���� 1�����迭
//
//// 3�������� �����Ÿ��� �ϰ�  ��ü �� ���鼭 1�Ǵ�2. 3 
//// ��ư �� ���� ������ if�ɰ� �׶� ��������ġ���� 1�̸� cnt�迭 ++ �� �Ÿ��� ���� ����
//
//// ���� �� �Ÿ��� ���� �� ���س���
//
//// ����Լ� ���� 
//// ���ϰ��� ����ġ ��  ��ǲ���� 1���� ���� ���̴����� ���� �־�鼭 ex cnt[1] 
//// ���� ���� ����>=���ϰ� �ϸ鼭 ���� �ٵ��� �׶��� �ε�����
//// �׷� 1���� �� �ε������� cnt ���� ���� �����̼� ��ü ��
//
//
//
////���� ���뿡��  ���°��̸� �� �ʱ�ȭ�����ְ� ���� max�迭���� �־��ְ�
//// �ٵ��鼭 max< �� ó�����༭ �ƽ��� ���س�
//
//
//
//
//int tt = 1;
//int getResult(int r) {
//
//
//    if (r == 0) {
//
//        return 0;
//    }
//    int value = r * cnt[tt++];
//     value += getResult(r - 1);
//
//
//
//    return value;
//
//}
//
//struct dataSet {
//    int x;
//    int y;
//    int value;
//    int cnt;
//
//};
//
//// bool check �迭�� ������� TRUE
//// false �κκе��鼭 
//
//int lastIndex = 0;
//void bfs(int x, int y) {
//
//    dataSet dataset;
//    dataset.x = x;
//    dataset.y = y;
//    dataset.cnt = 0;
//    dataset.value = 0;
//    map[1][1] = 0;
//
//    queue<dataSet> queData;
//    queData.push(dataset);
//
//    while (!queData.empty()) {
//
//        dataSet cur = queData.front();
//        queData.pop();
//        bool check = false;
//        int tmpcnt = 0;
//        for (int i = 0; i < 4; i++) {
//
//           
//            int xx = cur.x + dx[i];
//            int yy = cur.y + dy[i];
//
//            if (map[xx][yy] == 0) {
//
//                if (xx == x && yy == y) {
//                
//                }
//                else {
//
//                    if ((xx >= 1 && xx <= n) && (yy >= 1 && yy <= m)) {
//                        check = false;
//                        dataSet next;
//                        next.x = xx;
//                        next.y = yy;
//                        next.cnt = cur.cnt + 1;
//                        map[xx][yy] = next.cnt;
//                        queData.push(next);
//
//                        if (lastIndex <= next.cnt) {
//                            lastIndex = next.cnt;
//                        }
//                    }
//
//                   
//                   // printf("%d\n", lastIndex);
//                   
//                }
//                
//            }
//        }
//       
//    }
//};
//
//
//
//int main() {
//
//    //Please Enter Your Code Here
//
//    scanf_s("%d", &t);
//
//
//    for (int iiii = 1; iiii <= t; iiii++) {
//
//        int lastttt = 0;
//        scanf_s("%d %d %d", &n, &m, &k);
//
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= m; j++) {
//                scanf_s("%d", &dataa[i][j]);
//            }
//        }
//
//        for (int i = 0; i <= n + 1; i++) {
//            dataa[i][0] = -1;
//            dataa[i][m + 1] = -1;
//            tmp[i][0] = -1;
//            tmp[i][m + 1] = -1;
//            map[i][0] = -1;
//            map[i][m + 1] = -1;
//        }
//        for (int i = 0; i <= m + 1; i++) {
//            dataa[0][i] = -1;
//            dataa[n + 1][i] = -1;
//            tmp[0][i] = -1;
//            tmp[n + 1][i] = -1;
//            map[0][i] = -1;
//            map[n + 1][i] = -1;
//        }
//
//        //  bfs(1, 2);
//
//
//        for (int iii = 1; iii <= n; iii++) {
//
//            for (int jjj = 1; jjj <= m; jjj++) {
//                bfs(iii, jjj);
//                //    bfs(1, 1);
//                for (int i = 1; i <= lastIndex; i++) {
//                    for (int j = 1; j <= n; j++) {
//                        for (int k = 1; k <= m; k++) {
//
//                            if (map[j][k] == i) {
//                                if (dataa[j][k] == 1) {
//                                    cnt[i]++;
//                                }
//                            }
//                        }
//                    }
//                }
//
//                for (int i = 0; i <= n + 1; i++) {
//                    for (int j = 0; j <= m + 1; j++) {
//                        map[i][j] = 0;
//                    }
//                }
//                int ribonIndex = 0; // �ִ밡���� ���̴� ��
//                tt = 1;
//                for (int i = 1; i <= lastIndex; i++) {
//
//                    int re = getResult(i);
//                    tt = 1;
//                    if (re <= k) {
//                        //    printf("safdsd %d \n",re);
//
//
//                        ribonIndex = i;
//                    }
//                }
//                // printf("last : ! %d", ribonIndex);
//
//                int lastsumm = 0;
//                for (int i = 1; i <= ribonIndex; i++) {
//                    lastsumm += cnt[i];
//                }
//
//                if (lastttt <= lastsumm) {
//                    lastttt = lastsumm;
//                }
//
//                //    printf("%d \n", lastsumm);
//
//                lastIndex = 0;
//                for (int i = 1; i <= 100; i++) {
//                    cnt[i] = 0;
//                }
//
//            }
//        }
//
//        printf("#%d %d\n",iiii, lastttt);
//   
//    }
//   
//
// /* 
//    for (int i = 1; i <= lastIndex; i++) {
//    
//        printf("%d ", cnt[i]);
//    }
//    printf(" \n");
//  */
//
//    
//
//    //for (int i = 1; i <= n; i++) {
//    //    for (int j = 1; j <= m; j++) {
//    //        bfs(i, j);
//    //    }
//    //}
//
//
//
//    return 0;
//}
//
//
///*
//for(int i=0;i<=n+1;i++){
//      for(int j=0;j<=m+1;j++){
//        printf("%d",dataa[i][j]);
//      }printf("\n");
//  }
//  */