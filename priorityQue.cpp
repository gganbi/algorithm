//#include<stdio.h>
//
////�켱���� ť ������ ����
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
//		//��Ʈ�� 1�� ��Ʈ�� �ƴϸ� �Ʒ��Ͱ��� �ٲ���
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
//	//�ǹس��� �ִ¾ָ� ��Ʈ���ٰ���
//	//�ǳ��� ������
//	void pop() {
//		data[1] = data[len - 1];
//		data[len - 1] = 0;
//		len--;
//
//		int inx = 1;
//		//��Ʈ�� �ᱹ �ǳ������� �� 
//		//���� �̷��ֵ��� ��ġ�� �°����ֱ�
//		while (1) {
//			// �ڽĵ��� �켱������ ����ģ�� �˾Ƴ�����
//			// ���� ��� �켱���� ����ģ���� ���ؼ� �ڸ��ٲ�
//			int pInx = -1; //�켱������ ���� ģ���� ����ȣ
//			//�� �ڽ� ������ ���� ���ؼ� �������ָ� pInx;
//
//
//			//�켱 ���� ������ �Ѵ� ���ִ��� Ȯ���غ�����
//
//			// �Ѵ� �ڽľ��°��
//			// �����ڽĸ� �ִ°��
//			// �Ѵ� �ִ°��
//
//			//inx �� ���ɺ��� �� ���Ұ���
//
//			if (len <= inx * 2) { // ==���� ��¥�� len�� ������ +1 �Ǳ⶧����
//				break;
//			}//�Ѵ� �ڽ��� ���°��
//
//			else if ((1 <= inx * 2 && inx * 2 < len) && (len <= inx * 2 + 1)) {
//				pInx = inx * 2;
//			} //�����ڽĸ� ������ 
//			else {
//				if (data[inx * 2] < data[inx * 2 + 1]) {
//					pInx = inx * 2;
//				}
//				else {
//					pInx = inx * 2 + 1;
//				}
//			} //�Ѵ�������
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