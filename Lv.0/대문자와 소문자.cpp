#include <string>
#include <cctype>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(auto t : my_string) {
        if(t >= 'a' && t <= 'z') answer += toupper(t);
        else answer += tolower(t);
    }
    return answer;
}

/* 
더 간단한 코드

for(auto& t : my_string) // reference 로 받아서
if( islower(t) ) toupper(t)
else tolower(t)
return my_string;

*/