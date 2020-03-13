//#include<stdio.h>
//#include<string.h>
//int main() {
//
//	char aa[1000];
//	char bb[1000];
//
//	fgets(aa, 1000, stdin);
//	fflush(stdin);
//	fgets(bb, 1000, stdin);
//
//	int diff = strlen(aa) - strlen(bb);
//
//	if (diff>0) {
//
//		bb[strlen(bb) - 1 + diff] = '\0';
//		for (int i = strlen(bb) - 2; i >= 0; i--) {
//			bb[i + diff] = bb[i];
//		}
//		for (int i = 0; i < diff; i++) {
//			bb[i] = '0' ;
//		}
//
//	}
//	else if (diff<0) {
//
//		aa[strlen(aa) - 1 + diff*-1] = '\0';
//		for (int i = strlen(aa) - 2; i >= 0; i--) {
//			aa[i + diff*-1] = aa[i];
//		}
//		
//		for (int i = 0; i < diff*-1; i++) {
//			aa[i] = '0' ;
//		}
//	}
//
//     printf("%s\n", aa);
//	 printf("%s", bb);
//	 
//
//	return 0;
//}
