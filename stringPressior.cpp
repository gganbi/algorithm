//#include<stdio.h>
//#include<string.h>
//
//int main() {
//
//	char str[1010];
//	char str2[1010];
//	
//	fgets(str, sizeof(str), stdin);
//
//	int tempCount = 1;
//	int str2Count = 0;
//
//	for (int i = 0; i < strlen(str); i++) {
//		if (str[i + 1] == '\n') {
//
//			if (tempCount == 1) {
//				str2[str2Count++] = str[i];
//			}
//			else {
//				str2[str2Count++] = (char)tempCount;
//				str2[str2Count++] = str[i];
//			}
//			
//			break;
//		}
//		else if (str[i] == str[i+1]) {
//			tempCount++;
//		}
//		else {
//			if (tempCount == 1) {
//				str2[str2Count++] = str[i];
//			}
//			else {
//				str2[str2Count++] = (char)tempCount;
//				str2[str2Count++] = str[i];
//			}
//			
//		}
//	}
//	for (int i = 0; str2[i] != '\n'; i++) {
//		printf("%c", str2[i]);
//	
//	}
//
//	return 0;
//}