//#include <stdio.h>
//
//
//
//int main() {
//    int n, m;
//    int data[10000];
//
//    int front = 0, rear = 0;
//    int cnt = 0;
//    
//
//    scanf_s("%d %d", &n, &m);
// 
//    for (int i = 1; i <= m; i++) {
//
//        int a, b;
//        scanf_s("%d", &a);
//
//        if (a == 1) {
//            scanf_s("%d", &b);
//            if (cnt >= n) printf("Overflow\n");
//            else {
//                data[rear] = b;
//
//                if (rear = n - 1) rear = 0;
//                else rear++;
//                cnt++;
//            }
//        }
//        else if (a == 2) {
//            if (cnt <= 0) printf("Underflow\n");
//            else {
//                data[front] = 0;
//
//                if (front = n - 1) front = 0;
//                else front++;
//                cnt--;
//            }
//        }
//        else if (a == 3) {
//
//            if (cnt <= 0) printf("Null\n");
//            else {
//                printf("%d", data[front]);
//            }
//        }
//    }
//    return 0;
//}