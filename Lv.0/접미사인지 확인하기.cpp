#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string my_string, string is_suffix) {
    string s = "";
    for(auto t=my_string.size() - is_suffix.size(); t<my_string.size(); t++ ) {
        s.push_back(my_string[t]);   
    }
    return s == is_suffix ? 1 : 0;
}