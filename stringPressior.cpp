//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//int main() {
//
//	char data[1010];
//	char  tmp[1010] = {0,};
//	char tmpCnt = 0;
//	char indexCnt = 1;
//
//
//	fgets(data, 1010, stdin);
//
//
//	for (int i = 0; i < strlen(data) - 2; i++) {
//		if (data[i + 1] == data[i]) {
//			indexCnt++;
//		}
//		else {
//
//			if (indexCnt == 1) {
//				tmp[tmpCnt++] = data[i];
//			}
//			else {
//				if (indexCnt / 10 ==0) {
//					tmp[tmpCnt++] = indexCnt + '0';
//				}
//				else if(indexCnt / 10 < 10) {
//					tmp[tmpCnt++] = indexCnt / 10 + '0';
//					tmp[tmpCnt++] = indexCnt%10 + '0';
//				}
//				else {
//					tmp[tmpCnt++] = indexCnt / 100 + '0';
//					tmp[tmpCnt++] = indexCnt % 100/10 + '0';
//					tmp[tmpCnt++] = indexCnt % 100 % 10 + '0';
//				}
//
//				
//				tmp[tmpCnt++] = data[i];
//			}
//			indexCnt = 1;
//		}
//	}
//
//
//	for (int i = 0; i < tmpCnt; i++) {
//		printf("%c", tmp[i]);
//	}
//
//
//
//
//	return 0;
//}