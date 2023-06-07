#include <string>
#include <vector>

using namespace std;

string solution(vector<string> arr) {
    string s = "";
    for(auto i : arr) {
        s += i;
    }
    return s;
}