//#include<stdio.h>
//#include<string.h>
//
//int topIndex = -1;
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
//    scanf_s("%s", data, 100);
//
//    char dd = 10;
//    ss.push(dd);
//
//
//    for (int i = 0; i < strlen(data); i++) {
//
//        if (data[i] == '(') {
//            ss.push(data[i]);
//            topIndex++;
//        }
//        else if (data[i] == '[') {
//            ss.push(data[i]);
//            topIndex++;
//        }
//        else if (data[i] == ')') {
//            if (ss.peek() == '(') {
//                ss.pop();
//                topIndex--;
//                ss.push(2);
//                topIndex++;
//            }
//            else  {
//
//                char first = ss.pop();
//                char second = ss.pop();
//                ss.push(second);
//                ss.push(first);
//
//                if (second == '(') {
//                    int temp = ss.peek();
//                    temp = 2 * temp;
//                    ss.pop();
//                    ss.push(temp);
//                }
//                else {
//                    first = ss.pop();
//                    second = ss.pop();
//                    ss.push(first + second);
//                    
//                }
//
//
//                
//            }
//        }
//        else if (data[i] == ']') {
//            if (ss.peek() == '[') {
//                ss.pop();
//                ss.push(3);
//            }
//            else {
//            
//                char first = ss.pop();
//                char second = ss.pop();
//                ss.push(second);
//                ss.push(first);
//
//                if (second == '[') {
//                    int temp = ss.peek();
//                    temp = 3 * temp;
//                    ss.pop();
//                    ss.push(temp);
//                }
//                else {
//                    first = ss.pop();
//                    second = ss.pop();
//                    ss.push(first + second);
//                }
//
//            }
//        }
//       // printf("%c %d\n", ss.peek(),ss.peek());
//    }
//
//    while (true) {
//        if (ss.peek() != -1) {
//        
//            printf("%d\n", ss.pop());
//        }
//    
//    }
//   
//    return 0;
//}