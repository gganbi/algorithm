//#include <cstdio>
//#include<vector>
//using namespace std;
//
//
//// 1- - -2
//// l 
//// l 
//// 3
//
//
////1: 2 3 4
////2 : 1 4
////3 : 1 5
////4: 1 2 5
////5 : 3 4
//
//const int MAX = 100;
//
//int main() {
//	vector<int> myGraph[MAX];
//	//벡터 100개
//
//	int n, m; //정점간선
//
//	scanf_s("%d %d", &n, &m);
//
//	for (int i = 0; i < m; i++) {
//		int a, b;
//		scanf_s("%d %d", &a, &b);
//		myGraph[a].push_back(b);
//		//a에 b를  추가 벡터
//		myGraph[b].push_back(a);
//		//b에 a를  추가 벡터
//
//	}
//
//	for (int i = 1; i <= n; i++) {
//	
//		printf("%d (%d ) : ", i,myGraph[i].size());
//
//		for (int j = 0; j < myGraph[i].size(); j++) {
//			printf("%d ", myGraph[i][j]);
//		}
//
//		printf("\n");
//	
//	}
//
//
//
//
//}