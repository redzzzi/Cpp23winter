#include <iostream>
#include <vector>
using namespace std;

void Displayvector(const vector<int> vecInput) {
  for (auto iE = vecInput.cbegin(); iE != vecInput.cend(); ++iE)
    cout << *iE << endl;
}

int main() {
  vector<int> V;
  vector<int> VE(10); // a vector with 10 elements
  vector<int> VE90(10, 90); // 10 elements initialized 90
  // Copy
  vector<int> VCopy(VE90);
  vector<int> VSome(VE90.cbegin(), VE90.cbegin()+5);
  cout << "Hello world!" << endl;

  vector<int> vecIntegers(4, 90);
  Displayvector(vecIntegers);
  vecIntegers.insert(vecIntegers.end(), 2, 25);
  cout << endl;
  Displayvector(vecIntegers);

  vector<int> vecIntegerArray;
  vecIntegerArray.push_back(50);
  vecIntegerArray.push_back(1);
  vecIntegerArray.push_back(987);
  vecIntegerArray.push_back(1001);
  for (size_t i=0; i<vecIntegerArray.size(); ++i) {
    cout << "E[" << i << "] = " << vecIntegerArray[i] << endl;
  }

  vecIntegerArray[2] = 2011;
  cout << vecIntegerArray[2] << endl;

  cout << endl;
  vecIntegerArray.pop_back();
  for (size_t i=0; i<vecIntegerArray.size(); ++i) {
    cout << "E[" << i << "] = " << vecIntegerArray[i] << endl;
  }
  
  return 0;
}
