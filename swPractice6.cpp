//#include <cstdio>
//using namespace std;
//
//
//int p, n, k;
//
//char dataa[100][100];
//
//
//// 각 k구간씩 나눔 f
//// 2중포문 위에구간 걔부터부터 n-2
//// 1부터 k
//
//
//// 각 구간에서 각 행에서 최대 크기값
//// 다음 행에서  최대크기값 찾아서 그걸로 수정
//
//// 1<=   <=k 해서 해당 크기 gr지수 맞춰진 갯수구함 i 라 할때
////   k-i   즉 맞춰진갯수까지만  결국 맞춰지는 알파펫은 중요치 않음
//
////한번 행으로 k칸 돌때마다  k-i 값생성 이거 저장해서 최소값 구하기
//bool check(int start) {  //2부터됨
//    int cnt = 0;
//    for (int j = 1; j <= n; j++) {   //수강생 수
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
//            int value = 0;//각 케이스에 최종값
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