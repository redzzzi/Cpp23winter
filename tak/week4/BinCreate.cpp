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
  return 0;
}
