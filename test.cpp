//#include<stdio.h>
//
//int main() {
//
//	int data[10] ;
//    int a, b;
//    int i;
//	int temp = 0;
//    int indexMin = 0;
//
//    scanf_s("%d", &a);
//    scanf_s("%d", &b);
//
//    for (i = 0; i < a; i++) {
//        scanf_s("%d", &data[i]);
//    }
//    for (int i = 0; i < a - 1; i++)
//    {
//        //�߿�
//        indexMin = i;
//        for (int j = i + 1; j < a; j++)
//        {
//            if (data[j] < data[indexMin])
//            {    //data[indexMin]�� �������� data[j]�� �˻��Ѵ�.
//                //data[indexMin]�� �� ���� ���� ���� �߽߰� indexMin = j�� �ȴ�.
//                indexMin = j;
//            }
//        }
//        //���� for���� �ݺ����� ���� ���� ���� ã���� ������ �ٲ۴�.
//        temp = data[indexMin];
//        data[indexMin] = data[i];
//        data[i] = temp;
//    }
//
//    
//    printf("%d ", data[a-b]);
//
//
//	
//
//
//
//	return 0;
//}
//
//
