//#include<stdio.h>
//
//
//
//int n[100010];
//int m[100010];
//
//int Last = 0;
//
//void Swap(int arr[], int a, int b) // a,b 스왑 함수 
//{
//    int temp = arr[a];
//    arr[a] = arr[b];
//    arr[b] = temp;
//}
//int Partition(int arr[], int left, int right)
//{
//    int pivot = arr[left]; // 피벗의 위치는 가장 왼쪽에서 시작
//    int low = left + 1;
//    int high = right;
//
//    while (low <= high) // 교차되기 전까지 반복한다 
//    {
//        while (low <= right && pivot >= arr[low]) // 피벗보다 큰 값을 찾는 과정 
//        {
//            low++; // low를 오른쪽으로 이동 
//        }
//        while (high >= (left + 1) && pivot <= arr[high]) // 피벗보다 작은 값을 찾는 과정 
//        {
//            high--; // high를 왼쪽으로 이동
//        }
//        if (low <= high)// 교차되지 않은 상태이면 스왑 과정 실행 
//        {
//            Swap(arr, low, high); //low와 high를 스왑 
//        }
//    }
//    Swap(arr, left, high); // 피벗과 high가 가리키는 대상을 교환 
//    return high;  // 옮겨진 피벗의 위치정보를 반환 
//
//}
//
//
//void QuickSort(int arr[], int left, int right)
//{
//    if (left <= right)
//    {
//        int pivot = Partition(arr, left, right); // 둘로 나누어서
//        QuickSort(arr, left, pivot - 1); // 왼쪽 영역을 정렬한다.
//        QuickSort(arr, pivot + 1, right); // 오른쪽 영역을 정렬한다.
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
//		printf("min : %d %d %d \n", a[high], a[low], a[low + 1]);
//
//		// a[high], a[low]
//
//		int tmp1 = a[high];
//		int tmp2 = a[low];
//		if (tmp1 < 0) {
//			tmp1 *= -1;
//		}
//		if (tmp2 < 0) {
//			tmp2 *= -1;
//		}
//		if (tmp1 <= tmp2) {
//			Last = high;
//		}
//		else {
//			Last = low;
//		}
//	
//		return -1;
//	}
//
//
//	//printf("aaa %d %d \n", a[0], a[1]);
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
////	sort(n, temp);
//	QuickSort(n, 1, temp);
//
//	/*for (int i = 1; i <= temp; i++) {
//		printf("%d ",n[i]);
//	}printf("\n");*/
//
//	int mCmt = 0;
//	for (int i = 1; i <= temp; i++) {
//		for (int j = i; j <= temp; j++) {
//			if (i != j) {
//				mCmt++;
//				m[mCmt] = n[i] + n[j];
//				
//			}
//		}
//	}
//	//sort(m, mCmt);
//	QuickSort(m, 1, mCmt);
//
//	if (mCmt == 1) {
//		printf("%d %d", n[1], n[2]);
//		return 0;
//	}
//	for (int i = 1; i <= mCmt; i++) {
//		printf("%d ", m[i]);
//	}
//	printf("\n");
//
//	binary(m, 0, 1, mCmt);
//	int min = m[Last];
//	
//	//printf("%d\n", mCmt);
//	//printf("%d\n", min);
//	//printf("%d\n", Last);
//	for (int i = 1; i <= temp; i++) {
//		for (int j = i; j <= temp; j++) {
//			if (i != j) {
//			
//				if (min == n[i] + n[j]) {
//					printf("%d %d", n[i], n[j]);
//					return 0;
//				}
//
//			}
//		}
//	}
//
//	//printf("%d ", Last);
//}
//
