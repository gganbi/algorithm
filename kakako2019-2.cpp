//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//class Stage {
//
//public :
//    int stageNum;
//    int highCnt;
//    int lowCnt;
//    double value;
//
//    Stage() {
//        stageNum = 0;
//        highCnt = 0;
//        lowCnt = 0;
//        value = 0;
//    }
//
//  
//};
//
//vector<int> solution(int N, vector<int> stages) {
//    Stage stage[100 + 1];
//    vector<int> answer;
//    for (int i = 1; i <= N + 1; i++) {
//        for (int j = 0; j <= stages.size(); j++) {
//            if (i <= stages[j]) {
//                stage[i].lowCnt++;
//                if (i == stages[j]) {
//                    stage[i].highCnt++;
//                }
//            }
//        }
//
//        if (stage[i].lowCnt == 0) {
//            stage[i].value = 0;
//        }
//        else {
//            stage[i].value = (double)stage[i].highCnt / stage[i].lowCnt;
//        }
//        cout << stage[i].lowCnt << " " << stage[i].highCnt <<" "<<stage[i].value<< endl;
//    }
//    return answer;
//}
//
//int main() {
//
//    vector<int> stages;
//    stages.push_back(10);
//    stages.push_back(120);
//    solution(10, stages);
//
//}