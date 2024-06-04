#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  cout << "Hello world!" << endl;
  string S("Hello String! Wake up to a beautiful day!");
  transform(S.begin(), S.end(), toupper);
  cout << S << endl;
  reverse(S.begin(), S.end());
  cout << S << endl;

  string::iterator iChars = find(S.begin(), S.end(), 'S');
  auto iChars2 = find(S.begin(), S.end(), 'S');
  S.erase(13, 28);
  cout << S << endl;
  S.erase(S.begin(), S.end());
  cout << S << endl;

  return 0;
}
