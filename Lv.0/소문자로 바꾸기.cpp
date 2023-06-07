#include <string>
#include <vector>
#define ASCII 32
using namespace std;

string solution(string myString) {
    string answer = "";
    for(auto t : myString) {
        if(t >= 65 && t <= 90) {
            t += ASCII;
        } 
        answer += t;
    }
    return answer;
}