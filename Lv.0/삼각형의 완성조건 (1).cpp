#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    sort(sides.begin(), sides.end());
    if(sides[0] + sides[1] > sides[2])
        return answer = 1;
    return answer = 2;
}