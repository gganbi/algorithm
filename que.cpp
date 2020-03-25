#include <stdio.h>


struct SStackk {
    int data[300] = { 0, };
    int top = -1;
    int capacity = 0;

    void create(int y) {
        capacity = y;
    }

    int IsEmpty() {
        if (top < 0)
            return true;
        else
            return false;
    }
    int IsFull() {
        if (top >= capacity - 1)
            return true;
        else
            return false;
    }

    void push(int value) {
        if (IsFull() == true)
            printf("Overflow\n");
        else
            data[++top] = value;
    }

    int pop() {
        if (IsEmpty() == true)
            printf("Underflow\n");
        else
            return data[top--];
    }

    int peek() {
        if (IsEmpty() == true)
            return -1;
        else
            return data[top];
    }


};

int main() {
    int n, m;
    int data[10000];

    scanf_s("%d %d", &n, &m);
    SStackk s1;
    s1.create(n);

    for (int i = 1; i <= m; i++) {

        int a, b;
        scanf_s("%d", &a);

        if (a == 1) {
            scanf_s("%d", &b);
            s1.push(b);
        }
        else if (a == 2) {
            s1.pop();
        }
        else if (a == 3) {

            if (s1.peek() == -1) {
                printf("NULL\n");
            }
            else {
                printf("peek : %d\n", s1.peek());
            }


        }

    }



    return 0;



}