//#include<stdio.h>
//
//void Swap(int arr[], int a, int b) // a,b ���� �Լ� 
//{
//    int temp = arr[a];
//    arr[a] = arr[b];
//    arr[b] = temp;
//}
//int Partition(int arr[], int left, int right)
//{
//    int pivot = arr[left]; // �ǹ��� ��ġ�� ���� ���ʿ��� ����
//    int low = left + 1;
//    int high = right;
//
//    while (low <= high) // �����Ǳ� ������ �ݺ��Ѵ� 
//    {
//        while (low <= right && pivot >= arr[low]) // �ǹ����� ū ���� ã�� ���� 
//        {
//            low++; // low�� ���������� �̵� 
//        }
//        while (high >= (left + 1) && pivot <= arr[high]) // �ǹ����� ���� ���� ã�� ���� 
//        {
//            high--; // high�� �������� �̵�
//        }
//        if (low <= high)// �������� ���� �����̸� ���� ���� ���� 
//        {
//            Swap(arr, low, high); //low�� high�� ���� 
//        }
//    }
//    Swap(arr, left, high); // �ǹ��� high�� ����Ű�� ����� ��ȯ 
//    return high;  // �Ű��� �ǹ��� ��ġ������ ��ȯ 
//
//}
//
//
//void QuickSort(int arr[], int left, int right)
//{
//    if (left <= right)
//    {
//        int pivot = Partition(arr, left, right); // �ѷ� �����
//        QuickSort(arr, left, pivot - 1); // ���� ������ �����Ѵ�.
//        QuickSort(arr, pivot + 1, right); // ������ ������ �����Ѵ�.
//    }
//}
//
//
//int binarySearch(int arr[], int target, int low, int high) {
//
//	int mid = (low + high) / 2;
//
//	if (low > high) {
//		return 0;
//	}
//
//	if (arr[mid] > target) {
//		binarySearch(arr, target, low, mid - 1);
//	}else if (arr[mid] < target) {
//		binarySearch(arr, target, mid+1, high);
//	}
//	else {
//		return 1;
//	}
//	
//
//}
//void sort(int arr[],int length) {
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
//int nData[400000];
//int mData[600000];
//int main() {
//
//	int n;
//
//	scanf_s("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		scanf_s("%d", &nData[i]);
//	}
//	//sort(nData, n);
//	QuickSort(nData, 1, n );
//
//	//for (int i = 1; i <= n; i++) {
//	//	printf("%d ", nData[i]);
//	//}
//
//
//
//
//	int m;
//	
//	scanf_s("%d", &m);
//
//	//printf("%d ", binarySearch(nData, 10, 1, n));
//	for (int i = 1; i <= m; i++) {
//		scanf_s("%d", &mData[i]);
//		printf("%d\n", binarySearch(nData, mData[i], 1, n));
//	}
//
//
//}