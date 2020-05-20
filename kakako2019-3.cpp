#include <string>
#include <vector>
#include <iostream>
#include<algorithm>
using namespace std;

int lastCnt = 0;

bool checkk[10] = { false, };
int solution(vector<vector<string>> relation) {
    int answer = 0;
    bool check = false;
    for (int i = 0; i < relation[0].size(); i++) {
        vector<string> temp;

        if (check == false) {
            for (int j = 0; j < relation.size(); j++) {
                temp.push_back(relation[j][i]);
            }
        }
        else {
            for (int j = 0; j < relation.size(); j++) {
                string tempp;
                for (int jj = 0; jj <= i; jj++) { //jj 시작점이 다를수있다
                    if (checkk[jj] == false) {
                        tempp += relation[j][jj];
                    }
                }
                temp.push_back(tempp);
            }
        }

        sort(temp.begin(), temp.end());

        for (int ii = 0; ii < temp.size() - 1; ii++) {
            if (temp[ii] == temp[ii + 1]) {
                check = true;
                break;
            }
        }
        if (check == true) {
            continue;
        }
        else {
            checkk[i] = true;
            lastCnt++;
        }
    }

    // cout<< relation.size()<< " "<<relation[0].size();
    return answer;
}