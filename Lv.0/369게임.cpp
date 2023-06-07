#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int order) {
    int count = 0;
    string s = to_string(order);
    for(auto i : s) {
        if(i == '3' || i == '6' || i == '9') count++;
    }
    return count;
}