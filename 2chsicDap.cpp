//void quick_sort(int* data, int start, int end) {
//	if (start >= end) { // ���Ұ� 1���� ��� 
//		return;
//	} 
//	int pivot = start; 
//	int i = pivot + 1; // ���� ��� ���� 
//	int j = end; // ������ ��� ���� 
//	int temp; 
//	while(i <= j){ // �����Ͱ� ������������ �ݺ� 
//		while(i <= end && data[i] <= data[pivot]){ i++; } 
//		while(j > start && data[j] >= data[pivot]){ j--; } 
//		if(i > j){ // ������ 
//			temp = data[j]; data[j] = data[pivot]; data[pivot] = temp; }
//		else{ // i��°�� j��°�� ���� 
//			temp = data[i]; 
//			data[i] = data[j]; 
//			data[j] = temp; 
//		} 
//	} // ���� ��� 
//	quick_sort(data, start, j - 1); 
//	quick_sort(data, j + 1, end); 
//}


