//#include<stdio.h>
//#include<string.h>
//
//int main() {
//
//	char aa[120], bb[120];
//
//	int cnt[101] = {0,};
//
//	
//	scanf_s("%s", aa, 120);
//	scanf_s("%s", bb, 120);
//
//	for (int i = strlen(bb) - 1; i >= 0; i--) {
//		for (int j = strlen(aa) - 1; j >= 0; j--) {
//			int temp = (aa[strlen(aa) - 1 - j]-'0') * (bb[i]-'0');
//			temp += cnt[strlen(aa) - 1 - j + (strlen(bb) - i - 1)];
//			printf("%d\n", cnt[strlen(aa) - 1 - j + (strlen(bb) - i - 1)]);
//			printf("%d\n", temp);
//			printf("%d\n", strlen(aa) - 1 - j);
//			printf("%d\n", strlen(bb) - i - 1);
//			if (temp >= 10) {
//				cnt[strlen(aa) - 1 - j +(strlen(bb) - i - 1)] += (temp % 10);
//				cnt[strlen(aa) - 1 - j +(strlen(bb) - i - 1)+1] += (temp / 10);
//			}
//			else {
//				cnt[strlen(aa) - 1 - j + (strlen(bb) - i - 1)] += temp ;
//			}
//		}
//	}
//
//	int index;
//	for (int i = 100; i >= 0; i--) {
//
//		if (cnt[i] != 0) {
//			index = i;
//			break;
//		}
//	}
//
//	for (int i = index; i >=0; i--) {
//
//		printf("%d", cnt[i]);
//	}
//	return 0;
//
//}