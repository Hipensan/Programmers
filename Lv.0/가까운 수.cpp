#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {    
    sort(array.begin(), array.end());
    if(array[0] - n >= 0) return array[0];
    for(int t = 1; t<array.size(); t++) {
        if(array[t] - n >= 0) {
            if(abs(array[t] - n) >= abs(array[t-1] - n)) return array[t-1] ;
            return array[t];   
        }
    }
    return array.back();
}