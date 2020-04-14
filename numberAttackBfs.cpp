//#include<cstdio>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
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
//
//
//vector<int> mygrape[100];
//
//int dataa[100][100] = {0,};
//int result[100] = { 0, };
//int cntt = 1;
//int n;
//struct dd {
//	int x;
//	int y;
//};
//
//int dx[4] = { 0,0,-1,1 };
//int dy[4] = { -1,1,0,0 };
//int cnt = 1;
//
//int bfs(int x,int y) {
//	queue<dd> que;
//
//	dd dd;
//	dd.x = x;
//	dd.y = y;
//	que.push(dd);
//	
//	dataa[x][y] = 0;
//	
//
//	while (!que.empty()) {
//
//		dd current = que.front();
//		que.pop();
//
//		for (int i = 0; i < 4; i++) {
//		
//			int xx = current.x+dx[i];
//			int yy = current.y+dy[i];
//
//			if (dataa[xx][yy] == 1) {
//				cnt++;
//				dataa[xx][yy] = 0;
//				dd temp;
//				temp.x = xx;
//				temp.y = yy;
//				que.push(temp);
//			}
//		}	
//	}
//
//	return cnt;
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
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			if (dataa[i][j] != 0) {	
//				cnt = 1;
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
