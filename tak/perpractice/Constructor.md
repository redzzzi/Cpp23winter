[*constructor* and *destructor* - wikidocs](https://wikidocs.net/17145)
<details><summary>SUMMARY</summary>
<div markdown="1">

- 생성자(*constructor*)
    - 클래스 객체 생성 시 private 멤버를 자동으로 초기화
    - 생성자 이름과 클래스 이름이 같아야 함
    - return이 선언되어 있지 않으며, 실제로 return 하지 않음
    - 일종의 함수로, **overloading**이 가능함 = 객체 생성 다양화
    - 디폴트값 설정 가능

```cpp
#include <iostream>

using namespace std;

class Practice {
private:
    int num1;
    int num2;
public:
    Practice() { // constructor 1
        num1 = 0;
        num2 = 0;
    }
    Practice(int n) { // constructor 2
        num1 = n;
        num2 = 0;
    }
    Practice(int n1, int n2) { // constructor 3
        num1 = n1;
        num2 = n2;
    }
    void Show() const {
        cout << num1 << ' ' << num2 << endl;
    }
};

int main() {
    Practice pr1; // call constructor 1. CAUTION: Practice pr1() occurs an error.
    pr1.Show();
    Practice pr2(100); // call constructor 2.
    pr2.Show();
    Practice pr3(100, 200); // call constructor 3.
    Practice pr2(100, 200); // call constructor 3.
    pr3.Show();

    return 0;
}
```
</div>
</details>

# 1. Using Constructors to **Convert Types**
