#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    return (a % 2 != 0) && (b % 2 != 0) ? a*a + b*b :
    (a % 2 == 0) && (b % 2 == 0) ? abs(a-b) : 2*(a+b);
}