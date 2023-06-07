#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string letter) {
    string answer = "";
    char tmp;
    stringstream ss(letter);

    vector<string> words;
    string word;

    while (ss >> word) {
        tmp = word == ".-" ? 'a' :
            word == "-..." ? 'b' :
            word == "-.-." ? 'c' :
            word == "-.." ? 'd' :
            word == "." ? 'e' :
            word == "..-." ? 'f' :
            word == "--." ? 'g' :
            word == "...." ? 'h' :
            word == ".." ? 'i' :
            word == ".---" ? 'j' :
            word == "-.-" ? 'k' :
            word == ".-.." ? 'l' :
            word == "--" ? 'm' :
            word == "-." ? 'n' :
            word == "---" ? 'o' :
            word == ".--." ? 'p' :
            word == "--.-" ? 'q' :
            word == ".-." ? 'r' :
            word == "..." ? 's' :
            word == "-" ? 't' :
            word == "..-" ? 'u' :
            word == "...-" ? 'v' :
            word == ".--" ? 'w' :
            word == "-..-" ? 'x' :
            word == "-.--" ? 'y' :
            word == "--.." ? 'z' : 'X';
        answer.push_back(tmp);
    }

    return answer;
}