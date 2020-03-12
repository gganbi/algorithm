//#include<stdio.h>
//
//
//int main() {
//
//    int aa[1001] = { 0, };
//
//    int n;
//    int cmt[1001]= { 0, };
//    scanf_s("%d", &n);
//
//    for (int i = 1; i <= n; i++) {
//        scanf_s("%d", &aa[i]);
//    }
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            if (i == aa[j]) {
//                cmt[i]++;
//            }
//        }    
//    }
//
//    int count = 0;
//
//    for (int i = 1; i <= n; i++) {
//        if (cmt[i] >2) {
//            count += 2;
//        }
//        else {
//            count += cmt[i];
//        }
//        
//    }
//
//    if (count >= 6) {
//        printf("YES");
//    }
//    else {
//        printf("NO");
//    }
//
//
//
//
//
//
//    return 0;
//}
//
