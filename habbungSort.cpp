//#include <stdio.h>
//void mergeSort(int data[], int p, int r);
//void merge(int data[], int p, int q, int r);
//int n;
//
//int data[100001];
//int main() {
//
//
//    scanf_s("%d", &n);
//    for (int i = 0; i < n; i++) {
//        scanf_s("%d", &data[i]);
//    }
//
//    mergeSort(data, 0, n-1);
//    printf("\n정렬 후\n");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", data[i]);
//    }
//    return 0;
//}
//void mergeSort(int data[], int p, int r) {
//    int q;
//    if (p < r) {
//        q = (p + r) / 2;
//        mergeSort(data, p, q);
//        mergeSort(data, q + 1, r);
//        merge(data, p, q, r);
//    }
//}
//void merge(int data[], int p, int q, int r) {
//    int i = p, j = q + 1, k = p;
//    int tmp[100001]; // 새 배열
//    while (i <= q && j <= r) {
//        if (data[i] <= data[j]) tmp[k++] = data[i++];
//        else tmp[k++] = data[j++];
//    }
//    while (i <= q) tmp[k++] = data[i++];
//    while (j <= r) tmp[k++] = data[j++];
//    for (int a = p; a <= r; a++) data[a] = tmp[a];
//}
