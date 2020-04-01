//#include <stdio.h>
//#include <string.h>
//int main() {
//	char paren[50];
//	int paren_len;
//	int myStack[50], myTop;
//
//	scanf_s("%s", paren);
//	paren_len = strlen(paren);
//
//	for (int i = 0; i < paren_len; i++) {
//		//               -1                 -2
//
//
//		// 1.스택의 맨위에 여는괄호가 있는 경우
//		//스택에서 맨위에ㅣㅆ는 여는괄호를 pop
//		// 스택에다가 값을 push, () 2 [] 3
//		//  2. 스택의 두번째 위에 여는괄호 가있는 경우
//		//    스택에서 맨위값 두번째위값 pop
//		//  스택 push (x) -> 2x [x] ->3x
//		//  3. 스택의 맨위 둘다 값이ㅏㄹ면 합친다.
//		if (paren[i] == '(' || paren[i] == '[') {
//			if (paren[i] == '(') myStack[myTop++] = -1;
//			else myStack[myTop++] = -2;
//		}else {
//
//			if (myTop == 0) {
//				printf("0\n");
//			}
//
//			if (myStack[myTop - 1] == -1 || myStack[myTop - 1] == -2) {
//				if (paren[i] == ')' && myStack[myTop - 1] == -1) {
//					myStack[--myTop] = 0;
//					myStack[myTop++] = 2;
//				}else if (paren[i] == ']' && myStack[myTop - 1] == -2) {
//					myStack[--myTop] = 0;
//					myStack[myTop++] = 3;
//				}
//				else {
//					printf("0\n");
//					return 0;
//				}
//			}
//			else {
//				int myVlue = myStack[myTop - 1];
//				myStack[--myTop] = 0;
//				if (paren[i] == ')' && myStack[myTop - 1] == -1) {
//					myStack[--myTop] = 0;
//					myStack[myTop++] = 2*myVlue;
//				}
//				else if (paren[i] == ']' && myStack[myTop - 1] == -2) {
//					myStack[--myTop] = 0;
//					myStack[myTop++] = 3*myVlue;
//				}
//				else {
//					printf("0\n");
//					return 0;
//				}
//			}
//			if (myTop >= 2 && myStack[myTop - 1] > 0 && myStack[myTop - 2] > 0) {
//				myStack[myTop - 2] += myStack[myTop - 1];
//				myStack[--myTop] = 0;
//			}
//		}
//	}
//
//
//	if (myTop == 1 && myStack[0]>0) printf("%d\n",myStack[0]);
//
//	else printf("0");
//
//
//
//	return 0;
//	
//}