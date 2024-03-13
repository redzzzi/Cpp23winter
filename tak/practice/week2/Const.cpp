#include <iostream>

using namespace std;

int main() {
  cout << "Hello World" << endl;
  int HoursInDay = 24;
  const int* pInteger = &HoursInDay;
  int MonthInYear = 12;
  pInteger = &MonthInYear;

  return 0;
}
