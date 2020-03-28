//#include<stdio.h>
//
////우선순위 큐 힙으로 구현
//
//const int max = 300;
//
//
//struct priorityQueue {
//
//	int data[max];
//	int len = 1;
//
//	void push(int x) {
//		data[len++] = x;
//
//		int inx = len - 1;
//
//		//루트가 1임 루트가 아니면 아래와같이 바꿔줌
//		while (inx>1) {
//			if (data[inx] < data[inx / 2]) {
//				int temp = data[inx];
//				data[inx] = data[inx / 2];
//				data[inx / 2] = temp;
//			}
//			else break;
//
//			inx = inx / 2;
//		}
//		
//	}
//
//	//맨밑끝에 있는애를 루트에다가둠
//	//맨끝은 없어짐
//	void pop() {
//		data[1] = data[len - 1];
//		data[len - 1] = 0;
//		len--;
//
//		int inx = 1;
//		//루트에 결국 맨끝에놈이 옴 
//		//이젠 이런애들을 위치에 맞게해주기
//		while (1) {
//			// 자식들중 우선순위가 높은친구 알아내야함
//			// 나와 계랑 우선순위 높은친구를 비교해서 자리바꿈
//			int pInx = -1; //우선순위가 높은 친구의 노드번호
//			//즉 자식 오른쪽 왼쪽 비교해서 더작은애를 pInx;
//
//
//			//우선 왼쪽 오른쪽 둘다 다있는지 확인해봐야함
//
//			// 둘다 자식없는경우
//			// 왼쪽자식만 있는경우
//			// 둘다 있는경우
//
//			//inx 가 어케보면 총 원소갯수
//
//			if (len <= inx * 2) { // ==경우는 어짜피 len이 넣으면 +1 되기때문에
//				break;
//			}//둘다 자식이 없는경우
//
//			else if ((1 <= inx * 2 && inx * 2 < len) && (len <= inx * 2 + 1)) {
//				pInx = inx * 2;
//			} //왼쪽자식만 존재함 
//			else {
//				if (data[inx * 2] < data[inx * 2 + 1]) {
//					pInx = inx * 2;
//				}
//				else {
//					pInx = inx * 2 + 1;
//				}
//			} //둘다존재함
//
//			if (data[inx] > data[pInx]) {
//				int temp = data[inx];
//				data[inx] = data[pInx];
//				data[pInx] = temp;
//
//				inx = pInx;
//			}
//			else {
//				break;
//			}
//			
//		}
//	
//	}
//	int top() {
//		return data[1];
//	}
//
//
//};
//
//int main() {
//	priorityQueue myPQ;
//
//	myPQ.push(3);
//	myPQ.push(1);
//	myPQ.push(2);
//
//	printf("%d\n", myPQ.top());
//	myPQ.pop();
//	printf("%d\n", myPQ.top());
//	myPQ.pop();
//	printf("%d\n", myPQ.top());
//	myPQ.pop();
//}