#include <string>
#include <unordered_map>
using namespace std;

long long solution(string numbers) {
    unordered_map<string, long long> numberMap = {
        {"zero",    0},
        {"one",     1},
        {"two",     2},
        {"three",   3},
        {"four",    4},
        {"five",    5},
        {"six",     6},
        {"seven",   7},
        {"eight",   8},
        {"nine",    9},
    };
    
    string tmp = "";
    long long answer = 0;
    for(auto t : numbers) {
        tmp += t;
        if(numberMap.find(tmp) != numberMap.end()) {
            answer = answer * 10 + numberMap[tmp];
            tmp = "";
        }
    }
    return answer;
}