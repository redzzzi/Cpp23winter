#include <iostream>
using namespace std;

template <typename T>
class smart_pointer {
private:
  T* m_pRawPointer;
public:
  smart_pointer(T* pData): m_pRawPointer(pData) {}
  T& operator * () const {
    return *(m_pRawPointer);
  }
};

int main() {
  cout << "Hello World!" << endl;
  smart_pointer<int> pDynamicInt(new int(42));

  return 0;
}
