//#include<cstdio>
//#include<vector>
//#include<queue>
//#include<stack>
//using namespace std;
//
//vector<int> myGrape[100];
//int dataa[100][100] = {0,};
//bool check[100] = { false ,};
//
//int result[100] = { 0, };
//int cntt = 1;
//
//int n;
//
//
//int bfs(int x) {
//	queue<int> Que;
//
//	Que.push(x);
//	check[x] = true;
//
//	while (!Que.empty()) {
//	
//		int temp = Que.front();
//		Que.pop();
//
//		for (int i = 0; i < myGrape[temp].size(); i++) {
//			
//			int tmp = myGrape[temp][i];
//			if (check[tmp] == false) {
//				check[tmp] = true;
//				Que.push(tmp);
//				
//			}
//
//		}
//	}
//
//
//
//
//}
//
//
//
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
//				result[cntt++] = bfs(i,j);
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
