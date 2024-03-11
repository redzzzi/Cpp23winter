#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
  // [1]
  // char Char1 = '\0', Char2 = '\0', Char3 = '\0';
  // cin >> Char1 >> Char2 >> Char3;
  // cout << Char1 << Char2 << Char3;

  // [2]
  // char CStyleStr[10] = {0};
  // cin.get(CStyleStr, 9);
  // cout << CStyleStr << endl;

  // [3]
  // string Name;
  // cin >> Name;
  // cout << "Hi " << Name << endl;

  // [4]
  // string Name;
  // getline(cin, Name);
  // cout << "Hi " << Name << endl;

  // [5]
  ofstream myFile;
  myFile.open("HelloFile.txt", ios_base::out);
  if (myFile.is_open()) {
    cout << "File Openend Successfully" << endl;
    myFile << "My First test file" << endl;
    myFile << "Hello File";
  }

  return 0;
}
