//#include<stdio.h>
//
//
//
//int n[100010];
//int m[100010];
//
//int Last = 0;
//int mCmt = 0;
//bool test = false;
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
//	if (low >high) {
//
//		printf("high-1 high low %d %d %d\n", high - 1, high, low);
//		printf("high-1 high low %d %d %d\n",a[high-1] ,a[high], a[low]);
//
//		if (low > mCmt) {
//			low--;
//		}
//		if (high ==0) {
//			high++;
//		}
//
//		// low high �� ���밪�� 0�� ������ ã��
//		int tmp1 = a[high];
//		int tmp2 = a[low];
//		if (tmp1 < 0) {
//			tmp1 *= -1;
//		}
//		if (tmp2 < 0) {
//			tmp2 *= -1;
//		}
//		if (tmp1 < tmp2) {
//			Last = high;
//		}
//		else if (tmp1 > tmp2) {
//			Last = low;
//		}
//		else {
//
//			test = true;
//			
//				Last = low;
//
//			
//		}
//	
//		return -1;
//	}
//
//	int mid = (low + high) / 2;
//
//	if (target == a[mid]) {
//		Last = mid;
//		return 1;
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
//	int temp;
//
//	scanf_s("%d", &temp);
//
//	for (int i = 1; i <= temp; i++) {
//		scanf_s("%d", &n[i]);
//	}
//
//	QuickSort(n, 1, temp);
//
//
//	for (int i = 1; i <= temp; i++) {
//		for (int j = i; j <= temp; j++) {
//			if (i != j) {
//				mCmt++;
//				m[mCmt] = n[i] + n[j];
//				
//			}
//		}
//	}
//
//	QuickSort(m, 1, mCmt);
//
//	if (mCmt == 1) {
//		printf("%d %d", n[1], n[2]);
//		return 0;
//	}
//
//	for (int i = 1; i <= temp; i++) {
//		printf("%d ", n[i]);
//	}
//	printf("\n");
//	for (int i = 1; i <= mCmt; i++) {
//		printf("%d ", m[i]);
//	}
//	printf("\n");
//
//	binary(m, 0, 1, mCmt);
//	int min = m[Last];
//	
//	printf("%d\n", mCmt);
//	printf("%d\n", Last);
//	printf("%d\n", min);
//	
//	if (test == false) {
//		for (int i = 1; i <= temp; i++) {
//			for (int j = i; j <= temp; j++) {
//				if (i != j) {
//
//					if (min == n[i] + n[j]) {
//						printf("%d %d", n[i], n[j]);
//						return 0;
//					}
//
//				}
//			}
//		}
//	}
//	else {
//		int tmp1 = 0;
//		for (int i = 1; i <= temp; i++) {
//			for (int j = i; j <= temp; j++) {
//				if (i != j) {
//
//					if (min == n[i] + n[j]) {
//						tmp1 = n[i];
//					}
//
//				}
//			}
//		}
//		min *= -1;
//		int tmp2 = 0;
//		for (int i = 1; i <= temp; i++) {
//			for (int j = i; j <= temp; j++) {
//				if (i != j) {
//
//					if (min == n[i] + n[j]) {
//						tmp2= n[i];
//					}
//
//				}
//			}
//		}
//
//		if(tmp1 <= tmp2) {
//			min *= -1;
//		}
//		for (int i = 1; i <= temp; i++) {
//			for (int j = i; j <= temp; j++) {
//				if (i != j) {
//
//					if (min == n[i] + n[j]) {
//						printf("%d %d", n[i], n[j]);
//						return 0;
//					}
//
//				}
//			}
//		}
//
//
//
//	}
//	
//
//	//printf("%d ", Last);
//}
//
