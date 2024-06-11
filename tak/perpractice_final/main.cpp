#include <iostream>
#include <string>
#include <list>
using namespace std;
template <typename T>
void DisplayContents (const T& Input) {
  for (auto iElement = Input.cbegin(); iElement != Input.cend(); ++iElement)
    cout << *iElement << endl;
  cout << endl;
}

struct ContactItem {
  string strContactName;
  string strPhoneNumber;
  string strDisplayRepresentation;

  ContactItem (const string& strName, const string& strNumber) {
    strContactName = strName;
    strPhoneNumber = strNumber;
    strDisplayRepresentation = (strContactName + ": " + strPhoneNumber);
  }
  bool operator == (const ContactItem& itemToCompare) const {
    return (itemToCompare.strContactName == this->strContactName);
  }
  bool operator < (const ContactItem& itemToCompare) const {
    return (this->strContactName < itemToCompare.strContactName);
  }
  operator const char*() const {
    return strDisplayRepresentation.c_str();
  }
};

bool SortOnPhoneNumber (const ContactItem& item1, const ContactItem& item2) {
  return (item1.strPhoneNumber < item2.strPhoneNumber);
}

int main() {
  list <ContactItem> Contacts;
  Contacts.push_back(ContactItem("Jack Welsch", "+1 7889 879 879"));
  Contacts.push_back(ContactItem("Bill Gates", "+1 97 7897 8799 8"));
  Contacts.push_back(ContactItem("Angela Merkel", "+49 23456 5466"));
  Contacts.push_back(ContactItem("Vladimir Putin", "+7 6645 4564 797"));
  Contacts.push_back(ContactItem("Manmohan Singh", "+91 234 4564 789"));
  Contacts.push_back(ContactItem("Barack Obama", "+1 745 641 314"));

  DisplayContents(Contacts);
  Contacts.sort();
  DisplayContents(Contacts);
  Contacts.sort(SortOnPhoneNumber);
  DisplayContents(Contacts);

  Contacts.remove(ContactItem("Vladimir Putin", "+7 6645 4564 797"));
  DisplayContents(Contacts);

  return 0;
}
