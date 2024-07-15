// 0x01강의 연습문제 - 문제2
// 주어진 길이 N의 int 배열 arr에서 합이 100인 서로 다른 위치의 두 원소가 존재하면 1을,
// 존재하지 않으면 0을 반환하는 함수 func2(int arr[], int N)을 작성하라.
// arr의 각 수는 0 이상 100 이하이고 N은 1000 이하이다.
#include <bits/stdc++.h>
using namespace std;

int func2(int arr[], int N) {
  int freq[101] = {}; // 1 ~ 100 숫자의 빈도수를 나타내기 위한 int 배열
  for (int i=0; i<N; i++) {
    if (freq[100-arr[i]] == 1) // arr 배열의 해당 인덱스값과 더했을때 100이 되는 수가 이미 있으면 1
      return 1;
    freq[arr[i]] = 1;
  }
  return 0;
}
