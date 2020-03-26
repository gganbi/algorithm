//#include <stdio.h>
//
//
//struct Queue {
//    int data[300] = { 0, };
//    int front = -1;
//    int rear = -1;
//    int capacity = 0;
//
//    void create(int y) {
//        capacity = y;
//    }
//
//    int push(unsigned int val) {
//
//        if (rear >= capacity - 1) {
//            printf("Overflow");
//            return (-1);
//        }
//        data[++rear] = val;
//    }
//
//    int pop() {
//
//        if (front >= capacity - 1 || front == rear) {
//            printf("Underflow");
//            return -1;
//        }
//        return data[front++];
//    }
//
//    int peek() {
//        if (front == rear)
//            return -1;
//        else {
//            int temp = front + 1;
//
//            return data[temp];
//        }         
//    }
//};
//
//int main() {
//    int n, m;
//    int data[10000];
//
//    scanf_s("%d %d", &n, &m);
//    Queue s1;
//    s1.create(n);
//
//    for (int i = 1; i <= m; i++) {
//
//        int a, b;
//        scanf_s("%d", &a);
//
//        if (a == 1) {
//            scanf_s("%d", &b);
//            s1.push(b);
//        }
//        else if (a == 2) {
//            s1.pop();
//        }
//        else if (a == 3) {
//
//            if (s1.peek() == -1) {
//                printf("NULL\n");
//            }
//            else {
//                printf("peek : %d\n", s1.peek());
//            }
//        }
//    }
//    return 0;
//}