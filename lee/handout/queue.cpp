// Assignment - 3: Queue
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int taskN; // 전체 작업의 수를 저장하는 변수
    cin >> taskN;

    vector<pair<int, int>> tasks(taskN); // 각 작업의 (taskID, procT)을 저장하는 벡터
    for (int i = 0; i < taskN; ++i) {
        int taskID, procT;
        cin >> taskID >> procT;
        tasks[i] = make_pair(taskID, procT);
    }

    queue<pair<int, int>> taskQueue; // 작업을 처리할 큐 (taskID, remainingTime)
    vector<pair<int, int>> complT; // 작업의 완료 시간과 taskID를 저장할 벡터 (completionTime, taskID)

    int curT = -1; // 현재 시간을 나타내는 변수, -1로 초기화하여 첫 번째 루프에서 0이 되도록 설정
    int nxtTaskIdx = 0; // 다음에 도착할 작업의 인덱스를 추적하는 변수
    pair<int, int> incompleteTask = make_pair(-1, -1); // 완료되지 않은 작업을 임시로 저장하는 변수

    // 모든 작업이 완료될 때까지 반복
    while (!taskQueue.empty() || nxtTaskIdx < taskN || incompleteTask.second != -1) {

        curT++; // 현재 시간 1초 증가

        // 현재 시간에 도착하는 새로운 작업을 큐에 추가
        if (nxtTaskIdx < taskN && curT == nxtTaskIdx) {
            int taskID = tasks[nxtTaskIdx].first;
            int procT = tasks[nxtTaskIdx].second;
            taskQueue.push(make_pair(taskID, procT)); // 작업 큐에 추가
            nxtTaskIdx++; // 다음 작업 인덱스 증가
        }

        // 이전에 처리했지만 완료되지 않은 작업을 큐에 재삽입
        if (incompleteTask.second != -1) {
            taskQueue.push(incompleteTask); // 작업 큐에 재삽입
            incompleteTask = make_pair(-1, -1); // 임시 변수 초기화
        }

        // 큐에서 작업을 하나 꺼내어 1초 동안 처리
        if (!taskQueue.empty()) {
            pair<int, int> currentTask = taskQueue.front(); // 큐의 맨 앞 작업을 가져옴
            taskQueue.pop(); // 큐에서 제거

            currentTask.second--; // 남은 처리 시간 1초 감소

            if (currentTask.second == 0) {
                // 작업이 완료된 경우
                complT.push_back(make_pair(curT, currentTask.first)); // 완료 시간과 taskID 저장
            } else {
                // 작업이 완료되지 않은 경우 다음 반복에서 재삽입하기 위해 임시 변수에 저장
                incompleteTask = currentTask;
            }
        }
    }

    // 각 작업의 완료 시간을 출력
    for (auto &completion : complT) {
        cout << completion.first << " " << completion.second << endl;
    }

    return 0;
}
