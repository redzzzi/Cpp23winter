#include <iostream>

using namespace std;

void Display(const char* str, int n);             // 문자열 str을 n번 출력함
void Display(const char* str1, const char* str2); // 문자열 str1과 str2를 연달아 출력함
void Display(int x, int y);                       // x * y를 출력함
void Display(double x, double y);                 // x / y를 출력함

void Display(const char* str, int n){
  for (int i=0; i<n; i++)
    cout << str << ' ';
  cout << '\n';
}
void Display(const char* str1, const char* str2){
  cout << "str1: " << str1 << ' ' << "str2: " << str2 << endl;
}
void Display(int x, int y){
  cout << x * y << endl;
}
void Display(double x, double y){
  cout << x / y << endl;
}

int main() {
  Display("C++", 3);              // 1번 Display() 함수 호출 -> "C++C++C++"
  Display("C++", " Programming"); // 2번 Display() 함수 호출 -> "C++ Programming"
  Display(3, 4);                  // 3번 Display() 함수 호출 -> 12
  Display(4.2, 2.1);              // 4번 Display() 함수 호출 -> 2

  return 0;
}
