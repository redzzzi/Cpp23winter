#include <iostream>
#include <string>

using namespace std;

int main() {
  // char Char1 = '\0', Char2 = '\0', Char3 = '\0';
  // cin >> Char1 >> Char2 >> Char3;
  // cout << Char1 << Char2 << Char3;

  // char CStyleStr[10] = {0};
  // cin.get(CStyleStr, 9);
  // cout << CStyleStr << endl;

  // string Name;
  // cin >> Name;
  // cout << "Hi " << Name << endl;

  string Name;
  getline(cin, Name);
  cout << "Hi " << Name << endl;

  return 0;
}
