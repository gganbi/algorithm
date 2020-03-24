//#include <stdio.h>
//
//
//int arr[100001];
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
////�����Լ�
//int main()
//{
//    int n, i;
//
//
//
//
//    scanf_s("%d", &n);
//
//    for (i = 0; i < n; i++) {
//        scanf_s("%d", &arr[i]);
//    }
//      
//
//    QuickSort(arr, 0, n - 1);
//
//    for (i = 0; i < n; i++)
//        printf("%d ", arr[i]);
//    printf("\n");
//
//    return 0;
//}