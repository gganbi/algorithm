//#include <string>
//#include <vector>
//
//using namespace std;
//
//long long room_check[200010] = { 0, };
//long long last[200010] = { 0, };
//long long lastC = 0;
//
//vector<long long> tmp;
//vector<long long> solution(long long k, vector<long long> room_number) {
//    vector<long long> answer;
//    long long tmp = 1000000000000;
//    //    printf("%lld \n",room_number[1]);
//
//      //   printf("[");
//    for (long long i = 0; i < room_number.size(); i++) {
//        // printf("%lld \n",room_number[i]);
//        long long start = 1;
//        long long end = 1000000000000;
//        while (true) {
//            if (start > end) {
//                printf("�� %lld %lld", start, end);
//                break;
//            }
//            long long mid = (start + end) / 2;
//            if (mid == room_number[i]) {
//                bool tmpCheck = false;
//                for (int j = 0; j < i; j++) {
//                    if (room_check[j] == mid) {
//                        tmpCheck = true;//�̹� �����ȳ��̴�
//                    }
//                }
//                if (tmpCheck == false) {
//                    room_check[i] = mid;//���־��� �־��ֱ����� üũ
//                    if (i == room_number.size() - 1) {
//                        last[lastC++] = mid;
//                        answer.push_back(mid);
//                        //       printf("%lld",mid); //���� ���ָ�� �̰� ������ �ָ� //roomcheck����ٰ��־��༭��
//                    }
//                    else {
//                        //   last[lastC++]=mid;
//                    //       printf("%lld, ",mid); //���� ���ָ�� �̰� ������ �ָ� //roomcheck����ٰ��־��༭��
//                    }
//
//
//                    break;
//                }
//                else {
//                    //����ָ� 
//                    room_number[i] += 1;
//                    start = 1;
//                    end = 1000000000000;
//                }
//
//            }
//            else if (mid > room_number[i]) {
//                end = mid - 1;
//            }
//            else {
//                start = mid + 1;
//            }
//        }
//    }
//    for (long long i = 0; i < tmp.size(); i++) {
//        printf("%lld ", tmp[i]);
//    }
//    //  printf("]");
//    return last;
//}