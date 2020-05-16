//#include<cstdio>
//#include<string.h>
//
//
//
//int main() {
//
//	char a[1000];
//	char b[1000];
//	int tmp[1000] = {0,};
//
//	scanf_s("%s", a, 1000);
//	scanf_s("%s", b, 1000);
//
//	int aLen = strlen(a)-1;
//	int bLen = strlen(b)-1;
//
//	12345 a
//      334 b
//
//    // cnt 배열 생성
//    // 이중포문을 통한 b위주로 뭔가해줌
//	// 첫포문은 b로 해주고 두번째포문이 a로해줌
//    // 각 첫항은 cnt[1]  두번째항은 cnt[2] 세번째항은 cnt[3]
//
//
//	for (int i = bLen; i >= 0; i--) {
//		for (int j = aLen; j >= 0; j--) {
//		
//			int value = (a[i]-'0') * (a[j]-'0');
//			tmp[bLen -i+1 + (aLen - j + 1)]
//				aLen-j+1
//		}
//	}
//
//
//	printf("%d %d", aLen, bLen);
//}