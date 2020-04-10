#include<cstdio>
#include<vector>



// 9 12
// 1 2
// 1 3
// 2 3
// 2 4
// 2 6
// 3 7
// 4 5
// 4 7
// 4 8
// 5 6
// 7 8
// 8 9
using namespace std;

const int max = 100001;
int n, m; //정점 간선
vector <int> myGrapgh[max];
bool visited[max];
int count = 0;

bool firstVisited[max][3] = {false,};

bool flag = false;

void DFS(int x, int m) {


	visited[x] = true;
	firstVisited[x][m] = true;

	//printf("%d\n", x);
	for (int i = 0; i < myGrapgh[x].size(); i++) {
		int y = myGrapgh[x][i];



		//x와 y가 연결됨
		if (visited[y] == true && firstVisited[y][m] == true) {
			flag = true;
			return;

		}

		if (visited[y] == false) {
			if (m == 1) {
				DFS(y, 2);
			}
			else {
				DFS(y, 1);
			}
		}
	}
}
int main() {

	scanf_s("%d %d", &n, &m);

	for (int i = 0; i < m; i++) {
		int a, b;
		scanf_s("%d %d", &a, &b);

		myGrapgh[a].push_back(b);
		myGrapgh[b].push_back(a);
	}

	DFS(1, 1);

	if (flag == true) {
		printf("No");
	}
	else {
		printf("Yes");
	}


}