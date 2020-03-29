//#include<stdio.h>
//
//
//
//int n[100010];
//int m[100010];
//
//int Last = 0;
//int mCmt = 1;
//bool test = false;
//int temp;
//
//void Swap(int arr[], int a, int b) // a,b ���� �Լ� 
//{
//	int temp = arr[a];
//	arr[a] = arr[b];
//	arr[b] = temp;
//}
//int Partition(int arr[], int left, int right)
//{
//	int pivot = arr[left]; // �ǹ��� ��ġ�� ���� ���ʿ��� ����
//	int low = left + 1;
//	int high = right;
//
//	while (low <= high) // �����Ǳ� ������ �ݺ��Ѵ� 
//	{
//		while (low <= right && pivot >= arr[low]) // �ǹ����� ū ���� ã�� ���� 
//		{
//			low++; // low�� ���������� �̵� 
//		}
//		while (high >= (left + 1) && pivot <= arr[high]) // �ǹ����� ���� ���� ã�� ���� 
//		{
//			high--; // high�� �������� �̵�
//		}
//		if (low <= high)// �������� ���� �����̸� ���� ���� ���� 
//		{
//			Swap(arr, low, high); //low�� high�� ���� 
//		}
//	}
//	Swap(arr, left, high); // �ǹ��� high�� ����Ű�� ����� ��ȯ 
//	return high;  // �Ű��� �ǹ��� ��ġ������ ��ȯ 
//
//}
//
//
//void QuickSort(int arr[], int left, int right)
//{
//	if (left <= right)
//	{
//		int pivot = Partition(arr, left, right); // �ѷ� �����
//		QuickSort(arr, left, pivot - 1); // ���� ������ �����Ѵ�.
//		QuickSort(arr, pivot + 1, right); // ������ ������ �����Ѵ�.
//	}
//}
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
//int binary(int a[], int target, int low, int high) {
//
//	int value;
//	if (low > high) {
//
//		
//		int temp1 = -1 * target + a[low];
//		int temp2 = -1 * target + a[high];
//
//		if (temp1 < 0) {
//			temp1 *= -1;
//		}
//
//		if (temp2 < 0) {
//			temp2 *= -1;
//		}
//
//		if (temp1 >= temp2) {
//			value = a[high];
//		}
//		else {
//			value = a[low];
//		}
//		if (high < 1) {
//			// low�� ó��
//			value = a[low];
//		}
//		if (low > temp) {
//		//	 high�� ó��
//			value = a[high];
//		}
//
//		if (value == a[high] && value == -1 * target) {
//			value = a[low];
//		}
//		else if (value == a[low] && value == -1 * target) {
//			value = a[high];
//		}
//
//		printf("target : %d\n", target);
//		printf("low high : %d %d\n", low, high);
//		printf("a[low] a[high] : %d %d\n", a[low], a[high]);
//		printf("������  : %d\n\n", value);
//		return value;
//	}
//
//	int mid = (low + high) / 2;
//
//	if (target == a[mid]) {
//		value = a[mid];
//		printf("target : %d\n", target);
//		printf("low high : %d %d\n", low, high);
//		printf("a[low] a[high] : %d %d\n", a[low], a[high]);
//		printf("������  : %d\n\n", value);
//		return a[mid];
//	}
//	else if (target > a[mid]) {
//		binary(a, target, mid + 1, high);
//	}
//	else {
//		binary(a, target, low, mid - 1);
//	}
//
//}
//
//int main() {
//
//
//
//	scanf_s("%d", &temp);
//
//	for (int i = 1; i <= temp; i++) {
//		scanf_s("%d", &n[i]);
//	}
//	
//	QuickSort(n, 1, temp);
//	n[0] = -1000000030;
//	n[temp + 1] = 1000000030;
//	if (temp == 2 || n[1] >= 0) {
//		printf("%d %d", n[1], n[2]);
//		return 0;
//	}
//
//
//
//	printf("\n");
//	for (int i = 1; i <= temp; i++) {
//		printf("%d ", n[i]);
//	}
//	printf("\n");
//	printf("\n");
//
//	for (int i = 1; i <= temp; i++) {
//
//		int tmp = n[i];
//		if (n[i] == 0) {
//			if (n[i] - n[i - 1] < n[i + 1] - n[i]) {
//				n[i] = 1;
//				m[i] = binary(n, -1 * n[i], 1, temp);
//			}
//			else {
//				n[i] = -1;
//				m[i] = binary(n, -1 * n[i], 1, temp);	
//			}
//		}
//		else {
//			m[i] = binary(n, -1 * n[i], 1, temp);
//		}
//		n[i] = tmp;
//		
//	}
//	printf("\n");
//	printf("\n");
//
//	//binary(n, -1 * n[2], 1, temp);
//
//	/*for (int i = 1; i <= temp; i++) {
//		printf("%d ",m[i]);
//	}
//	printf("\n");
//	printf("\n");
//	for (int i = 1; i <= temp; i++) {
//		printf("%d ",n[i]+ m[i]);
//	}
//	printf("\n");
//	printf("\n");*/
//
//	int min = n[1] + m[1];
//	if (min < 0) {
//		min = -1 * min;
//	}
//	int lastIndex = 1;
//
//	for (int i = 2; i <= temp; i++) {
//		int temp = n[i] + m[i];
//		if (temp < 0) {
//			temp = -1 * temp;
//		}
//		printf("aaa : %d \n", temp);
//
//		if (min > temp) {
//			min = temp;
//			lastIndex = i;
//		}
//	}
//		printf("%d \n", lastIndex);
//	printf("%d %d", n[lastIndex], m[lastIndex]);
//
//
//}
//
