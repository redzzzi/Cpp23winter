#include <iostream>
#include <type_traits>

using namespace std;

// We want to display integer and double (floating point)
template <typename T>
void DisplayData(const T& data) {
  if constexpr(is_integral<T>::value)
    cout << "Integral data: " << data << endl;
  else if constexpr(is_floating_point<T>::value)
    cout << "Floating data: " << data << endl;
  else
    cout << "Unidentified data: " << data << endl;
}

int main() {
  cout << "Hello world!" << endl;
  DisplayData(12);
  DisplayData("Hello");

  return 0;
}
