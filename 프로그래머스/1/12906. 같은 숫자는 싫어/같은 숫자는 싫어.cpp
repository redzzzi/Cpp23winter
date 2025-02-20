#include <vector>
#include <iostream>
#include <queue>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    queue<int> filter;
    
    for (int k: arr) {
        if (filter.empty() || filter.back() != k) {
            filter.push(k);
        } else if (filter.back() == k) {
            continue;
        }
    }
    
    int loop = filter.size();
    while (loop--) {
        answer.push_back(filter.front());
        filter.pop();
    }

    return answer;
}