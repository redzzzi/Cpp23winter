#include <iostream>
#include <deque>
using namespace std;

int main() {
  cout << "Hello World!" << endl;
  
  deque<int> deqIntegers;
  deqIntegers.push_back(3);
  deqIntegers.push_back(4);
  deqIntegers.push_back(5);

  for (size_t i=0; i<deqIntegers.size(); ++i) {
    cout << "E[" << i << "] = ";
    cout << deqIntegers[i] << endl;
  }

  deqIntegers.push_front(1);
  for (size_t i=0; i<deqIntegers.size(); ++i) {
    cout << "E[" << i << "] = ";
    cout << deqIntegers[i] << endl;
  }
  
  deqIntegers.pop_back();
  for (size_t i=0; i<deqIntegers.size(); ++i) {
    cout << "E[" << i << "] = ";
    cout << deqIntegers[i] << endl;
  }

  for (auto iE = deqIntegers.begin(); iE != deqIntegers.end(); ++iE) {
    size_t offset = distance(deqIntegers.begin(), iE);
    cout << "E[" << offset << "] = ";
    cout << deqIntegers[offset] << endl;
  }

  for (int& x: deqIntegers) { // (Type& x: iterable), Element type of deqIntegers -> int
    cout << x << endl;
  }

  return 0;
}
