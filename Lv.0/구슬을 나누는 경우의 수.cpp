#include <string>
#include <vector>
#include <iostream>

using namespace std;

int comb(int balls, int share) {
    if (share == 0 || balls == share) 
        return 1;
    else  
        return comb(balls - 1, share - 1) + comb(balls - 1, share);
}

int solution(int balls, int share) {
    int answer = comb(balls, share);
    return answer;
}
