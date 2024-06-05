#include <iostream>
#include <memory> // std::unique_str을 쓰려면 불러와야 한다
using namespace std;

class Date {
private:
  int Day;
  int Month;
  int Year;

  string DateInString;

public:
  Date (int InputDay, int InputMonth, int InputYear): Day(InputDay), Month(InputMonth), Year(InputYear) {};

  void DisplayDate() {
    cout << Day << " / " << Month << " / "  << Year << endl;
  }
};

int main() {
  unique_ptr<int> pDynamicAllocInteger (new int);
  *pDynamicAllocInteger = 42;

  // use smart pointer type like an int*
  cout << "Integer value is: " << *pDynamicAllocInteger << endl;

  unique_ptr<Date> pHoliday (new Date(25, 11, 2011));
  cout << "The new instance of date contains: ";

  // use pHoliday just as you would a Date*
  pHoliday->DisplayDate();

  // no need to do the following when using unique_ptr -> 왜냐면 얘는 똑똑하니까!!
  // delete pDynamicAllocInteger;
  // delete pHoliday;
  
  return 0;
}
