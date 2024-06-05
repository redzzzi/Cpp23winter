#include <iostream>
#include <sstream> // ostringstream을 사용하기 위한 헤더 파일
#include <string>  // c_str 메소드를 사용하기 위한 헤더 파일
using namespace std;

class Date {
private:
  int Day;             // 날짜를 저장하는 정수형 변수들
  int Month;
  int Year;

  string DateInString; // 날짜를 문자열로 저장하는 변수
public:
  Date (int InputDay, int InputMonth, int InputYear): Day(InputDay), Month(InputMonth), Year(InputYear) {};

  operator const char*() { // Date 객체를 'const char*' 타입으로 변환하는 연산자
    ostringstream formattedDate; // 날짜를 문자열로 포맷
    formattedDate << Day << " / " << Month << " / " << Year;

    DateInString = formattedDate.str(); // 포맷한 결과를 DateInString에 저장하고 그 문자열의 c 스타일 문자열 포인터를 리턴
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
