//#include<cstdio>
//#include<vector>
//#include <stdlib.h>    // qsort �Լ��� ����� ��� ����
//
//int compare(const void* a, const void* b)    // �������� �� �Լ� ����
//{
//	int num1 = *(int*)a;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������
//	int num2 = *(int*)b;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������
//
//	if (num1 < num2)    // a�� b���� ���� ����
//		return -1;      // -1 ��ȯ
//
//	if (num1 > num2)    // a�� b���� Ŭ ����
//		return 1;       // 1 ��ȯ
//
//	return 0;    // a�� b�� ���� ���� 0 ��ȯ
//}
//using namespace std;
//
//
//int n;
//
//vector<int> myGrape[100];
//int dataa[100][100] = {0,};
//bool check[100] = { false ,};
//
//int result[100] = { 0, };
//int cntt = 1;
//
//
//int dfs(int x,int y) {
//	dataa[x][y] = 0;
//
//	int cnt = 1;
//
//	//��
//	if (dataa[x - 1][y] != 0) {
//
//	//	dataa[x - 1][y] = 0;
//		cnt+=dfs(x - 1, y);
//	}
//	//��
//	if (dataa[x + 1][y] != 0) {
//
//	//	dataa[x + 1][y] = 0;
//		cnt+=dfs(x + 1, y);
//	}
//	//��
//	if (dataa[x][y-1] != 0) {
//
//	//	dataa[x][y - 1] = 0;
//		cnt+=dfs(x, y-1);
//	}
//	//��
//	if (dataa[x][y + 1] != 0) {
//
//	//	dataa[x][y + 1] = 0;
//		cnt+=dfs(x, y + 1);
//	}
//	
//	return cnt;
//
//}
//int main() {
//	scanf_s("%d", &n);
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {		
//			scanf_s("%1d",&dataa[i][j]);
//		}
//	}
//	printf("\n");
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			printf("%d ",dataa[i][j]);
//		}printf("\n");
//	}
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			if (dataa[i][j] != 0) {		
//				result[cntt++] = dfs(i,j);
//			}
//		}
//	}
//
//	printf("%d\n", cntt-1);
//
//	sort(result, cntt - 1);
//
//	//sort(result[0], 3);
//	for (int i = 1; i <cntt; i++) {
//		printf("%d\n", result[i]);
//	}
//
//	
//
//}
//
//void sort(int arr[], int length) {
//
//	for (int i = 1; i <= length - 1; i++) {
//
//		for (int j = i + 1; j <= length; j++) {
//			if (arr[i] >= arr[j]) {
//				int temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
