#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

typedef map<int, string> MAP_INT_STRING;
typedef multimap<int, string> MMAP_INT_STRING;

typedef map<string, string> DIRECTORY_NOCASE;
typedef map<string, string> DIRECTORY_WITHCASE;

template<typename T>
void DisplayContents(const T& Input) {
  for (auto iE = Input.cbegin(); iE != Input.cend(); ++iE) {
    cout << iE->first << "->" << iE->second << endl;
  }
}

struct PredicateIgnoreCase {
  bool operator () (const string& str1, const string& str2) const {
    string str1NoCase(str1), str2NoCase(str2); // needed to be transformed
    transform(str1.begin(), str1.end(), str1NoCase.begin(), (int(*)(int))toupper);

    return (str1NoCase < str2NoCase);
  }
};

template<typename T>
void output(const T& table) { // 원래는 const auto&인데 에러나서 템플릿 사용하는 방식으로 함.
  for (auto const& [key, val]: table) {
    cout << key << "-> " << val << endl;
  }
}

int main() {
  MAP_INT_STRING mapIntToString;
  // using value_type
  mapIntToString.insert(MAP_INT_STRING::value_type(3, "Three"));

  // using function make_pair
  mapIntToString.insert(make_pair(-1, "Minus One"));

  // using a pair object directly
  mapIntToString.insert(pair<int, string>(1000, "One Thousand"));

  // using an array style
  mapIntToString[1000000] = "One Million";
  cout << "Size: " << mapIntToString.size() << endl;
  // #1st approach
  DisplayContents(mapIntToString);

  // #2nd approach
  map<int, string>::iterator it;
  for (it = mapIntToString.begin(); it != mapIntToString.end(); it++) {
    cout << it->first << "-> " << it->second << endl;
  }
  cout << endl;

  // #3rd approach C++17 version
  for (auto const& x: mapIntToString) {
    cout << x.first << "-> " << x.second << endl;
  }
  cout << endl;

  // #4th approach C++17 version
  for (auto const& [key, val]: mapIntToString) {
    cout << key << "-> " << val << endl;
  }
  cout << endl;
  
  // #5th approach C++17 approach
  for (auto const& [key, val]: mapIntToString) {
    cout << key << "-> " << val << endl;
  }
  cout << endl;
  /*
  다른 STL 타입을 적용하는 것?
  */

  // #6th approach
  for (auto it = mapIntToString.begin(); it != mapIntToString.end(); it++) {
    cout << it->first << "-> " << it->second << endl;
  }

  output(mapIntToString);

  MMAP_INT_STRING mmapIntToString(mapIntToString.cbegin(), mapIntToString.cend());
  mmapIntToString.insert(make_pair(1000, "Thousand"));
  DisplayContents(mmapIntToString);
  cout << "The number 1000: " << mmapIntToString.count(1000) << endl;

  int Key = 1000;
  auto iPairFound = mapIntToString.find(Key);
  if (iPairFound != mapIntToString.end()) {
    cout << "key: " << iPairFound->first << "-> " << iPairFound->second << endl;
  } else {
    cout << "Sorry, pair with key" << Key << " not in the map " << endl;
  }

  DIRECTORY_NOCASE dirCaseInsensitive;

  dirCaseInsensitive.insert(make_pair("John", "2345674"));
  dirCaseInsensitive.insert(make_pair("JOHN", "2345674"));
  dirCaseInsensitive.insert(make_pair("Sara", "4235678"));
  dirCaseInsensitive.insert(make_pair("Jack", "3245678"));

  DisplayContents(dirCaseInsensitive);

  DIRECTORY_WITHCASE dirCaseSensitive(dirCaseInsensitive.begin(), dirCaseInsensitive.end());
  DisplayContents(dirCaseSensitive);

  string strNameInput = "sara";
  auto iPairInNOcaseDir = dirCaseInsensitive.find(strNameInput);
  if (iPairInNOcaseDir != dirCaseInsensitive.end()) {
    cout << iPairInNOcaseDir->first << "-> " << iPairInNOcaseDir->second << "found!!" << endl; // sara는 없음
  } else {
    cout << strNameInput << " is not found!!" << endl; // 유효하지 않은 값 찾으려면 이상한 거 뜸
  }

  auto iPairInCaseSensDir = dirCaseSensitive.find(strNameInput);
  if (iPairInNOcaseDir != dirCaseInsensitive.end()) {
    cout << iPairInCaseSensDir->first << "-> " << iPairInCaseSensDir->second << "found!!" << endl; // sara는 없음
  } else {
    cout << strNameInput << " is not found!!" << endl; // 유효하지 않은 값 찾으려면 이상한 거 뜸
  }

  return 0;
}
