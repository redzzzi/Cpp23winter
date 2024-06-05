#include <iostream>
using namespace std;

class Date {
private:
  int Day, Month, Year;
public:
  // 일, 월, 년에 대한 객체를 초기화하는 생성자
  Date (int InputDay, int InputMonth, int InputYear): Day(InputDay), Month(InputMonth), Year(InputYear) {};

  // Binary Addition Operator
  Date operator + (int DaysToAdd) {
    Date newDate (Day + DaysToAdd, Month, Year);
    return newDate;
  }

  // Binary Subtraction Operator
  Date operator - (int DaysToSub) {
    return Date(Day - DaysToSub, Month, Year);
  }

  void DisplayDate() {
    cout << Day << " / " << Month << " / " << Year << endl;
  };
};

int main() {
  // 2011년 12월 25일 인스턴스를 생성하고 초기화한다.
  Date Holiday (25, 12, 2011);

  cout << "Holiday on: ";
  Holiday.DisplayDate();

  Date PreviousHoliday (Holiday - 19);
  cout << "Previous holiday on: ";
  PreviousHoliday.DisplayDate();

  Date NextHoliday (Holiday + 6);
  cout << "Next holiday on: ";
  NextHoliday.DisplayDate();

  return 0;
}
