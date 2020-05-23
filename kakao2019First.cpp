//#include <string>
//#include <vector>
//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include<string.h>
//#include<sstream>
//
//using namespace std;
//
//class dataSet {
//public :
//    string userId;
//    string enLeSp;
//    string nicName;
//
//};
//vector<string> solution(vector<string> record) {
//    vector<string> answer;
//    dataSet dataset[2];
//
//    for (int i = 0; i < record.size(); i++) {
//        vector<string> strArr;
//        stringstream sss(record[i]);
//        string tmp;
//        while (sss >> tmp) {
//            strArr.push_back(tmp);
//        }
//        //  cout <<strArr.size()<<endl ;
//        if (strArr[0] == "Enter") {
//
//            dataset[i].enLeSp = strArr[0];
//            dataset[i].userId = strArr[1];
//            dataset[i].nicName = strArr[2];
//            for (int ii = 0; ii < i; ii++) {
//                if (dataset[ii].userId == strArr[1]) {
//                    dataset[ii].nicName = strArr[2];
//                }
//            }
//        }
//        else if (strArr[0] == "Leave") {
//
//            dataset[i].enLeSp = strArr[0];
//            dataset[i].userId = strArr[1];
//            for (int ii = 0; ii < i; ii++) {
//                if (dataset[ii].userId == strArr[1]) {
//                    dataset[i].nicName = dataset[ii].nicName;
//                    break;
//                }
//            }
//        }
//        else {
//            dataset[i].enLeSp = strArr[0];
//            for (int ii = 0; ii < i; ii++) {
//                if (dataset[ii].userId == strArr[1]) {
//                    if (dataset[ii].enLeSp != "Change") {
//                        dataset[ii].nicName = strArr[2];
//                    }
//                }
//            }
//        }
//    }
//
//    for (int i = 0; i < record.size(); i++) {
//        if (dataset[i].enLeSp == "Enter") {
//            string temp;
//            temp = dataset[i].nicName + "´ÔÀÌ µé¾î¿Ô½À´Ï´Ù.";
//            answer.push_back(temp);
//             cout<<temp<<endl;
//        }
//        else if (dataset[i].enLeSp == "Leave") {
//            string temp;
//            temp = dataset[i].nicName + "´ÔÀÌ ³ª°¬½À´Ï´Ù.";
//            answer.push_back(temp);
//               cout<<temp<<endl;
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//    vector<string> record;
//    record.push_back("Enter uid1234 Muzi");
// //   record.push_back("Enter uid4567 Prodo");
//    record.push_back("Leave uid1234");
// //   record.push_back("Enter uid1234 Prodo");
//  //  record.push_back("Change uid4567 Ryan");
// //  record.push_back("bb");
//    solution(record);
//}