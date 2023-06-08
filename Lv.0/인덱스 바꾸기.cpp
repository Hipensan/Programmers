#include <string>
#include <vector>

using namespace std;

void swap(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

string solution(string my_string, int num1, int num2) {
    swap(my_string[num1], my_string[num2]);
    return my_string;
}