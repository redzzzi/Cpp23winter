#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    vector<int> su1 = {1, 2, 3, 4, 5};
    vector<int> su2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> su3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    int count1 = 0, count2 = 0, count3 = 0;
    
    for (int i=0; i<answers.size(); i++) {
        if (answers[i] == su1[i % su1.size()]) count1++;
        if (answers[i] == su2[i % su2.size()]) count2++;
        if (answers[i] == su3[i % su3.size()]) count3++;
    }
    
    int max_score = max({count1, count2, count3});
    
    if (count1 == max_score) answer.push_back(1);
    if (count2 == max_score) answer.push_back(2);
    if (count3 == max_score) answer.push_back(3);
    
    return answer;
}