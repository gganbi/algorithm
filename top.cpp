//#include <stdio.h>
//
//
//struct SStackk {
//    int data[500001] = {0,};
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
//    void push(int value) {
//        if (IsFull() == true)
//            printf("Overflow\n");
//        else
//            data[++top] = value;
//    }
//
//    int pop() {
//        if (IsEmpty() == true)
//            printf("Underflow\n");
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
//    int n;
//    int data[10000];
//
//    scanf_s("%d", &n);
//    SStackk s1;
//    s1.create(n);
//
//    for (int i = 0; i < n; i++) {
//        
//        for(int j)
//    
//    }
//
//
//
//    return 0;
//
//
//
//}