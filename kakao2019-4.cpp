#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> food_times, long long k) {
    int answer = 0;
    int length = food_times.size();
    int cnt = 1;
    bool check = false;
    int zeroCnt = 0;
    for (long long i = k; i >= 0; i--) {
        if (food_times[cnt] != 0) {
            food_times[cnt]--;  // 0 0 0 연속인 상황 고려해줘야함
        }
        else {
            zeroCnt++;
            cnt++;
        }
        cnt++;
        if (zeroCnt == length) {
            answer = -1;
            cout << answer;
            break;
        }
        if (cnt > length) {
            cnt = 1;
            zeroCnt = 0;
        }
        if (i == 0) {
            answer = cnt;
            cout << answer;
            break;
        }
    }
    return answer;
}`