//#include<cstdio>
//#include<vector>
//#include <stdlib.h>    // qsort 함수가 선언된 헤더 파일
//
//int compare(const void* a, const void* b)    // 오름차순 비교 함수 구현
//{
//	int num1 = *(int*)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
//	int num2 = *(int*)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
//
//	if (num1 < num2)    // a가 b보다 작을 때는
//		return -1;      // -1 반환
//
//	if (num1 > num2)    // a가 b보다 클 때는
//		return 1;       // 1 반환
//
//	return 0;    // a와 b가 같을 때는 0 반환
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
//	//상
//	if (dataa[x - 1][y] != 0) {
//
//	//	dataa[x - 1][y] = 0;
//		cnt+=dfs(x - 1, y);
//	}
//	//하
//	if (dataa[x + 1][y] != 0) {
//
//	//	dataa[x + 1][y] = 0;
//		cnt+=dfs(x + 1, y);
//	}
//	//좌
//	if (dataa[x][y-1] != 0) {
//
//	//	dataa[x][y - 1] = 0;
//		cnt+=dfs(x, y-1);
//	}
//	//우
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
