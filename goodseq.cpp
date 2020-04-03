//#include<stdio.h>
//int n;
//
//int result[100];
//bool check[100];
//int lastCnt = 0;
//void dd(int x,int y) {
//
//    if (x >= n) {
//        
//        for (int i = 0; i < x; i++) {
//            printf("%d", result[i]);
//        } printf("\n");
//    }
//    else {
//        for (int i = 1; i <= 3; i++) {         
//            if (y != i) {
//                result[x] = i;
//                if (x == 0) {
//                    dd(x + 1, i);
//                }
//
//                //x+1 수열크기
//                //m 간격비교값 크기
//
//                //해당 수열에서 중복되는애가 있는지 체크처리
//
//                bool chk = false;
//
//                for (int m = 1; m <= (x + 1) / 2; m++) {
//                    //m 간격비교값 크기
//                   
//                    for (int j = 0; j <n; j++) {
//                        // j 구간비교할때 첫항 
//                        //j+y+m<n
//                        int cnt = 0;
//                        for (int y = 0; y <m; y++) {
//                        //y 구간내에서 비교해주러감
//                            if (j + y + m < n) {
//                                if (result[j + y] == result[j + y + m]) {
//                                    cnt++;
//                                }
//                            }         
//                        }
//                        if (cnt >= x + 1) {// 다똑같다는것
//                            chk == true;
//
//                        }
//                    }       
//                }
//                if (chk == true) {
//                
//                }
//                else {
//                    dd(x + 1, i);
//                }
//           
//
//
//            }   
//        }
//    
//    }
//}
//
//
//int main() {
//
//    scanf_s("%d", &n);
//    dd(0, 0);
//
//}