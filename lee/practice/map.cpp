#include <iostream>
#include <map>
using namespace std;

int main() {
  map<char, int> myMap;

  myMap.insert(pair<char, int>('a', 100));
  myMap.insert(pair<char, int>('z', 200));

  pair<map<char, int>::iterator, bool> ret;
  ret = myMap.insert(pair<char, int>('z', 500));

  // 해당 key-value가 제대로 삽입이 안됐을 때
  // 삽입하려는 키가 이미 존재할 때 기존 값 유지
  if (ret.second == false) {  
    cout << "Element 'z' already existed. Value: " << (ret.first)->second << '\n';
  }

  map<char, int>::iterator it = myMap.begin();
  myMap.insert(it, pair<char, int>('b', 300));
  myMap.insert(it, pair<char, int>('c', 400));

  for (it = myMap.begin(); it!=myMap.end(); ++it) {
    cout << '(' << it->first << ", " << it->second << ')' << '\n';
  }

  return 0;
}
