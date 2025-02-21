#include <vector>
#include <queue>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int cur_weight = 0; // 현재 다리 위의 총 무게
    queue<pair<int, int>> bridge; // (트럭 무게, 남은 거리)
    
    queue<int> trucks;
    for (int w: truck_weights) {
        trucks.push(w);
    }
    
    while (!trucks.empty() || !bridge.empty()) {
        answer++;
        
        if (!bridge.empty() && bridge.front().second == 0) {
            cur_weight -= bridge.front().first;
            bridge.pop();
        }
        
        if (!trucks.empty() && cur_weight + trucks.front() <= weight) {
            int new_truck = trucks.front();
            trucks.pop();
            cur_weight += new_truck;
            bridge.push({new_truck, bridge_length});
        }
        
        queue<pair<int, int>> temp;
        while (!bridge.empty()) { // 한번에 건널 수 있는 트럭 최대로 bridge에 올린 상태에서
            auto t = bridge.front();
            bridge.pop();
            temp.push({t.first, t.second - 1}); // 트럭을 이동시킴
        }
        bridge = temp; // 모든 트럭의 남은 이동 거리가 1씩 감소된 상태로 유지
    }
    
    return answer;
}