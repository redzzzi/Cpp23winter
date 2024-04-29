#include <iostream>

using namespace std;

namespace MS {
  double OSVersion = 11.1;
  string OSName = "Windows 11.1";
}

namespace APPLE {
  double OSVersion = 14.1;
  string OSName = "Mavericks 11.1";
}

// //using namespace 사용하지 않았을 때:
// int main() {
//   cout << "Hello World!" << MS::OSVersion << endl;
//   return 0;
// }

//using namespace 사용했을 때:
int main() {
  using namespace MS;
  cout << "Hello World!" << OSVersion << endl;
  return 0;
}
