#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> bracket;
    
    for (char c: s) {
        if (c == '(') {
            bracket.push(c);
        } else { // c == ')'
            if (bracket.empty()) return false;
            bracket.pop();
        }
    }
    
    if (!bracket.empty()) {
        answer = false;
    }

    return answer;
}