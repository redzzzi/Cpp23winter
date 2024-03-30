#include <iostream>
#include <cstring>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

struct Human {
    Human() {};
    Human(const char* inName, int inAge, const char* inDOB) : Age(inAge) {
        strcpy(Name, inName);
        strcpy(DOB, inDOB);
        //Age = inAge;
    }
    /*
    Human(const char* inName, int inAge, const char* inDOB) {
        strcpy(Name, inName);
        strcpy(DOB, inDOB);
        Age = inAge;
    }
    */
    char Name[30];
    int Age;
    char DOB[20];

};

int main()
{
  // cout << "Hello world!" << endl;
  Human Input("Tom Cruise", 101, "May 1910");
  ofstream fsOut ("MyBinary.bin", ios_base::out | ios_base::binary);

  if (fsOut.is_open()) {
    cout << "Writing ..." << endl;
    // fsOut.write((char *)(&Input), sizeof(Input));
    fsOut.write(reinterpret_cast<const char *>(&Input), sizeof(Input));
    fsOut.close();
  }

  ifstream fsIn("MyBinary.bin", ios_base::in | ios_base::binary);
  if (fsIn.is_open()) {
    Human somePerson;
    fsIn.read((char*)&somePerson, sizeof(somePerson));
    cout << "Name: " << somePerson.Name << endl;
    cout << "Age: " << somePerson.Age << endl;
    cout << "DOB: " << somePerson.DOB << endl;
  }

  int i = 10;
  stringstream convertStream;
  convertStream << i;
  string strInput;
  convertStream >> strInput;

  cout << i << endl;
  cout << strInput << endl;

  int MyNumbers[] = {2011, 2052, -525};
  int Solar[2][3] = {{0, 1, 2}, {3, 4, 5}};

  // iterator is very similar to index
  vector<int> DynArr(3);
  DynArr[0] = 365;
  DynArr[1] = -421;
  DynArr[2] = 789;

  int AnotherNum = 200;
  DynArr.push_back(AnotherNum);

  cout << "Size: " << DynArr.size() << endl;

  char SayHello[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', '0'};
  cout << SayHello << endl;
  cout << sizeof(SayHello) << endl;

  SayHello[5] = '0';
  cout << SayHello << endl;
  cout << sizeof(SayHello) << endl;

  string MyString = "Hello 0W";
  cout << MyString << endl;
  string SecString = " Ha Ha";
  string ConCat = MyString + SecString;
  cout << ConCat << endl; 

  return 0;
}
