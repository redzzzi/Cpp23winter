// override하겠다는 의도를 드러내는 override 식별자
#include <iostream>
using namespace std;

class Fish {
public:
  virtual void Swim() {
    cout << "Fish swims!" << endl;
  }
};

class Tuna: public Fish {
public:
  void Swim() override {
    cout << "Tuna swims!" << endl;
  }
};

int main(int argc, const char* argv[]) {
  cout << "Hello, world!" << endl;
  Tuna T;
  T.Fish::Swim();
  T.Swim();

  return 0;
}
