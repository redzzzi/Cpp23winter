#include <string>
#include <iostream>
int main() {
  using namespace std;
  const char* constCStyleString = "Hello String!";
  cout << "Constant string is: " << constCStyleString << endl;
  string strFromConst (constCStyleString);
  cout << "strFromConst is: " << strFromConst;

}
