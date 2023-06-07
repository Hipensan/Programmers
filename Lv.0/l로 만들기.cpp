#include <string>
#include <vector>
#include <cstring>

using namespace std;

string solution(string myString) {
    char answer[100000];
    strcpy(answer, myString.c_str());
    for(int t = 0; t < myString.size(); t++) {
        if(answer[t] < 'l') answer[t] = 'l';
    }
    string str(answer);
    return str;
}

