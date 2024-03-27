#include <iostream>
#include <cstring>
#include <fstream>
#include <iomanip>
#include <string>

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
  }

  return 0;
}
