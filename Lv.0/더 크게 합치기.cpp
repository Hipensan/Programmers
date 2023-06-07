#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    string t = to_string(a) + to_string(b);
    string k = to_string(b) + to_string(a);
    int i = 0;
    if(t >= k) return i = stoi(t);
    else return i = stoi(k);
}