#include <iostream>
#include <list>
#include <string>
#include <forward_list>
#include <set>
using namespace std;

struct ContactItem {
  string Name;
  string PhoneNumber;
  string Representation;

  ContactItem(const string& strName, const string& strNumber) {
    Name = strName;
    PhoneNumber = strNumber;
    Representation = (Name + ": " + PhoneNumber);
  }
  // used by list::remove() given contact list item
  bool operator == (const ContactItem& itemToCompare) const {
    return (itemToCompare.Name == this->Name);
  }
  // used by list::sort()
  bool operator < (const ContactItem& itemToCompare) const {
    return (this->Name < itemToCompare.Name);
  }
  operator const char*() const {
    return Representation.c_str();
  }
};

bool SortPredicate_Descending(const int& lsh, const int& rsh) {
  return (lsh > rsh);
}

template <typename T>
void DisplayContents (const T& Input) {
  for (auto iElement = Input.cbegin(); iElement != Input.cend(); ++iElement)
    cout << *iElement << endl;
}

int main() {
  list<int> listIntegers;

  listIntegers.push_front(4);
  listIntegers.push_front(3);
  listIntegers.push_front(2);
  listIntegers.push_front(1);
  listIntegers.push_front(0);
  listIntegers.push_back(5);

  listIntegers.insert(listIntegers.begin(), 2);
  listIntegers.insert(listIntegers.end(), 100);
  for (int& x: listIntegers) cout << x << endl;

  listIntegers.reverse();
  for (int& x: listIntegers) cout << x << endl;

  list<int> myList;
  myList.push_front(444);
  myList.push_front(2024);
  myList.push_front(-1);
  myList.push_front(0);
  myList.push_front(-5);
  myList.sort();
  for (int& x: myList) cout << x << endl;
  cout << endl;
  myList.sort(SortPredicate_Descending);
  for (int& x: myList) cout << x << endl;

  list<ContactItem> myContacts;
  myContacts.push_back(ContactItem("Trumph", "555"));
  myContacts.push_back(ContactItem("Biden", "444"));
  myContacts.push_back(ContactItem("Zico", "333"));
  myContacts.push_back(ContactItem("Lesserafim", "222"));
  myContacts.push_back(ContactItem("Aespa", "111"));
  myContacts.sort();
  DisplayContents(myContacts);
  cout << endl;
  for (ContactItem& x: myContacts) {
    cout << x.Representation << endl;
  }
  cout << endl;

  myContacts.remove(ContactItem("Trumph", " "));
  DisplayContents(myContacts);

  forward_list<int> fListIntegers;
  fListIntegers.push_front(0); // push_back은 forward_list에서 지원하지 않는 것 같음

  set <int> setIntegers;
  multiset<int> msetIntegers;

  setIntegers.insert(60);
  setIntegers.insert(-1);
  setIntegers.insert(3000);
  setIntegers.insert(3000); // only one 3000

  for (const int& x: setIntegers) {
    cout << x << " ";
  }
  cout << endl;

  msetIntegers.insert(setIntegers.begin(), setIntegers.end());
  msetIntegers.insert(3000);
  cout << endl;
  for (const int& x: msetIntegers) {
    // x = 2000; // x is constant. so it gives an error.
    cout << x << " ";
  }
  cout << endl;

  // DO NOT BELOW DO NOT BELOW DO NOT BELOW DO NOT BELOW DO NOT BELOW DO NOT BELOW DO NOT BELOW
  // I want to change element values in the set.
  int x = 10;
  const int* y = &x;
  int *z;

  // *y = 11; // OK or Bad..
  // z = y;
  z = const_cast<int*>(y);
  *z = 23;
  cout << "z: " << *z << "y: " << *y << endl;

  set<int> mySet;
  mySet.insert(3);
  mySet.insert(4);
  mySet.insert(2);

  int j = 10;
  for (auto i = mySet.begin(); i != mySet.end(); i++) {
    int* elem = const_cast<int*>(&*i); // pointer and value. so we need ampersand. 
    *elem = j--;
  }

  for (const int& x: mySet) {
    cout << x << endl;
  }

  return 0;
}

// Sort
// 1. pick up an element
// 2. compare two elements
// 3. test condition (a < b)
