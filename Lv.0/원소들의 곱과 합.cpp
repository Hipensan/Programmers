#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(vector<int> num_list) {
    int a, b = 0;
    a = num_list[0];
    for(int i =1; i<num_list.size(); i++) 
        a *= num_list[i];
    for(auto t : num_list) 
        b += t;
    return a < pow(b,2) ? 1 : 0;
    
}
