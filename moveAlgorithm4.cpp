//#include<stdio.h>
//#include<string.h>
//
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
//int kan[110000];
//int mal[110000];
//int whichMal[1100000] = { 0, };   //���ε���  () !!���ƴ�!!
//int malWhich[1100000] = { 0, }; // �ε����� ����ȣ  �ε����ϻ�
//int malValue[1100000] = { 0, }; // ���� ����ȣ
//int malSum[500000] = { 0, };
//bool check[500000] = { false, };
//
//int max = -2;
//bool lastCheck = false;
//
//
//int main() {
//
//	scanf_s("%d", &T);
//
//	for (int iiiii = 1; iiiii <= T; iiiii++) {
//
//		for (int i = 1; i <= 10; i++) {
//			scanf_s(" %d", &kan[i]);
//		}
//
//		for (int i = 1; i <= 10; i++) {
//			scanf_s(" %d", &mal[i]);
//		}
//
//
//
//		for (int i = 1; i <= 10; i++) {
//
//			whichMal[mal[i]];//�ش縻�� ������ġ
//
//			if (check[mal[i]] == false) {
//
//					malWhich[whichMal[mal[i]]] = 0;
//				malValue[malSum[mal[i]]] = 0;
//
//				bool specialCheck = false;
//				int specialIndex = 0;
//				for (int ii = 0; ii < 12; ii++) {
//					if (malSum[mal[i]] == specialArray[ii][0]) {
//						specialCheck = true;
//						specialIndex = ii;
//						break;
//					}
//				}
//				int moveWhich = 0;  //�̵� ��
//
//				if (specialCheck == true) { //Ư�����̽��ϰ��
//					moveWhich = specialArray[specialIndex][kan[i]]; //�̵��� ��ġ�� ��
//					whichMal[mal[i]] += kan[i];   //�ش縻�� �̵��� ��ġ  (�� �̵���)
//
//				}
//				else {  //�����ΰ��
//					int tmp = 0;
//
//					for (int iii = 1; iii <= 21; iii++) {
//						if (malSum[mal[i]] == map[iii]) {
//							tmp = iii;
//							break;
//						}
//					}
//
//					whichMal[mal[i]] = tmp+ kan[i];   //�ش縻�� �̵��� ��ġ  (�� �̵���)
//					moveWhich = map[whichMal[mal[i]]]; //�̵��� ��ġ�� ��
//							
//					mal[i] = tmp;
//					if (malSum != 0) {
//						whichMal[mal[i]] = tmp + kan[i]; //�̵��� ��ġ�� ����� �����Ͽ� Ȯ����
//					}
//					
//
//				};
//
//					printf("mal : !!   %d %d  %d  %d %d\n", mal[i], whichMal[mal[i]], malWhich[whichMal[mal[i]]],malWhich[2]);
//				if (specialCheck == true) { //Ư�����̽��ϰ��
//
//					if (moveWhich == 1000) {
//						malSum[mal[i]] = 1000;
//						check[mal[i]] = true;
//					}
//					else if (moveWhich == 0) {
//						malSum[mal[i]] = 1000;
//						check[mal[i]] = true;
//					}
//					else {
//
//						���⹮��
//						if (malValue[moveWhich] != 0) {  //�̵��� ��ġ�� ���� �����ϰ��ִٸ� ���ֱ�
//
//							lastCheck = true;
//							break;
//						}
//							malWhich[whichMal[mal[i]]] = mal[i];
//
//			
//						malSum[mal[i]] = moveWhich;  //���⼭ ������ ��
//						
//						malValue[moveWhich] = mal[i];
//
//					}
//
//				}
//				else {  //�����ΰ��
//					if (whichMal[mal[i]] > 21) {
//						malSum[mal[i]] = 1000;
//						check[mal[i]] = true;
//
//					}
//					else if (whichMal[mal[i]] == 21) {
//						malSum[mal[i]] = 1000;
//						check[mal[i]] = true;
//					}
//					else {
//
//						if (malValue[moveWhich] != 0) {  //�̵��� ��ġ�� ���� �����ϰ��ִٸ� ���ֱ�
//
//							lastCheck = true;
//							break;
//						}
//
//						malSum[mal[i]] = moveWhich;  //���⼭ ������ ��
//
//						malValue[moveWhich] = mal[i];
//					}
//				}
//
//			}
//		}
//		int ff = 0;
//		if (lastCheck == true) {
//
//			ff = -1;
//		}
//		else {
//
//			for (int mmm = 1; mmm <= 4; mmm++) {
//				if (malSum[mmm] == 1501 || malSum[mmm] == 1502) {
//					malSum[mmm] = 150;
//				}
//				ff += malSum[mmm];
//			}
//
//		}
//
//		if (ff > max) {
//			max = ff;
//		}
//
//
//		for (int i = 0; i < 110000; i++) {
//			whichMal[i] = 0;
//			malWhich[i] = 0;
//			malValue[i] = 0;
//		}
//		for (int i = 0; i < 500000; i++) {
//			malSum[i] = 0;
//			check[i] = false;
//
//		}
//		for (int i = 0; i < 110000; i++) {
//			kan[i] = 0;
//			mal[i] = 0;
//
//		}
//		lastCheck = false;
//	}
//
//
//	printf("%d", max);
//
//
//
//
//
//}