// constexpr with Classes and Objects
#include <iostream>
#include <iomanip>
#include <type_traits>

using namespace std;

template <typename T>

void DisplayData(const T& data) {
  if constexpr (is_integral<T>::value)
    cout << "Integral data: " << data << endl;
  else if constexpr (is_floating_point<T>::value)
    cout << setprecision(15) << "Floating point data: " << data << endl;
  else
    cout << "Unidentified data: " << data << endl;
}

int main() {
  DisplayData(15); // type is int, so it follows first if line
  DisplayData("Hello World!"); // type is no where among 3, so it follows third else line
  
  return 0;
}
