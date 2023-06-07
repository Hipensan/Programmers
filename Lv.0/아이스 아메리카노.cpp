#include <string>
#include <vector>
#define ICE_AMERICANO 5500
using namespace std;

vector<int> solution(int money) {
    vector<int> answer(2, 0);
    while(true) {
        if(money - ICE_AMERICANO >= 0) {
            money -= ICE_AMERICANO;
            answer[0]++;
        } 
        else if(money - ICE_AMERICANO < 0) {
            answer[1] = money;
            break;
        }
    }
    return answer;
}