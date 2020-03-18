//#include <stdio.h>
//
//int sum = 0;
//
//void vv(int n, int k) {
//
//    if (n < k) {
//        return;
//    }
//
//    if (k==0 || k==n) {
//        sum += 1;
//
//
//        return;
//    }
//
//    vv(n - 1, k) ;
//    vv(n - 1, k - 1);
//    
//}
//
//int main() {
//    int n, m;
//
//    scanf_s("%d %d", &n, &m);
//    vv(n, m);
//
//
//    printf("%d",sum);
//  
//    return 0;
//}
//
//
