//#include <stdio.h>
//
//int sum = 0;
//
//void vv(int n, int k) {
//
//    if (n < k) {
//        return;
//    }
//    if (k==0 || k==n) {
//        sum += 1;
//        return;
//    }
//    vv(n - 1, k) ;
//    vv(n - 1, k - 1);
//    
//}
//
//int main() {
//    int n, m;
//
//    scanf_s("%d %d", &n, &m);
//
//
//    int twoCnt = 0;
//    int fiveCnt = 0;
//    //분자
//    for (int i = n; i>=1; i--) {
//        int temp = i;
//        while (true) {
//            if (temp % 2 == 0) {
//                twoCnt++;
//                temp /= 2;
//            }
//            else {
//                break;
//            }
//        }
//        int temp2 = i;
//        while (true) {
//            if (temp2 % 5 == 0) {
//                fiveCnt++;
//                temp2 /= 5;
//            }
//            else {
//                break;
//            }
//        }
//    }
//
//
//
//    int twoCnt2 = 0;
//    int fiveCnt2 = 0;
//    //분모
//    for (int i = m; i >= 1; i--) {
//        int temp = i;
//        while (true) {
//            if (temp % 2 == 0) {
//                twoCnt2++;
//                temp /= 2;
//            }
//            else {
//                break;
//            }
//        }
//        int temp2 = i;
//        while (true) {
//            if (temp2 % 5 == 0) {
//                fiveCnt2++;
//                temp2 /= 5;
//            }
//            else {
//                break;
//            }
//        }
//    }
//
//    for (int i = n-m; i >= 1; i--) {
//        int temp = i;
//        while (true) {
//            if (temp % 2 == 0) {
//                twoCnt2++;
//                temp /= 2;
//            }
//            else {
//                break;
//            }
//        }
//        int temp2 = i;
//        while (true) {
//            if (temp2 % 5 == 0) {
//                fiveCnt2++;
//                temp2 /= 5;
//            }
//            else {
//                break;
//            }
//        }
//    }
//
//
//    int lastTwo = twoCnt- twoCnt2;
//    int lastFive = fiveCnt - fiveCnt2;
//  
//   
//    if (lastTwo >= lastFive) {
//        printf("%d", lastFive);
//    }
//    else {
//        printf("%d", lastTwo);
//    }
//    return 0;
//}
//
//
