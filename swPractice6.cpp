//#include <cstdio>
//using namespace std;
//
//
//int p, n, k;
//
//char dataa[100][100];
//
//
//// �� k������ ���� f
//// 2������ �������� �º��ͺ��� n-2
//// 1���� k
//
//
//// �� �������� �� �࿡�� �ִ� ũ�Ⱚ
//// ���� �࿡��  �ִ�ũ�Ⱚ ã�Ƽ� �װɷ� ����
//
//// 1<=   <=k �ؼ� �ش� ũ�� gr���� ������ �������� i �� �Ҷ�
////   k-i   �� ����������������  �ᱹ �������� �������� �߿�ġ ����
//
////�ѹ� ������ kĭ ��������  k-i ������ �̰� �����ؼ� �ּҰ� ���ϱ�
//bool check(int start) {  //2���͵�
//    int cnt = 0;
//    for (int j = 1; j <= n; j++) {   //������ ��
//        if (dataa[start][j] >= dataa[start - 1][j]) {
//            cnt++;
//        }
//    }
//    if (cnt == n) {
//        return true;
//    }
//    else {
//        return false;
//    }
//}
//
//int t;
//int main() {
//
//    scanf("%d", &t);
//
//    for (int tt = 1; tt <= t; tt++) {
//        scanf("%d %d %d", &p, &n, &k);
//
//        for (int i = 1; i <= p; i++) {
//            for (int j = 1; j <= n; j++) {
//                scanf(" %c", &dataa[i][j]);
//            }
//        }
//
//        int lastMin = 200;
//        for (int i = 1; i <= p - k + 1; i++) {
//
//            int start = i;
//
//            int value = 0;//�� ���̽��� ������
//            int cntt = 1;
//            for (int ii = start + 1; ii <= start + k - 1; ii++) {
//                if (check(ii)) {
//                    cntt++;
//                }
//                else {
//                    value = k - cntt;
//                    break;
//                }
//            }
//            if (lastMin >= value) {
//
//                lastMin = value;
//            }
//            //   printf("%d\n",value);
//
//        }
//        printf("#%d %d\n", tt, lastMin);
//        for (int ii = 0; ii < 100; ii++) {
//            for (int jj = 0; jj < 100; jj++) {
//                dataa[ii][jj] = '\0';
//            }
//        }
//
//    }
//
//
//
//    return 0;
//}
//
///*
// for(int ii=0;ii<100;ii++){
//        for(int jj=0;jj<100;jj++){
//          dataa[ii][jj]='\0';
//        }
//  }
//  */
//
//  /*
//   for(int i=0;i<=p+1;i++){
//      for(int j=0;j<=n+1;j++){
//        if(dataa[i][j]=='\0'){
//          printf("d");
//        }else{
//          printf("%c",dataa[i][j]);
//
//        }
//
//      }printf("\n");
//    }
//
//  */