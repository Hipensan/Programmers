#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    answer = arr;
    while((answer.size() & (answer.size() - 1)) != 0) {
        answer.push_back(0);
    }
    return answer;
}