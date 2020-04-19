//#include<cstdio>
//using namespace std;
//
//int n, m, k, t;
//
//int dataX[110]= { 0, };
//int dataY[110] = { 0, };
//int dataD[110] = { 0, };
//
//int dataCnt[110][110] = { 0, }; //해당번째 상자에 갯수
//int data[110][110][110]= { 0, };  //해당번째 상자에 정보
//
//int main() {
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			dataCnt[i][j] = 1;
//		}
//	}
//
//	scanf_s("%d %d %d %d", &n, &m, &k, &t);
//
//	for (int i = 1; i <= k; i++) {
//		int y, x, d;
//		scanf_s("%d %d %d", &y, &x, &d);	
//		dataY[i] = y;
//		dataX[i] = x;
//		int temp = dataCnt[dataY[i]][dataX[i]];
//	
//		dataD[i] = d;
//		data[y][x][temp] = i;
//		dataCnt[dataY[i]][dataX[i]]++;
//	}
//
//
//	for (int i = 1; i <= t; i++) {
//		
//		for (int j = 1; j <= k; j++) {
//			if (dataD[j] == 0) { //상  우선 첫번째애부터 이동시킴
//				int temp = dataY[j];
//				if (dataY[j] == 1) {
//					dataY[j]++;
//					dataD[j] = 1;
//				}
//				else {
//					dataY[j]--;
//				}
//
//				//자기 몇층인지 파악해야함
//				int myStare = dataCnt[temp][dataX[i]] - 1;
//				int moveStare = dataCnt[dataY[j]][dataX[i]] - 1;
//				//일단 다 다른곳에 있다고 가정
//
//				//위치정보셋팅
//
//				//  현재위치정보 없앰 및 현재위치 수 마이너스		
//				data[temp][dataX[j]][myStare] = 0;
//				dataCnt[temp][dataX[j]] -= 2; //0층됨
//
//				//  다음위치정보 추가 및 다음위치 수 플러스 근데 먼저 저거 해줘야함	
//				if (moveStare >= 1) {
//					//다음위치에 이미 누군가가 있었을때 처리	
//				}
//				else {//다음위치에 아무도 없었을때
//				
//				}
//				data[dataY[j]][dataX[j]][dataCnt[dataY[j]][dataX[j]]+1] = j;
//				dataCnt[dataY[j]][dataX[j]]++;
//
//				
//				//이젠 같은 위치에 있었던 애들 이동시키기
//
//				if (dataCnt[temp][dataX[j]] >= 1) { //원래 위치가 2개이상이였을경우
//
//					//원래위치에서 남아있는애들중 맨 위에놈
//					int origin=data[temp][dataX[j]][dataCnt[temp][dataX[j]]];
//
//					//이동한 위치놈 에서 맨 위에놈
//					int moveSite=data[dataY[j]][dataX[j]][dataCnt[dataY[j]][dataX[j]]];
//
//					//여기서 원래위치에 위에있던놈들까지 끌고가야함
//			
//				}
//		
//
//
//				for (int q = 1; q <= k; q++) {  //자기랑똑같은위치에 있는애 찾기
//					if (j != q) {
//						if ((temp == dataY[q]) && (dataX[j] == dataX[q])) {
//							if (dataY[q] == 1) {
//								dataY[q]++;
//								//dataD[q] = 1;
//							}
//							else {
//								dataY[q]--;
//							}
//						}
//					}
//				}
//			}
//			else if (dataD[j] == 1) { //하
//				int temp = dataY[j];
//				if (dataY[j] == n) {
//					dataY[j]--;
//					dataD[j] = 0;
//				}
//				else {
//					dataY[j]++;
//				}
//
//				for (int q = 1; q <= k; q++) {  //자기랑똑같은위치에 있는애 찾기
//					if (j != q) {
//						if ((temp == dataY[q]) && (dataX[j] == dataX[q])) {
//							if (dataY[q] == n) {
//								dataY[q]--;
//								//dataD[q] = 0;
//							}
//							else {
//								dataY[q]++;
//							}
//						}
//					}
//				}
//			}
//			else if (dataD[j] == 2) {//좌
//				int temp = dataX[j];
//				if (dataX[j] == 1) {
//					dataX[j]++;
//					dataD[j] = 3;
//				}
//				else {
//					dataX[j]--;
//				}
//				for (int q = 1; q <= k; q++) {  //자기랑똑같은위치에 있는애 찾기
//					if (j != q) {
//						if ((temp == dataX[q]) && (dataY[j] == dataY[q])) {
//							if (dataX[q] == 1) {
//								dataX[q]++;
//								//dataD[q] = 3;
//							}
//							else {
//								dataX[q]--;
//							}
//						}
//					}
//				}
//			}
//			else if (dataD[j] == 3) { // 우
//				int temp = dataX[j];
//				if (dataX[j] == m) {
//					dataX[j]--;
//					dataD[j] = 2;
//				}
//				else {
//					dataX[j]++;
//				}
//				for (int q = 1; q <= k; q++) {  //자기랑똑같은위치에 있는애 찾기
//					if (j != q) {
//						if ((temp == dataX[q]) && (dataY[j] == dataY[q])) {
//							if (dataX[q] == m) {
//								dataX[q]--;
//								//dataD[q] = 2;
//							}
//							else {
//								dataX[q]++;
//							}
//						}
//					}
//				}
//			}
//
//		}
//	}
//
//	for (int i = 1; i <= k; i++) {
//
//		printf("%d %d\n", dataY[i], dataX[i]);
//	
//	}
//
//
//}