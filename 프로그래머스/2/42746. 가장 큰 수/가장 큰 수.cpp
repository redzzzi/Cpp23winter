#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b) { // a = 2, b = 10일 때, 
    return a + b > b + a; // 210 > 102이므로
}

string solution(vector<int> numbers) {
    vector<string> num_str;
    for (auto k: numbers) {
        num_str.push_back(to_string(k));
    }
    
    sort(num_str.begin(), num_str.end(), compare);
    
    string answer = "";
    for (string str: num_str) {
        answer += str;
    }
    
    // numbers의 모든 요소가 0일 경우
    if (answer[0] == '0') {
        return "0"; // '0' 문자이므로, 타입이 달라 에러 남
    }
    
    return answer;
}