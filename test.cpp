//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
////1부터 케이스까지
//
////n-i+1
//// 1 2 3 4 5 6 7 8
//// 각 케이스에 문자열 개새수구해서 빼주기
//
//int indexCnt = 0;
//int temp[1001] = { 0, };
//void dd(int length,string s) {
//
//    for (int i = 0; i <= s.length - length * 2; i++) {
//
//        int tmpCnt = 0;
//        for (int j = 1; j <= length; j++) {
//            if (s[i+j-1] == s[i + length+j-1]) {
//                tmpCnt++;
//            }
//        }
//    
//    }
//
//
//}
//
//int solution(string s) {
//    int answer = 0;
//
//    int max = s.length / 2;
//    
//    for (int i = 1; i <= max; i++) {
//        dd(i,s);
//    }
//    cout << s[2];
//    return answer;
//}
//
//
//int main() {
//
//
//
//
//}