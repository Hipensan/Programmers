#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    while(n > 0) {
    if(n - 7 > 0) {
        n -= 7; answer++; }
    else { return answer; }
    }
    
}