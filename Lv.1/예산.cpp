#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    int tmp = 0;
    sort(d.begin(), d.end());
    for(auto t : d) {
        if(tmp + t > budget) break;
        tmp += t;
        answer++;
    }
    return answer;
}