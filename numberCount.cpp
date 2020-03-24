//#include<stdio.h>
//
//int n;
//int nData[100001];
//int m;
//int mData[100001];
//int cnt[100001] = { 0, };
//
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
//void binarySearch(int arr[], int target, int low, int high) {
//
//	int mid = (low + high) / 2;
//
//	if (low > high) {
//
//		printf("0\n");
//		return ;
//	}
//
//	if (arr[mid] > target) {
//		binarySearch(arr, target, low, mid - 1);
//	}
//	else if (arr[mid] < target) {
//		binarySearch(arr, target, mid + 1, high);
//	}
//	else {
//		int cnt = 1;
//
//		int tempMid = mid;
//
//		while (true) {
//			if (arr[tempMid] == arr[tempMid + 1] && tempMid <high) {
//				cnt++;
//				tempMid++;
//			}
//			else {
//				break;
//			}
//		}	
//		tempMid = mid;
//		while (true) {
//			if (arr[tempMid] == arr[tempMid -1] && tempMid > low) {
//				cnt++;
//				tempMid--;
//			}
//			else {
//				break;
//			}
//		}
//		printf("%d\n", cnt);
//		return;
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
//int main() {
//
//	
//	scanf_s("%d", &n);
//	scanf_s("%d", &m);
//
//	for (int i = 1; i <= n; i++) {
//		scanf_s("%d", &nData[i]);
//	}
//
//	for (int i = 1; i <= m; i++) {
//		scanf_s("%d", &mData[i]);
//	}
//
//	QuickSort(nData, 1, n);
//	//sort(nData, n);
//
//
//
//
//	for (int i = 1; i <= m; i++) {
//		binarySearch(nData, mData[i], 1, n);
//	}
//
//
//}