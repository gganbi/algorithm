#include<cstdio>
using namespace std;




int n, m, k, t;
int y[110], x[110], d[110];

int data[110][110][110] = { 0, };
int num[110][110] = { 0, };



int main() {


	scanf_s("%d %d %d %d", &n, &m, &k, &t);




	for (int i = 1; i <= k; i++) {
		int yy, xx, dd;

		//for(int j=1;j<=t;j++)  ��ĭ������
		scanf_s("%d %d %d", &yy, &xx, &dd);
		num[yy][xx] = 1;

		if (dd == 0) { // ��
			t = t % (n * 2 - 2);
		}
		else if (dd == 1) { // ��
			t = t % (n * 2 - 2);
		}
		else if (dd == 2) { // ��
			t = t % (m * 2 - 2);
		}
		else {  //��
			t = t % (m * 2 - 2);
		}
		y[i] = yy;
		x[i] = xx;
		d[i] = dd;
		data[yy][xx][i] = 1; 
		//�����ǹ�

	}


	for (int iii = 1; iii <= t; iii++) {

		for (int i = 1; i <= k; i++) {
			if (d[i] == 0) { // ��
				int high = data[y[i]][x[i]][i];
				int tmp2 = num[y[i]][x[i]]; //�����ִ°��� ����

				int firstX = x[i];
				int firstY = y[i];

				if (y[i] - 1 <= 0) {
					y[i] = 2;
					d[i] = 1;
				}
				else {
					y[i] -= 1;
				}

				int tmp = num[y[i]][x[i]]; //�̵��� ��ġ�� ����

				for (int ii = high; ii <= tmp2; ii++) {
					for (int jj = 1; jj <= k; jj++) {
						if (data[firstY][firstX][jj] == ii) { //�̵� �� ��ġ�� ���̳� ã��
							data[y[i]][x[i]][jj] = ++tmp;
							num[firstY][firstX]--;
							num[y[i]][x[i]]++;
							break;
						}
					}
				}

			}
			else if (d[i] == 1) { // ��
				int high = data[y[i]][x[i]][i];
				int tmp2 = num[y[i]][x[i]]; //�����ִ°��� ����

				int firstX = x[i];
				int firstY = y[i];

				if (y[i] + 1 >= n+1) {
					y[i] = n - 1;
					d[i] = 0;
				}
				else {
					y[i] += 1;
				}

				int tmp = num[y[i]][x[i]]; //�̵��� ��ġ�� ����

				for (int ii = high; ii <= tmp2; ii++) {
					for (int jj = 1; jj <= k; jj++) {
						if (data[firstY][firstX][jj] == ii) { //ù��ġ�� ���̳� ã��
							data[y[i]][x[i]][jj] = ++tmp;
							num[firstY][firstX]--;
							num[y[i]][x[i]]++;
							break;
						}
					}
				}
			}
			else if (d[i] == 2) { // ��

				//�̵����� �ڱ⺸�� ������ �ֵ��� �ֳ�����
				// ���� ���̸� ã�ƾ��� ���̺��� ��������
				int high = data[y[i]][x[i]][i];

				int tmp2 = num[y[i]][x[i]]; //�����ִ°��� ����

				//�������ؼ� �� �����ִ¾ֵ� ������ �˾ƾ���

				//high���� tmp2���� ��ġ������

				//ù ��ġ
				int firstX = x[i];
				int firstY = y[i];

				if (x[i] - 1 <= 0) {
					x[i] = 2;
					d[i] = 3;
				}
				else {
					x[i] -= 1;
				}
				// �̵��� ��ġ�� ���� �ֳ����� 
				int tmp = num[y[i]][x[i]]; //�̵��� ��ġ�� ����

				for (int ii = high; ii <= tmp2; ii++) {
					for (int jj = 1; jj <= k; jj++) {
						if (data[firstY][firstX][jj] == ii) { //ù��ġ�� ���̳� ã��
							data[y[i]][x[i]][jj] = ++tmp;
							num[firstY][firstX]--;
							num[y[i]][x[i]]++;
							break;
						}
					}
				}
			}
			else if (d[i] == 3) {  //��
				int high = data[y[i]][x[i]][i];
				int tmp2 = num[y[i]][x[i]]; //�����ִ°��� ����

				//�������ؼ� �� �����ִ¾ֵ� ������ �˾ƾ���

				//high���� tmp2���� ��ġ������

				//ù ��ġ
				int firstX = x[i];
				int firstY = y[i];

				if (x[i] + 1 >= m+1) {
					x[i] = m - 1;
					d[i] = 2;
				}
				else {
					x[i] += 1;
				}

				int tmp = num[y[i]][x[i]]; //�̵��� ��ġ�� ����

				for (int ii = high; ii <= tmp2; ii++) {
					for (int jj = 1; jj <= k; jj++) {
						if (data[firstY][firstX][jj] == ii) { //ù��ġ�� ���̳� ã��
							data[y[i]][x[i]][jj] = ++tmp;
							num[firstY][firstX]--;
							num[y[i]][x[i]]++;
							break;
						}
					}
				}
			}
		}
	
	}

	for (int i = 1; i <= k; i++) {
		printf("%d %d\n", y[i], x[i]);
	}
	

	
}