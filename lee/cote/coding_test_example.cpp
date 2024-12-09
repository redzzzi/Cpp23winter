#include <iostream>
#include <string>
using namespace std;

int main() {
  string input; 
  while (getline(cin, input)) {
    if (input == "hello, world") {
      cout << input << '\n';
    } else {
      cout << "No" << '\n';
    }
  }
  return 0;
}
