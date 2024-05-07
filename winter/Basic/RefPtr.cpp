#include <iostream>
using namespace std;

int main(void) {
  int num = 12;
  int *ptr = &num;
  int **dptr = &ptr;

  cout << "num: " << num << endl;
  cout << "&num: " << &num << endl;
  cout << "*ptr: " << *ptr << endl;
  cout << "ptr: " << ptr << endl;
  cout << "&ptr: " << &ptr << endl;
  cout << "----------------------" << endl;

  int &ref = num;
  int *(&pref) = ptr;
  int **(&dpref) = dptr;

  cout << "ref: " << ref << endl;
  cout << "*pref: " << *pref << endl;
  cout << "pref: " << pref << endl;
  cout << "**dpref: " << **dpref << endl;

  return 0;
}
