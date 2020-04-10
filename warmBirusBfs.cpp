//#include <cstdio>
//#include <vector>
//#include<queue>
//using namespace std;
//
//int n, m;
//vector <int> myGrape[1000];
//bool check[1000] = {false,};
//
//int cnt = 0;
//
//void bfs() {
//
//	queue<int> Que;
//	Que.push(1);
//	check[1] = true;
//
//	
//	while (Que.empty()==false) {
//		
//		int tt = Que.front();
//		cnt++;
//		Que.pop();
//	
//		for (int i = 0; i<myGrape[tt].size(); i++) {
//		
//			int y = myGrape[tt][i];
//
//			if (check[y] == false) {
//				check[y] = true;
//				Que.push(y);
//			}
//		
//		}
//	
//	}
//
//
//
//
//}
//
//
//
//
//int main() {
//	scanf_s("%d %d", &n, &m);
//
//
//	for (int i = 0; i < m; i++) {
//		
//		int a, b;
//		scanf_s("%d %d", &a, &b);
//
//		myGrape[a].push_back(b);
//		myGrape[b].push_back(a);
//	
//	}
//
//	bfs();
//	printf("%d", cnt-1);
//
//}