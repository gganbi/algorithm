//#include<stdio.h>
//int n;
//
//int result[100];
//bool check[100];
//int lastCnt = 0;
//void dd(int x,int y) {
//
//    if (x >= n) {
//        
//        for (int i = 0; i < x; i++) {
//            printf("%d", result[i]);
//        } printf("\n");
//    }
//    else {
//        for (int i = 1; i <= 3; i++) {         
//            if (y != i) {
//                result[x] = i;
//                if (x == 0) {
//                    dd(x + 1, i);
//                }
//
//                //x+1 ����ũ��
//                //m ���ݺ񱳰� ũ��
//
//                //�ش� �������� �ߺ��Ǵ¾ְ� �ִ��� üũó��
//
//                bool chk = false;
//
//                for (int m = 1; m <= (x + 1) / 2; m++) {
//                    //m ���ݺ񱳰� ũ��
//                   
//                    for (int j = 0; j <n; j++) {
//                        // j �������Ҷ� ù�� 
//                        //j+y+m<n
//                        int cnt = 0;
//                        for (int y = 0; y <m; y++) {
//                        //y ���������� �����ַ���
//                            if (j + y + m < n) {
//                                if (result[j + y] == result[j + y + m]) {
//                                    cnt++;
//                                }
//                            }         
//                        }
//                        if (cnt >= x + 1) {// �ٶȰ��ٴ°�
//                            chk == true;
//
//                        }
//                    }       
//                }
//                if (chk == true) {
//                
//                }
//                else {
//                    dd(x + 1, i);
//                }
//           
//
//
//            }   
//        }
//    
//    }
//}
//
//
//int main() {
//
//    scanf_s("%d", &n);
//    dd(0, 0);
//
//}