//#include<stdio.h>
//#include<string.h>
//
//
//int n;
//int data[100];
//
//int map[110] = { 10000
//,5,10,15,20,50
//,30,35,40,45,100
//,55,60,65,70,75
//,80,85,90,95,500
//,1000
//,275,250,300,1501,175
//,1502,125,350,400
//,0,
//};
//int map2[110] = { 0,
//};
//
//
//
//int specialArray[12][6] = {
//	{50,275,250,300,1501,175},	
//	{100,1502,125,300,350,400},
//	{275,250,300,1501,175,75},
//	{250,300,1501,175,75,80},
//	{300,350,400,500,1000,0},
//	{1501,175,75,80,85,90},
//	{175,75,80,85,90,95},
//	{75,80,85,90,95,500},
//	{1502,125,300,350,400,500},
//	{125,300,350,400,500,1000},
//	{350,400,500,1000,0,0},
//	{400,500,1000,0,0,0}
//};
//
//int T;
//int kan[11];
//int mal[11];
//
//bool minusFlag[11] = { false, };
////bool minusFlag[11] = { false, };
//
//
//int tt = 0;
//int main() {
//
//	scanf_s("%d", &T);
//
//
//	int max = 0;
//	for (int ii = 1; ii <= T; ii++) {
//		//max = 0;
//		memset(map2, false, 110);
//		for (int i = 1; i <= 10; i++) {
//			scanf_s("%d", &kan[i]);
//		}
//
//		for (int i = 1; i <= 10; i++) {
//			scanf_s("%d", &mal[i]);
//		}
//		int sumIndex = 0;//������ġ�ε���
//		int indexValue = map[sumIndex];//������ġ��
//
//		int malScore[5] = { 0, };
//		bool malCheck[5] = { 0, };
//		for (int i = 1; i <= 10; i++) {
//			
//			if (minusFlag[ii] == true) {
//				max = -1;
//				break;
//			}
//			//sumIndex = kan[1];
//			for (int j = 1; j <= 4; j++) { //1��������
//
//				if (minusFlag[ii] == true) {
//					max = -1;
//					break;
//				}
//
//				if (mal[i] == j) {
//					if (malCheck[j] == false) {
//			
//						int originIndex = sumIndex;
//						if (i == 1) {
//							sumIndex = kan[1];
//							indexValue = map[sumIndex]; //���簪
//							map2[sumIndex] = j;
//							originIndex = sumIndex;
//							continue;
//						}
//	
//						//sumIndex //������ġ
//						//indexValue = map[sumIndex]; //���簪
//
//						//�ش� ĭ�� Ư�����̽��� ����
//						bool checkk = false;
//						int specialIndex = 0;
//
//						for (int m = 0; m < 12; m++) {
//							if (indexValue == specialArray[m][0]) {
//								checkk = true;
//								specialIndex = m;
//								break;
//							}
//						}
//
//						int nextIndex = 0;
//						int nextValue = 0;
//
//
//						if (checkk == true) { //Ư�����̽� �� ���
//							nextIndex = kan[i];
//							nextValue = specialArray[specialIndex][nextIndex];
//							sumIndex = sumIndex + nextIndex; //�����õ��� ���Ѱ�
//
//						}
//						else {//������̽�		
//
//							int changeIndex = 0;
//							for (int ii = 0; ii <= 50; ii++) {
//								if (sumIndex == map[ii]) {
//									changeIndex = ii;
//									break;
//								}
//
//							}
//							nextIndex = changeIndex + kan[i];
//							nextValue = map[nextIndex];
//							sumIndex = nextIndex;
//						}
//
//						if (map2[sumIndex] !=0 ) { //�̹� �ش���ġ�� ���� �־��� ���
//							
//						//	printf("�ش���ġ %d %d %d %d\n",i,j, originIndex, sumIndex);
//							minusFlag[ii] = true;
//						
//							break;
//							
//						}
//
//						map2[originIndex] = false;
//						map2[sumIndex] = true;
//
//						if (checkk == true) { //Ư�����̽� �� ���
//							if (nextValue == 1000) {
//								malScore[j] = 1000;
//								malCheck[j] = true;
//
//							}
//							else if (nextValue == 0) {
//								malScore[j] = 1000;
//								malCheck[j] = true;
//							}
//							else {
//								if (nextValue == 1501 || nextValue == 1502) {
//									nextValue = 150;
//								}
//								malScore[j] = nextValue;
//							}
//
//							indexValue = malScore[j];
//
//						}
//						else {//������̽�	
//							if (nextIndex == 21) {
//								malScore[j] = 1000;
//								malCheck[j] = true;
//							}
//							else if (nextIndex > 21) {
//								malScore[j] = 1000;
//								malCheck[j] = true;
//							}
//							else {
//								if (nextValue == 1501 || nextValue == 1502) {
//									nextValue = 150;
//								}
//								malScore[j] = nextValue;
//							}
//
//							indexValue = malScore[j];
//
//						}
//					}
//				}
//			}
//		}
//
//		/*if (max == -1) {
//			printf("%d\n", max);
//		}
//		else {*/
//			int lastSum = 0;
//			for (int i = 1; i <= 4; i++) {
//				lastSum += malScore[i];
//			}
//
//			if (lastSum > max) {
//				max = lastSum;
//
//			}
//			tt += max;
//
//		//	printf("%d\n", max);
//
//		//}
//	}
//
////	printf("%d\n", max);
//
//	if (tt == -1 * T) {
//		printf("-1");
//	}
//	else {
//		printf("%d\n", max);
//	}
//
//	
//	//�� -1��Ȳ�ذ�
//
//	
//
//
//
//}