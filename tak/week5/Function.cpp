#include <iostream>
#include <functional>

using namespace std;

double Area(double R);
double Area(double R, double H);
/*
double Area(double R, int H);
double Area(int R, double H);
double Area(int R, int H);
*/

// define an inline function
inline long DoubleNum(int InputNum) { // inline doesn't use STACK.
  return InputNum * 2;
}

double Area(double R) {
  return R*R*3.14;
}

double Area(double R, double H) {
  return R*R*H*3.14;
}

int main() {
  cout << "Hello world!" << endl;
  cout << Area(2.0) << endl;
  cout << Area(2, 1) << endl;
  cout << DoubleNum(4) << endl;

  int n = [](int x, int y) { return x + y; }(5, 4); // Lambda function. nameless.
  cout << n << endl;

  auto f1 = [](int x, int y) { return x + y; }; // auto is automatically assigning its type.

  // Assign the same lambda expression to a function object
  function<int (int, int)> = [](int x, int y) { return x + y; };
 
  return 0;
}
