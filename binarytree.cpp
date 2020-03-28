//#include <stdio.h>
//
//const int max = 100;
//
//struct Tree {
//    int left;
//    int right;
//
//};
//
//Tree tree[max];
//
//void preorder(int x) {
//    if (tree[x].left == -1 && tree[x].right == -1) {
//        printf("%d ", x);
//    }
//    else {
//        printf("%d ", x);
//        if (tree[x].left != -1) {
//            preorder(tree[x].left);
//        }
//        if (tree[x].right != -1) {
//            preorder(tree[x].right);
//        }
//    }
//}
//
//void inorder(int x) {
//    if (tree[x].left == -1 && tree[x].right == -1) {
//        printf("%d ", x);
//    }
//    else {   
//        if (tree[x].left != -1) {
//            inorder(tree[x].left);
//        }
//        printf("%d ", x);
//        if (tree[x].right != -1) {
//            inorder(tree[x].right);
//        }
//    }
//}
//
//void postorder(int x) {
//    if (tree[x].left == -1 && tree[x].right == -1) {
//        printf("%d ", x);
//    }
//    else {
//        if (tree[x].left != -1) {
//            postorder(tree[x].left);
//        }
//        if (tree[x].right != -1) {
//            postorder(tree[x].right);
//        }
//        printf("%d ", x);
//    }
//}
//int main() {
//
//    //Please Enter Your Code Here
//    int n;
//
//    scanf_s("%d", &n);
//
//    for (int i = 0; i < n; i++) {
//        int a, b, c;
//
//        scanf_s("%d %d %d", &a, &b, &c);
//        tree[a].left = b;
//        tree[a].right = c;
//    }
//
//  /*  for (int i = 0; i < n; i++) {
//
//        printf("%d %d\n", tree[i].left, tree[i].right);
//    }*/
//    preorder(0);
//    printf("\n");
//    inorder(0);
//    printf("\n");
//    postorder(0);
//    printf("\n");
//
//    return 0;
//}