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
//int whichMal[110] = { 0, };   //말인덱스  () !!값아님!!
//int malWhich[110] = { 0, }; // 인덱스에 말번호  인덱스일뿐
//int malSum[5] = { 0, };
//bool check[5] = { false, };
//
//int sum = 0;
//
//bool lastCheck = false;
//int main() {
//
//	scanf_s("%d", &T);
//
//
//	int max = 0;
//
//	//max = 0;
//	memset(map2, false, 110);
//	for (int i = 1; i <= T; i++) {
//		scanf_s("%d", &kan[i]);
//	}
//
//	for (int i = 1; i <= T; i++) {
//		scanf_s("%d", &mal[i]);
//	}
//
//	for (int i = 1; i <= T; i++) {
//
//		//whichMal[mal[i]];//해당말에 현재위치
//	
//		malWhich[whichMal[mal[i]]] = 0;
//
//		//printf("mal : !!   %d %d  %d \n", mal[i], whichMal[mal[i]], malWhich[whichMal[mal[i]]]);
//
//		
//		
//
//		bool specialCheck = false;
//		int specialIndex = 0;
//		for (int ii = 0; ii < 12; ii++) {
//			if (whichMal[mal[i]] == specialArray[ii][0]) {
//				specialCheck = true;
//				specialIndex = ii;
//				break;
//			}
//		}
//		int moveWhich = 0;  //이동 값
//
//		if (specialCheck == true) { //특이케이스일경우
//			moveWhich = specialArray[specialIndex][kan[i]]; //이동할 위치에 값
//			whichMal[mal[i]] += kan[i];   //해당말에 이동할 위치  (총 이동량)
//
//		}
//		else {  //정상인경우
//
//			whichMal[mal[i]] += kan[i];   //해당말에 이동할 위치  (총 이동량)
//			moveWhich = map[whichMal[mal[i]]]; //이동할 위치에 값
//			int tmp = 0;
//			for (int iii = 1; iii <= 21; iii++) {
//				if (moveWhich == map[iii]) {
//					tmp = iii;
//				}
//			}
//			//mal[i] = tmp;
//			whichMal[mal[i]] = tmp;  //이동할 위치값 제대로 교정하여 확정함
//
//		};
//
//	//	printf("mal : !!   %d %d  %d  %d %d\n", mal[i], whichMal[mal[i]], malWhich[whichMal[mal[i]]],malWhich[2]);
//		if (specialCheck == true) { //특이케이스일경우
//			
//			if (moveWhich == 1000) {
//				malSum[mal[i]] = 1000;
//				check[mal[i]] = true;
//			}
//			else if (moveWhich == 0) {
//				malSum[mal[i]] = 1000;
//				check[mal[i]] = true;
//			}
//			else {
//			
//				if (malWhich[whichMal[mal[i]]] != 0) {  //이동할 위치에 말이 존재하고있다면 없애기
//				//	printf("aaaaaa %d -1", moveWhich);
//
//						lastCheck = true;
//					break;
//				}
//				malWhich[whichMal[mal[i]]] = mal[i];
//
//
//				if (moveWhich == 1501 || moveWhich == 1502) {
//					malSum[mal[i]] = 150;
//				}
//				else {
//					malSum[mal[i]] = moveWhich;  //여기서 따져줌 말
//				}
//				
//			}
//
//		}
//		else {  //정상인경우
//			if (whichMal[mal[i]] >21) {
//				malSum[mal[i]] = 1000;
//				check[mal[i]] = true;
//
//			}
//			else if (whichMal[mal[i]] == 21) {
//				malSum[mal[i]] = 1000;
//				check[mal[i]] = true;
//			}
//			else {
//				
//				if (malWhich[whichMal[mal[i]]] != 0) {  //이동할 위치에 말이 존재하고있다면 없애기
//				//	printf("aaaaaaa %d -1",moveWhich);
//					lastCheck = true;
//					break;
//				}
//				malWhich[whichMal[mal[i]]] = mal[i];
//
//				if (moveWhich == 1501 || moveWhich == 1502) {
//					malSum[mal[i]] = 150;
//				}
//				else {
//					malSum[mal[i]] = moveWhich;  //여기서 따져줌 말
//				}		
//			}
//		}
//	}
//
//
//
//
//	if (lastCheck == true) {
//		printf("-1");
//
//	}
//	else {
//		int  ff = 0;
//		for (int i = 1; i <= 4; i++) {
//			ff += malSum[i];
//
//			//printf("value : %d ", malSum[i]);
//		}
//		printf("%d ",ff);
//		printf("\n");
//
//	
//	}
//
//	
//	
//
//}