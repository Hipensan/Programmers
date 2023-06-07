#include <string>
#include <vector>
#include <cmath> // for abs()

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    // Init
    char arr[4][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'},
        {'*', '0', '#'}
    };
    int l_x = 3, l_y = 0; // 왼손 초기 위치
    int r_x = 3, r_y = 2; // 오른손 초기 위치
    
    for(auto t : numbers) {
        if(t == 1 || t == 4 || t == 7) {
            l_x = t / 3; // 행 번호 업데이트
            l_y = 0;     // 열 번호 업데이트
            answer += 'L';
        }
        else if(t == 3 || t == 6 || t == 9) {
            r_x = t / 3 - 1; // 행 번호 업데이트
            r_y = 2;         // 열 번호 업데이트
            answer += 'R';
        }
        else {
            // 중앙 열의 숫자들과 0의 경우 처리
            int x, y;
            if (t == 0) {
                x = 3;
                y = 1;
            }
            else {
                x = (t - 1) / 3;  // 행 번호
                y = 1;      // 열 번호
            }
            
            // 거리 계산
            int l_dist = abs(l_x - x) + abs(l_y - y);
            int r_dist = abs(r_x - x) + abs(r_y - y);
            
            if (l_dist < r_dist) {
                l_x = x;
                l_y = y;
                answer += 'L';
            }
            else if (l_dist > r_dist) {
                r_x = x;
                r_y = y;
                answer += 'R';
            }
            else {
                // 거리가 같을 경우
                if (hand == "left") {
                    l_x = x;
                    l_y = y;
                    answer += 'L';
                }
                else {
                    r_x = x;
                    r_y = y;
                    answer += 'R';
                }
            }
        } 
    }
    return answer;
}
