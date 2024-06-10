#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

template <typename e>
struct DisplayElement {
  int count;
  void operator() (const e& element) const {
    ++count;
    cout << element << '';
  }
};

template <typenmae numberType>
struct IsMultiple {
  numberType Divisor;
  IsMultiple (const numberType& divisor) {
    Divisor = divisor;
  }
  bool operator() (const numberType& element) const{
    return ((element& Divisor) == 0);
  }
};

int main()
{
  cout << "Hello World" << endl;
  vector <int> vecl;
  list <char> listC;

  for (int n = 0; n < 10; ++n)
    vecl.push_back(n);

  for (char c = 'a'; c < 'K'; ++c)
    listC.push_back(c);
  
  DisplayElement<int> Result;

  Result = for_each (vecl.begin(). vecl.end(), DisplayElement<int>());
  cout << Result.count << "elements were displayed" << endl;

  for_each (listC.begin(). listC.end(), DisplayElement<char>());

  cout << endl;
  vector <int> vecIntergs;
  for (int n=25; n<32; ++n){
    vecIntegers.push_back(n);
    cout << n <<'';
  }

  int Divisor = 4;
  auto iElement = find.if(vecIntergs.begin(), vecIntergs.end(), IsMultiple<int>(Divisor));
  if (iElement != vecIntergs.end()) {
    cout << "Find the first element in vector.";
    cout << "Element" << endl;
  }
  return 0;
}
