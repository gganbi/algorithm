//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//string solution(string p) {
//    if (p.length() == 0) {
//        return "";
//    }
//    string u, v;
//    string temp;
//    int leftCnt = 0;
//    int rightCnt = 0;
//    int index = 0;
//    for (int i = 0; i < p.length(); i++) {
//        if (p[i] == '(') {
//            leftCnt++;
//        }
//        else {
//            rightCnt++;
//        }
//        if (leftCnt == rightCnt) {
//            index = i;
//            break;
//        }
//    }
//    for (int i = 0; i <= index; i++) {
//        u += p[i];
//    }
//    for (int i = index + 1; i < p.length(); i++) {
//        v += p[i];
//    }
//
//  //  cout << u << endl;
//  //  cout << v << endl;
//    string temp2;
//
//    if (u[0] == '(') { //올바른문자열
//        u += solution(v);
//        temp += u;
//    }
//    else {
//        temp += "(";
//        temp += solution(v);
//        temp += ")";
//        for (int i = 1; i < index; i++) {
//            if (u[i] == '(') {
//                temp2 += ')';
//            }
//            else {
//                temp2 += '(';
//            }
//        }
//        temp += temp2;
//    }
//   
//
//
//    string answer = temp;
//    return answer;
//}
//
//
//int main() {
//
//    cout << solution("(()())()");
//
// 
//
//}