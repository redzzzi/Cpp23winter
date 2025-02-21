#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer(prices.size());
    stack<int> price; // 가격을 인덱스로 저장한 스택
    
    for (int i=0; i<prices.size(); i++) {
        while (!price.empty() && prices[i] < prices[price.top()]) {
            answer[price.top()] = i - price.top();
            price.pop();
        }
        price.push(i);
    }
    
    while (!price.empty()) {
        answer[price.top()] = prices.size() - price.top() - 1;
        price.pop();
    }
    
    return answer;
}