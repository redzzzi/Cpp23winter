#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int i = 10;

  cout << "i: " << i << endl;
  cout << "i in octal: " << oct << i << endl;
  cout << "i in hexa: " << hex << i << endl;
  cout << setiosflags(ios_base::hex|ios_base::showbase|ios_base::uppercase); //iomanip 

  return 0;
}
