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
//        bool test = false;
//
//     /*   if (result[0] == 1 && result[1] == 2 && result[2] == 1
//            && result[3]==3 && result[4]==1 && result[5]==2
//            && result[6]==3 && result[7]==1 && result[8]==3) {
//        
//            printf("dddd");
//        }*/
//
//        int temp;
//        if (n % 2 == 0) {
//            temp = n / 2;
//        }
//        else {
//            temp = n / 2 + 1;
//        }
//  
//        for (int i = 2; i <= temp; i++) {
//       
//
//            for (int m = 0; m <= n - i*2; m++) {
//                int cnt = 0;
//                for (int j = 0; j < i; j++) {
//
//                    if (result[m+j] == result[m+i+j]) {
//                        cnt++;
//                    }
//                }
//                if (cnt == i) {
//                  //  printf("Test :: %d %d\n", i, m);
//                    test = true;
//                    break;
//                }
//            }    
//        }
//
//        if (test == false) {
//
//            if (lastCnt == 0) {
//                for (int i = 0; i < x; i++) {
//                    printf("%d", result[i]);
//                }printf("\n");
//            }lastCnt++;
//            
//        }  
//    }
//    else {
//        for (int i = 1; i <= 3; i++) {         
//            if (y != i) {
//                result[x] = i;
//                dd(x + 1, i);
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