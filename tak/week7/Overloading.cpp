#include <iostream>

using namespace std;

class President {
public:
  static President& GetInstance() { // reference from President
    static President OnlyInstance;
    return OnlyInstance;
  };
  // Getter
  string GetName() {
    return Name;
  }
  // Setter
  void SetName(string InputName) {
    Name = InputName;
  }
private:
  string Name;
  President() {};
  President(const President&);
  President& operator=(const President&);
};

int main() {
  cout << "Hello World!" << endl;
  // President first; // 에러 남 -> can't access constructor
  
  // directly using memory function without calling instance(?)
  President& OnlyPresident = President::GetInstance();
  OnlyPresident.SetName("Abraham Lincoln");
  // President* Second = new President(); // can't access constructor 
  // President Third = OnlyPresident; // copy constructor
  // OnlyPresident = President::GetInstance(); // can't access operator assignment
  cout << President::GetInstance().GetName() << endl; 

  return 0;
}
