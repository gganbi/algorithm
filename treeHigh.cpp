//#include<cstdio>
//#include<vector>
//
//
//using namespace std;
//
//
//int n, r; //���� ����
//vector <int> myGrapgh[100];
//bool visited[100];
//
//int cnt[100];
//
//
//int max=0;
//
//void dfs(int x) {
//	visited[x] = true;
//
//	
//	int temp = 0;
//	for (int i = 0; i < myGrapgh[x].size(); i++) {
//		int y = myGrapgh[x][i];
//		//x�� y�� �����
//		if (visited[y] == false) {
//			dfs(y);
//			if (cnt[x] <= cnt[y] + 1) {
//				cnt[x] = cnt[y] + 1;
//			}	
//		}
//		else {
//			temp++;
//
//		}
//	}
//	if (temp == myGrapgh[x].size()) {
//		cnt[x] = 0;
//	}
//	
//	//�ƹ��͵� �������̾��� �����϶� or �� ��������
//
//
//}
//int main() {
//	
//	scanf_s("%d %d", &n, &r);
//	
//	for (int i = 0; i < n-1; i++) {
//		int a, b;
//		scanf_s("%d %d", &a, &b);
//
//		myGrapgh[a].push_back(b);
//		myGrapgh[b].push_back(a);
//	}
//
//	dfs(r);
//
//	printf("%d", cnt[r]);
//
//
//}