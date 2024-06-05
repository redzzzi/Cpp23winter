#include <iostream>
using namespace std;

template <typename T>
class smart_pointer {
private:
  T* m_pRawPointer;
public:
  smart_pointer (T* pDate): m_pRawPointer (pDate) {} // constructor
  ~smart_pointer () { delete m_pRawPointer; }

  T& operator* () const { // deferencing operator
    return *(m_pRawPointer);
  }
  T* operator-> () const { // member selection operator
    return m_pRawPointer;
  }
};

class Date {
private:
  int Day, Month, Year;
  string DateInString;
public:
  Date (int InputDay, int InputMonth, int InputYear): Day(InputDay), Month(InputMonth), Year(InputYear) {};
  void DisplayDate() {
    cout << Day << " / " << Month << " / " << Year << endl;
  }
};

int main() {
  smart_pointer<int> pDynamicInt(new int(42));
  cout << "Dynamically allocated integer value = " << *pDynamicInt;

  smart_pointer<Date> pDate(new Date(25, 12, 2011));
  cout << "Date is = ";
  pDate->DisplayDate();

  return 0;
}
