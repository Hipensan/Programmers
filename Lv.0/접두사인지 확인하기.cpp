#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    int index = 0;
    index = my_string.find(is_prefix);
    if(index == 0) answer = 1;
    else answer = 0;
    
    
    return answer;
}

/*

    return (my_string.find(is_prefix) == 0);

*/