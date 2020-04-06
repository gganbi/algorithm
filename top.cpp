//#include <stdio.h>
//
//
//struct sstackk {
//    int data[500] = { 0, };
//    int top = -1;
//    int capacity = 0;
//
//    void create(int y) {
//        capacity = y;
//    }
//
//    int isempty() {
//        if (top < 0)
//            return true;
//        else
//            return false;
//    }
//    int isfull() {
//        if (top >= capacity - 1)
//            return true;
//        else
//            return false;
//    }
//
//    void push(int value) {
//        if (isfull() == true)
//            printf("overflow\n");
//        else
//            data[++top] = value;
//    }
//
//    int pop() {
//        if (isempty() == true)
//            return -1;
//        else
//            return data[top--];
//    }
//
//    int peek() {
//        if (isempty() == true)
//            return -1;
//        else
//            return data[top];
//    }
//
//
//};
//int n;
//int data[10000];
//int tmp[10000];
//int main() {
//
//
//    scanf_s("%d", &n);
//    sstackk s1,temp;
//    s1.create(n);
//
//    for (int i = 1; i <=n; i++) {
//        scanf_s("%d", &data[i]);
//
//        if (i == 1) {
//            s1.push(i);
//            printf("0 ");
//        }
//        else {
//            
//            while (true) {
//                if (s1.peek() == -1) {
//                    s1.push(i);
//                    printf("0 ");
//                    break;
//                }
//
//                if (data[s1.peek()] <=data[i]) {        
//                    s1.pop();
//                }
//                else {
//                    printf("%d ",s1.peek());
//                    s1.push(i);
//                    break;
//                }
//            }
//        }
//    }
//    return 0;
//}