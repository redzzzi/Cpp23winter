// 문제 2
// 주어진 길이 N의 int 배열 arr에서 합이 100인
// 서로 다른 위치의 두 원소가 존재하면 1을,
// 존재하지 않으면 0을 반환하는 함수 func2(int arr[], int N)을 작성하라.
// arr의 각 수는 0 이상 100 이하이고 N은 1000 이하이다.
//
// func2({1, 52, 48}, 3) = 1,
// func2({50, 42}, 2) = 0,
// func2({4, 13, 63, 87}, 4) = 1
#include <iostream>
using namespace std;

int func2(int arr[], int N) {
  int judg = 0;
  int diff = 0;
  for (int i=0; i<N; i++) {
    for (int j=i+1; j<N; j++) {
      judg = arr[i] + arr[j];
      if (arr[i] != arr[j] && judg == 100) {
        cout << "1" << endl;
        diff = 1;
      }
    }
  }
  if (diff == 0) {
    cout << "0" << endl;
  }
  return 0;
}

int main() {
  int number = 0; 
  cout << "number: ";
  cin >> number;
  cout << "array: " << endl;
  int array[number];
  for (int i=0; i<number; i++) {
    cin >> array[i];
  }
  cout << "func2: ";
  func2(array, number);

  return 0;
}
