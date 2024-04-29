#include <iostream>

using namespace std;

int main() {
  cout << "Hello World" << endl;
  int HoursInDay = 24;
  const int* pInteger = &HoursInDay;
  // const int* const pInteger = &HoursInDay;
  int MonthInYear = 12;
  pInteger = &MonthInYear;
  // *pInteger = 13;

  return 0;
}
