//#include <cstdio>
//#include<string.h>
//
//
//
//int main() {
//
//	char dataa[1010];
//	char value[1010];
//
//	int cnttt = 0;
//	scanf_s("%s", dataa, 1010);
//
//	int size = strlen(dataa);
//	dataa[size] = '0';
//	size += 1;
//
//	int cnt = 1;
//	for (int i = 0; i <size-1; i++) {
//	
//		
//		if (dataa[i] == dataa[i + 1]) {
//			cnt++;
//		}
//		else {
//			if (cnt != 1) {		
//				value[cnttt++] = cnt+'0';
//				value[cnttt++] = dataa[i];
//			}
//			else {
//				value[cnttt++] = dataa[i];
//			}
//			cnt = 1;
//		}
//	}
//
//
//	for (int i = 0; i < cnttt; i++) {
//		printf("%c", value[i]);
//	}
//
//
//	
//
//}