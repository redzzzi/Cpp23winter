#include <iostream>
#include <vector>
using namespace std;

int S = 0, pS = 0; // DNA 문자열의 길이, 부분 문자열의 길이
int checkArr[4];
int curArr[4];
int checkSecret = 0;
string A;

void Add(char c);
void Remove(char c);

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int Result = 0;

  cin >> S >> pS >> A;
  for (int i=0; i<4; i++) {
    cin >> checkArr[i];
    if (checkArr[i] == 0) {
      checkSecret++;
    }
  }

  for (int i=0; i<pS; i++) {
    Add(A[i]);
  }

  if (checkSecret == 4) {
    Result++;
  }

  for (int i=pS; i<S; i++) { // 슬라이딩 윈도우 - 새롭거나 없어지는 요소만 체크
    // cout << "i: " << i << '\n';
    int j = i-pS;
    // cout << "j: " << j << '\n';

    Add(A[i]);
    Remove(A[j]);

    if (checkSecret == 4) {
      Result++;
    }
  }
  
  cout << Result << '\n';

  return 0;
}

void Add(char c) {
  if (c == 'A') {
    curArr[0]++;
    if (curArr[0] == checkArr[0]) {
      checkSecret++;
    }
  } else if (c == 'C') {
    curArr[1]++;
    if (curArr[1] == checkArr[1]) {
      checkSecret++;
    }
  } else if (c == 'G') {
    curArr[2]++;
    if (curArr[2] == checkArr[2]) {
      checkSecret++;
    }
  }
  else {
    curArr[3]++;
    if (curArr[3] == checkArr[3]) {
      checkSecret++;
    }
  }
}

void Remove(char c) {
  if (c == 'A') {
    if (curArr[0] == checkArr[0]) {
      checkSecret--;
    }
    curArr[0]--;
  } else if (c == 'C') {
    if (curArr[1] == checkArr[1]) {
      checkSecret--;
    }
    curArr[1]--;
  } else if (c == 'G') {
    if (curArr[2] == checkArr[2]) {
      checkSecret--;
    }
    curArr[2]--;
  }
  else {
    if (curArr[3] == checkArr[3]) {
      checkSecret--;
    }
    curArr[3]--;
  }
  }
