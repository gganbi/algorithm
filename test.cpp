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
//        //중요
//        indexMin = i;
//        for (int j = i + 1; j < a; j++)
//        {
//            if (data[j] < data[indexMin])
//            {    //data[indexMin]을 기준으로 data[j]를 검사한다.
//                //data[indexMin]의 값 보다 작은 값을 발견시 indexMin = j가 된다.
//                indexMin = j;
//            }
//        }
//        //내부 for문의 반복으로 가장 작은 값을 찾으면 순서를 바꾼다.
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
