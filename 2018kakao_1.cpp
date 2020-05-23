//#include <string>
//#include<iostream>
//#include <vector>
//#include<algorithm>
//using namespace std;
//int solution(string str1, string str2) {
//
//    //A : 65, Z:90
//    //a : 97, z:122
//    int answer = 0;
//    vector<string> tmp1;
//    string str1Tmp;
//    for (int i = 0; i < str1.length(); i++) {
//        if (str1[i] >= 65 && str1[i] <= 90) {
//            str1Tmp += str1[i] + 32;
//        }
//        else if (str1[i] >= 97 && str1[i] <= 122) {
//            str1Tmp += str1[i];
//        }
//        else {
//            str1Tmp += " ";
//        }
//    }
//    cout << str1Tmp << endl;
//    string tmp;
//    for (int i = 0; i < str1Tmp.length() - 1; i++) {
//        //  if(!(str1Tmp[i]==' ' || (str1Tmp[i+1]==' ')){
//        tmp += str1Tmp[i];
//        tmp += str1Tmp[i + 1];
//
//        tmp1.push_back(tmp);
//        tmp = "";
//
//        //}
//    }
//    for (int i = 0; i < tmp1.size(); i++) {
//        cout << tmp1.at(i) << " ";
//    }
//    cout << endl;
//    string str2Tmp;
//    for (int i = 0; i < str2.length(); i++) {
//        if (str2[i] >= 65 && str2[i] <= 90) {
//            str2Tmp += str2[i] + 32;
//        }
//        else if (str2[i] >= 97 && str2[i] <= 122) {
//            str2Tmp += str2[i];
//        }
//        else {
//            str2Tmp += " ";
//        }
//    }
//    cout << str2Tmp << endl;
//    vector<string> tmp2;
//    tmp = "";
//    for (int i = 0; i < str2Tmp.length() - 1; i++) {
//        //   if(!(str2Tmp[i]==' '|| str2Tmp[i+1]==' ')){
//        tmp += str2Tmp[i];
//        tmp += str2Tmp[i + 1];
//
//        if ((str2Tmp[i] == ' ')) {
//            cout << tmp << "dddd" << endl;
//        }
//        tmp2.push_back(tmp);
//            tmp = "";
//            // }
//
//    }
//    for (int i = 0; i < tmp2.size(); i++) {
//        cout << tmp2.at(i) << " ";
//    }
//
//    int firstCnt = 0;
//    vector<string>::iterator iter;
//    for (int i = 0; i < tmp1.size(); i++) {
//        iter = find(tmp2.begin(), tmp2.end(), tmp1.at(i));
//        if (iter != tmp2.end()) {
//            cout << tmp1.at(i) << endl;
//            firstCnt++;
//        }
//        else {
//            cout << "NONO" << endl;
//        }
//    }
//
//    int secondCnt = (tmp1.size() - firstCnt) + (tmp2.size() - firstCnt) + firstCnt;
//    cout << firstCnt << " " << secondCnt << endl;
//    double dd = ((double)firstCnt / secondCnt) * 65536;
//    cout << (int)dd << endl;
//    answer = (int)dd;
//    return answer;
//}
//
//int main() {
//    solution("handshake", "shake hands");
//
//}