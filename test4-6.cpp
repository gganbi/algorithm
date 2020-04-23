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
//int kan[11];
//int mal[11];
//int whichMal[110] = { 0, };   //말인덱스  () !!값아님!!
//int malWhich[110] = { 0, }; // 인덱스에 말번호  인덱스일뿐
//int malValue[110] = { 0, }; // 값에 말번호  
//int malSum[5] = { 0, };
//bool check[5] = { false, };
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
//			//whichMal[mal[i]];//해당말에 현재위치
//
//			if (check[mal[i]] == false) {
//
//				//	malWhich[whichMal[mal[i]]] = 0;
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
//				int moveWhich = 0;  //이동 값
//
//				if (specialCheck == true) { //특이케이스일경우
//					moveWhich = specialArray[specialIndex][kan[i]]; //이동할 위치에 값
//					whichMal[mal[i]] += kan[i];   //해당말에 이동할 위치  (총 이동량)
//
//				}
//				else {  //정상인경우
//
//					whichMal[mal[i]] += kan[i];   //해당말에 이동할 위치  (총 이동량)
//					moveWhich = map[whichMal[mal[i]]]; //이동할 위치에 값
//					int tmp = 0;
//					for (int iii = 1; iii <= 21; iii++) {
//						if (moveWhich == map[iii]) {
//							tmp = iii;
//						}
//					}
//					//mal[i] = tmp;
//					whichMal[mal[i]] = tmp;  //이동할 위치값 제대로 교정하여 확정함
//
//				};
//
//				//	printf("mal : !!   %d %d  %d  %d %d\n", mal[i], whichMal[mal[i]], malWhich[whichMal[mal[i]]],malWhich[2]);
//				if (specialCheck == true) { //특이케이스일경우
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
//						//여기문제
//						if (malValue[moveWhich] != 0) {  //이동할 위치에 말이 존재하고있다면 없애기
//
//							lastCheck = true;
//							break;
//						}
//						//	malWhich[whichMal[mal[i]]] = mal[i];
//
//						if (moveWhich == 1501 || moveWhich == 1502) {
//							malSum[mal[i]] = 150;
//						}
//						else {
//							malSum[mal[i]] = moveWhich;  //여기서 따져줌 말
//						}
//						malValue[moveWhich] = mal[i];
//
//					}
//
//				}
//				else {  //정상인경우
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
//						if (malValue[moveWhich] != 0) {  //이동할 위치에 말이 존재하고있다면 없애기
//
//							lastCheck = true;
//							break;
//						}
//
//						if (moveWhich == 1501 || moveWhich == 1502) {
//							malSum[mal[i]] = 150;
//						}
//						else {
//							malSum[mal[i]] = moveWhich;  //여기서 따져줌 말
//						}
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
//		for (int i = 0; i < 110; i++) {
//			whichMal[i] = 0;
//			malWhich[i] = 0;
//			malValue[i] = 0;
//		}
//		for (int i = 0; i < 5; i++) {
//			malSum[i] = 0;
//			check[i] = false;
//			
//		}
//		for (int i = 0; i < 11; i++) {
//			kan[i] = 0;
//			mal[i] = 0;
//
//		}
//		lastCheck = false;
//	}
//
//
//		printf("%d", max);
//	
//
//	
//
//	
//}