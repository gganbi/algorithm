#include<cstdio>

using namespace std;



int n, m, k, t;
int y, x, d, f;


int main() {

	scanf_s("%d %d %d %d", &n, &m, &k, &t);

	for (int i = 1; i <= k; i++) {
	
		scanf_s("%d %d %d %d", &y, &x, &d, &f);

		if (d == 2 || d == 3) {
			f = f % (m * 2 - 2);
		}
		else {
			f = f % (n * 2 - 2);
		}
		

		int realf = f;

		for (int ii = 1; ii <= t; ii++) {
			f = realf;
			if (d == 2 || d == 3) { //�� ��
				while ((x - f < 1)&&(d==2) || (x + f > m) &&(d==3)) {
					if (d == 2) { //��
						int tmp = x - 1;
						x = x - (x - 1);
						f = f - tmp;
						d = 3;
					}
					else { //��
						int tmp = m - x;
						x = x + (m - x);
						f = f - tmp;
						d = 2;
					}
				}
				if (d == 2) { //��
					x = x - f;
				}
				else { //��
					x = x + f;
				}	
			}
			else {  //�� ��
				while ((y - f < 1) && (d == 0) || (y + f > n) && (d == 1)) {
					if (d == 0) { //��
						int tmp = y - 1;
						y = y - (y - 1);
						f = f - tmp;
						d = 1;
					}
					else { //��
						int tmp = n - y;
						y = y + (n - y);
						f = f - tmp;
						d = 0;
					}
				}
				if (d == 0) { //��
					y = y - f;
				}
				else { //��
					y = y + f;
				}
			}
		}
		printf("%d %d\n", y, x);

	}
}