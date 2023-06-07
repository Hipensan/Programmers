#include <string>
#include <vector>
#include <sstream>
using namespace std;

int solution(vector<int> array) {
    stringstream ss;
    int count = 0;
    for (auto i : array) ss << i;
    for (int j = 0; j < ss.str().length(); j++)
        if (ss.str()[j]  == '7') count++;
    return count;
}