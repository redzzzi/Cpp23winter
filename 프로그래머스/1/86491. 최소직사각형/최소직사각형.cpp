#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    
    vector<int> bigger;
    vector<int> smaller;
    
    for (int i=0; i<sizes.size(); i++) {
        if (sizes[i][0] > sizes[i][1]) {
            bigger.push_back(sizes[i][0]);
            smaller.push_back(sizes[i][1]);
        } else {
            smaller.push_back(sizes[i][0]);
            bigger.push_back(sizes[i][1]);
        }
    }
    
    int biggest = *max_element(bigger.begin(), bigger.end());
    int smallest = *max_element(smaller.begin(), smaller.end());
    
    answer = biggest * smallest;
    
    return answer;
}