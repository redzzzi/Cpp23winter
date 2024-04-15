#include <iostream>

using namespace std;

class MonsterDB {
private:
  ~MonsterDB() {}; // stack에서 instance 사용 막고 싶으면 private 이용하기
public:
  void DestroyInstance(MonsterDB* pInstance) { // 시작 주소를 넘겨줘야해서, 포인터 타입으로 지정!!
    delete pInstance;
  }
};

int main() {
  cout << "Hello World!" << endl;
  // MonsterDB myDatabase; // stack, local variable
  MonsterDB* myDatabase = new MonsterDB(); // No automatic delete myDatabase!!
  myDatabase->DestroyInstance(myDatabase);

  return 0;
}
