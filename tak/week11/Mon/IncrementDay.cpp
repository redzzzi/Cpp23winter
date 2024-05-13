#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Date {
private:
  int D; int M; int Y;
  string DateInString;
public:
  // Constructor
  Date (int iD, int iM, int iY):
    D(iD), M(iM), Y(iY) {};
  // Unary increment operator
  Date &operator ++() {
    ++D;
    return *this; // this' type is class Date
  }
  Date &operator --() {
    --D;
    return *this;
  }
  Date operator ++(int) {
    Date Copy(D, M, Y); // this->D, this->M, this->Y
    ++D;
    return Copy;
  }
  friend ostream& operator << (ostream& os, const Date& myH); // operator <<를 멤버 메소드로 쓰고 싶지 않으면 std::ostream 쓰기
  /*
  operator const char*() {
    ostringstream fD;
    fD << D << " / " << M << " < " << Y << endl;
    DateInString = fD.str();
    return DateInString.c_str();
  }
  */
  void Display() {
    cout << D << " / " << M << " / " << Y << endl;
  }
};

ostream& operator << (ostream& os, const Date& myH) {
  return os << myH.D << " / " << myH.M << " / " << myH.Y;
}

int main() {
  cout << "Hello world!" << endl;
  Date H(15, 5, 2024);
  H.Display();
  ++H; // can't increment value of Date without additional code
  H.Display();
  --H;
  H.Display();
  H++; // ++operator(int) -> postfix
  H.Display();
  return 0;
}

// how to increment
// (1) reference
// (2) copy of something
