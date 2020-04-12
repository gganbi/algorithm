//#include<cstdio>
//#include<vector>
//#include<queue>
//#include<stack>
//using namespace std;
//
//vector<int> myGrape[100];
//
//int dataa[100][100] = {0,};
//int result[100] = { 0, };
//int cntt = 1;
//
//int n;
//
//
//int bfs(int x,int y) {
//	queue<vector<int>> Que;
//
//	myGrape[x].push_back(y);
//	myGrape[y].push_back(x);
//	Que.push(myGrape[x]);
//	Que.push(myGrape[y]);
//	
//	dataa[x][y] = 0;
//	int cnt = 1;
//
//	while (!Que.empty()) {
//
//		vector<int> current = Que.front();
//		
//	}
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
