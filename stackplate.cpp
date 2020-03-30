//#include <stdio.h>
//#include <string.h>
//
//
//struct SStackk {
//    char data[300];
//    int top = -1;
//    int capacity = 0;
//
//    void create(int y) {
//        capacity = y;
//    }
//
//    int IsEmpty() {
//        if (top < 0)
//            return true;
//        else
//            return false;
//    }
//    int IsFull() {
//        if (top >= capacity - 1)
//            return true;
//        else
//            return false;
//    }
//
//    int push(int value) {
//        if (IsFull() == true)
//            return -1;
//        else
//            data[++top] = value;
//    }
//
//    int pop() {
//        if (IsEmpty() == true)
//            return -1;
//        else
//            return data[top--];
//    }
//
//    int peek() {
//        if (IsEmpty() == true)
//            return -1;
//        else
//            return data[top];
//    }
//
//
//};
//
//int main() {
//    int n, m;
//    char data[10000];
//
//    scanf_s("%s",data,10000);
//
//    SStackk s1;
//    s1.create(strlen(data));
//    int cnt = 0;
//
//    int check[10000] = {0,};
//    int i = 0;
//    while (true) {
//        if (cnt >= 25) {
//           
//            break;
//          
//        }
//
//        if (data[i] != s1.peek()) {
//            s1.push('a' + cnt++);
//            check[i] = 1;
//           
//         //   printf("push\n");
//        }
//        else {
//            i++;
//            s1.pop();
//          //  printf("pop\n");
//            check[i] = 2;
//
//            if (i == strlen(data)) {
//                break;
//            }
//        }
//    }
//
//    for (int i = 0; i < strlen(data); i++) {
//
//        if (cnt >= 25) {
//
//            printf("impossible\n");
//            break;
//
//        }
//        if (check[i] == 1) {
//            printf("push\n");
//        }
//        else if (check[i] == 2) {
//            printf("pop\n");
//        }
//    }
//
// 
//
//
//
//    return 0;
//
//
//
//}