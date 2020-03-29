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
//void Swap(int arr[], int a, int b) // a,b 스왑 함수 
//{
//	int temp = arr[a];
//	arr[a] = arr[b];
//	arr[b] = temp;
//}
//int Partition(int arr[], int left, int right)
//{
//	int pivot = arr[left]; // 피벗의 위치는 가장 왼쪽에서 시작
//	int low = left + 1;
//	int high = right;
//
//	while (low <= high) // 교차되기 전까지 반복한다 
//	{
//		while (low <= right && pivot >= arr[low]) // 피벗보다 큰 값을 찾는 과정 
//		{
//			low++; // low를 오른쪽으로 이동 
//		}
//		while (high >= (left + 1) && pivot <= arr[high]) // 피벗보다 작은 값을 찾는 과정 
//		{
//			high--; // high를 왼쪽으로 이동
//		}
//		if (low <= high)// 교차되지 않은 상태이면 스왑 과정 실행 
//		{
//			Swap(arr, low, high); //low와 high를 스왑 
//		}
//	}
//	Swap(arr, left, high); // 피벗과 high가 가리키는 대상을 교환 
//	return high;  // 옮겨진 피벗의 위치정보를 반환 
//
//}
//
//
//void QuickSort(int arr[], int left, int right)
//{
//	if (left <= right)
//	{
//		int pivot = Partition(arr, left, right); // 둘로 나누어서
//		QuickSort(arr, left, pivot - 1); // 왼쪽 영역을 정렬한다.
//		QuickSort(arr, pivot + 1, right); // 오른쪽 영역을 정렬한다.
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
//			// low만 처리
//			value = a[low];
//		}
//		if (low > temp) {
//		//	 high만 처리
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
//		printf("최종값  : %d\n\n", value);
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
//		printf("최종값  : %d\n\n", value);
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
