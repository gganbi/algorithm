//#include<stdio.h>
//#include<string.h>
//
//struct SStackk {
//    int data[300] = {0,};
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
//        if (IsEmpty() == true) {
//            printf("NO\n");
//            return -1;
//        }
//           
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
//
//    SStackk ss;
//
//    ss.create(100);
//
//    char data[100];
//
//    scanf_s("%s", data,100);
//
//   // printf("%s", data);
//
//    for (int i = 0; i < strlen(data); i++) {
// 
//        if (data[i] == '(') {
//            ss.push(data[i]);
//        }
//        else {
//            if (ss.pop() == -1) {
//             
//                return 0;
//            }   printf("ddddd");
//        }
//    }
//
//    if (ss.peek() == -1) {
//        printf("YES");
//    }
//    else {
//        printf("NO");
//    }
// 
//
//
//	return 0;
//}