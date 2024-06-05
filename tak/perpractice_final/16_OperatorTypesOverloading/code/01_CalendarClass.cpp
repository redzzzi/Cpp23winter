#include <iostream>
using namespace std;

class Date {
private:
  int Day;  // Range 1 ~ 30 (한달엔 30일밖에 없다고 치자!!)
  int Month;
  int Year;
public:

  // day, month, year에 대해 객체를 초기화하는 생성자
  Date (int InputDay, int InputMonth, int InputYear): Day(InputDay), Month(InputMonth), Year(InputYear) {};
  // Unary increment operator (prefix)
  Date& operator ++ () {
    ++Day;
    return *this;
  }

  // Unary decrement operator (prefix)
  Date& operator -- () {
    --Day;
    return *this;
  }

  void DisplayDate() {
    cout << Day << " / " << Month << " / " << Year << endl;
  }
};

int main() {
  // 2011-12-25라는 날짜 객체에 대해 인스턴스화, 초기화
  Date Holiday(25, 12, 2011);

  cout << "The date object is initialized to: ";
  Holiday.DisplayDate();

  // Applying the prefix increment operator
  ++Holiday;

  cout << "Date after prefix-increment is: ";

  // Display date after incrementing
  Holiday.DisplayDate();

  --Holiday;
  --Holiday;

  cout << "Date after two prefix-decrements is: ";
  Holiday.DisplayDate();

  return 0;
}

/*
OUTPUT
------
The date object is initialized to: 25 / 12 / 2011
Date after prefix-increment is: 26 / 12 / 2011
Date after two prefix-decrements is: 24 / 12 / 2011
*/
