#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    sort(s.begin(), s.end());
    
    for (int i = 0; i < s.size(); i++) {
        if (i == 0 || s[i] != s[i - 1]) { 
            if (count(s.begin(), s.end(), s[i]) == 1) {  
                answer += s[i];
            }
        }
    }
    
    return answer;
}