// 예제: 생성자 매개변수 default 값
#include <iostream>

using namespace std;

class Test {
private:
  int num1;
  int num2;
public:
  Test(int n1 = 0, int n2 = 0) {// 생성자 4
    num1 = n1;
    num2 = n2;
  }
  void Show() const {
    cout << num1 << ' ' << num2 << endl;
  }
};

int main() {
  Test tst1; // 생성자 4 호출. 디폴트 값 사용
  tst1.Show();
  Test tst2(100); // 생성자 4 호출, 첫 멤버 값 세팅
  tst2.Show();
  Test tst3(100, 200); // 생성자 4 호출, 두 멤버 모두의 값 세팅
  tst3.Show();

  return 0;
}
