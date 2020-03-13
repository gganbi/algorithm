//#include<stdio.h>
//#include<string.h>
//
//int main() {
//
//	//Please Enter Your Code Here
//	int a;
//	char b[110][110];
//	char temp[110];
//	int indexMin = 0;
//
//
//	scanf_s("%d", &a);
//
//
//	for (int i = 1; i <= a; i++) {
//
//		scanf_s(" %s", b[i], 110);
//	}
//
//	for (int i = 1; i < a; i++) {
//
//		for (int j = i + 1; j <= a; j++) {
//			if (strcmp(b[i], b[j]) > 0) {
//				strcpy_s(temp, b[i]);
//				strcpy_s(b[i], b[j]);
//				strcpy_s(b[j], temp);
//				
//			}
//		}
//		
//	}
//
//	for (int i = 1; i <= a; i++) {
//		printf("%s\n", b[i]);
//	}
//
//	return 0;
//}
