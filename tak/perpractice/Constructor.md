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
- ```Human anotherKid = 11```처럼 변수를 지정된 생성자의 이름으로 받을 수 있음
    - 정수를 생성자로 받고, *implicit* conversion을 해줬기 때문
    - Human이라는 객체를 생성하고 해당 정수를 함수의 인자로 받을 수 있게 해줌
- *implicit* conversion을 적용하지 않으려면?
    - ```explicit Human(int Age) {}```처럼 ```explicit``` 식별자를 붙여주면 됨

# 2. **union**: A Special Data Storage Mechanism
## What is ***union***?
```
a special class type where only one of the non-static data members is active at a time
```
- union은 클래스처럼 다양한 멤버 변수를 받을 수 있음
    - 예외적으로, **한 가지 변수만 실제로 사용될 수 있음**
- ```struct```와 비슷하게, ```union```의 멤버들은 *public*임
- 하지만, ```struct```와 다르게 ```union```은 상속 구조를 가질 수 없음 
- union의 ```sizeof()```는 union에 있는 **가장 큰 멤버의 사이즈**임 (해당 변수가 inactive더라도)
```cpp
UnionName unionObject;
unionObject.member2 = value; // member2를 active member로 함
```

## Where Would You Use a ***union***?
- 유니온은 복잡한 자료형을 모델링할 때 구조체의 멤버처럼 쓰임
