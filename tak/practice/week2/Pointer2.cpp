#include <iostream>

using namespace std;

int main() {
  int Age = 30;
  int DogAge = 0;

  int* pInteger = &Age;
  cout << pInteger << endl; // Age의 주솟값을 프린트

  pInteger = &DogAge;
  cout << pInteger << endl; // DogAge의 주솟값을 프린트

  return 0;
}
