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
//    dataSet dataset[100];
//    for (int i = 0; i < record.size(); i++) {
//        vector<string> strArr;
//        stringstream sss(record[i]);
//        string tmp;
//        while (sss >> tmp) {
//            strArr.push_back(tmp);
//        }
//        if (strArr[0] == "Enter" || strArr[0] == "Leave") {
//            dataset[i].enLeSp = strArr[0];
//            dataset[i].userId = strArr[1];
//            dataset[i].nicName = strArr[2];
//        }
//        cout << dataset[i].enLeSp << " " << dataset[i].userId << " " << dataset[i].nicName;
//    }
//
//    return answer;
//}
//
//int main() {
//    vector<string> record;
//    record.push_back("Enter uid1234 Muzi", "Enter uid4567 Prodo", "Leave uid1234", "Enter uid1234 Prodo", "Change uid4567 Ryan");
// //  record.push_back("bb");
//    solution(record);
//}