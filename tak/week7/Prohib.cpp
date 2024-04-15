#include <iostream>

using namespace std;

class MonsterDB {
private:
  ~MonsterDB(); // stack에서 instance 사용 막고 싶으면 private 이용하기
};

int main() {
  cout << "Hello World!" << endl;
  // MonsterDB myDatabase; // stack, local variable
  MonsterDB* myDatabase = new MonsterDB();

  return 0;
}
