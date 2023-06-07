#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string binomial) {
    string x, op, y;
    stringstream s(binomial);
    s >> x >> op >> y;
    int a = stoi(x);
    int b = stoi(y);
    if(op == "+") return a + b;
    else if(op == "-") return a - b;
    else return a * b;
    
}