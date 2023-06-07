#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    // goal과 answer이 동일할 때 / 다를 때 각각 Yes, No return
    // cards1,2 / goal 는 배열로 선언
    string answer = "Yes";
    int j = 0;
    int k = 0;
    for(int i = 0; i < goal.size(); i++) {
        if(goal[i] == cards1[j]) {
            j++;
        }
        else if(goal[i] == cards2[k]) {
            k++;
        }
        else {
            answer = "No";
        }
    }
    return answer;
}