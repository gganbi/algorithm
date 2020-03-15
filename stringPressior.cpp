//#include<stdio.h>
//#include<string.h>
//
//int main() {
//
//	char data[1010];
//	char  tmp[1010] = { 0, };
//	int tmpCnt = 0;
//	int indexCnt = 1;
//	char ddd = 3;
//
//	fgets(data, 1010, stdin);
//
//	for (int i = 0; i < strlen(data) - 1; i++) {
//		if (data[i + 1] == data[i]) {
//			indexCnt++;
//		}
//		else {
//
//			if (indexCnt == 1) {
//				tmp[tmpCnt++] = data[i];
//			}
//			else {
//				if (indexCnt / 10 == 0) {
//					tmp[tmpCnt++] = indexCnt ;
//				}
//				else if (indexCnt / 10 < 10) {
//					tmp[tmpCnt++] = indexCnt / 10;
//					tmp[tmpCnt++] = indexCnt % 10;
//				}
//				else {
//					tmp[tmpCnt++] = indexCnt / 100 ;
//					tmp[tmpCnt++] = indexCnt % 100 / 10 ;
//					tmp[tmpCnt++] = indexCnt % 100 % 10 ;
//				}
//
//
//				tmp[tmpCnt++] = data[i];
//			}
//			indexCnt = 1;
//		}
//	}
//
//	for (int i = 0; i < tmpCnt; i++) {
//		printf("%c", tmp[i]);
//	}
//
//	char temp = data[strlen(data) - 1];
//
//	int cnt = 1;
//
//	if (strlen(data) != 1) {
//		for (int i = strlen(data) - 1; i >= 0; i--) {
//
//			if (temp == data[i - 1]) {
//				cnt++;
//			}
//			else {
//				break;
//			}
//		}
//
//		if (cnt == 1) {
//			printf("%c", temp);
//		}
//		else {
//			printf("%d%c", cnt, temp);
//		}
//
//	}
//	else {
//		printf("%c", data[0]);
//	}
//
//
//
//
//	return 0;
//}