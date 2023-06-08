#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    for(int t=0; t<myString.size(); t++) {
        if(myString[t] == 'a') { myString[t] -= 32; continue; }
        if(myString[t] > 'A' && myString[t] < 'Z') myString[t] += 32;
    }
    return myString;
}

/*
isupper() - 대문자인지 
tolower() - 소문자로 변환
함수 이용하기

+ ranged loop에서 reference 받아와서 한 문자씩 비교
*/