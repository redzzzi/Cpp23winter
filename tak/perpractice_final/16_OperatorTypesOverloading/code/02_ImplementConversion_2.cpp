#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Date {
private:
  int Day;
  int Month;
  int Year;

  string DateInString;
public:
  Date (int InputDay, int InputMonth, int InputYear): Day(InputDay), Month(InputMonth), Year(InputYear) {};

  operator const char*() {
    ostringstream formattedDate;
    formattedDate << Day << " / " << Month << " / " << Year;

    DateInString = formattedDate.str();
    return DateInString.c_str();
  }
  Date& operator ++ () {
    ++Day;
    return *this;
  }
  Date& operator -- () {
    --Day;
    return *this;
  }
  Date& operator ++ (int) {
    Day++;
    return *this;
  }
  Date& operator -- (int) {
    Day--;
    return *this;
  }
  void DisplayDate() {
    cout << DateInString;
  }
};

int main() {
  Date Holiday(25, 12, 2011);

  string strHoliday(Holiday);
  strHoliday = Date(11, 11, 2011);

  cout << "Holiday is on: " << Holiday << endl;
  cout << strHoliday << endl;

  cout << "\nThe date object is initialized to: " << endl;
  Holiday.DisplayDate();

  Holiday = Holiday++;
  cout << "\nDate after prefix-increment is: " << endl;
  Holiday.DisplayDate();

  cout << "\nDate after prefix-increment is: " << endl;
  Holiday.DisplayDate();

  --Holiday;
  --Holiday;

  cout << "\nDate after two prefix-increment is: " << endl;
  Holiday.DisplayDate();

  return 0;
}
