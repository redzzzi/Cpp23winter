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
    ostringstream formattedDate; // sstream 헤더파일 불러와야 사용 가능
    formattedDate << Day << " / " << Month << " / " << Year; // ostringstream 덕분에 알아서 문자열로 조합됨

    DateInString = formattedDate.str();
    return DateInString.c_str(); // c_str 메소드로 string을 반환함
  }
};

int main() {
  Date Holiday(25, 12, 2011);

  cout << "Holiday is on: " << Holiday << endl;

  return 0;
}
