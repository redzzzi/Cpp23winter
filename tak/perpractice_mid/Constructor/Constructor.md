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

# Using Constructors to **Convert Types**
- ```Human anotherKid = 11```처럼 변수를 지정된 생성자의 이름으로 받을 수 있음
    - 정수를 생성자로 받고, *implicit* conversion을 해줬기 때문
    - Human이라는 객체를 생성하고 해당 정수를 함수의 인자로 받을 수 있게 해줌
- *implicit* conversion을 적용하지 않으려면?
    - ```explicit Human(int Age) {}```처럼 ```explicit``` 식별자를 붙여주면 됨

# **union**: A Special Data Storage Mechanism
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

# ```std::variant``` As a Typesafe Alternative to a union
```cpp
union SimpleUnion {
    int num;
    double preciseNum;
};
``````
- 해당 union을 예로 들자면, double로 쓸 수도, integer로 쓸 수도 있다!
```cpp
SimpleUnion u1;
u1.preciseNum = 3.14; // union stores a double
int num2 = u1.num; // works, but u1 contained a double!
```

- C++17은 union의 typesafe 대안으로 [std::variant](https://en.cppreference.com/w/cpp/utility/variant)를 제시함
    - typesafe: 런타임 시 타입에 대한 문제로 에러가 발생하지 않도록 미리 조치
<details><summary>cppreference Example Code</summary>
<div markdown="1">

<<<<<<< HEAD
=======
```cpp
#include <cassert>
#include <iostream>
#include <string>
#include <variant>
 
int main()
{
    std::variant<int, float> v, w;
    v = 42; // v contains int
    int i = std::get<int>(v);
    assert(42 == i); // succeeds
    w = std::get<int>(v);
    w = std::get<0>(v); // same effect as the previous line
    w = v; // same effect as the previous line
 
//  std::get<double>(v); // error: no double in [int, float]
//  std::get<3>(v);      // error: valid index values are 0 and 1
 
    try
    {
        std::get<float>(w); // w contains int, not float: will throw
    }
    catch (const std::bad_variant_access& ex)
    {
        std::cout << ex.what() << '\n';
    }
 
    using namespace std::literals;
 
    std::variant<std::string> x("abc");
    // converting constructors work when unambiguous
    x = "def"; // converting assignment also works when unambiguous
 
    std::variant<std::string, void const*> y("abc");
    // casts to void const * when passed a char const *
    assert(std::holds_alternative<void const*>(y)); // succeeds
    y = "xyz"s;
    assert(std::holds_alternative<std::string>(y)); // succeeds
}
```
</div>
</details>

```cpp
variant<int, double> varSafe; // variant can store int or double
varSafe = 3.14; // variant stores double from now on
double pi = get<double>(varSafe); // 3.14, pi stores double value brought from varSafe
double pi2 = get<1>(varSafe); // 3.14, ''
get<char>(varSafe); // compile fails: variant with two types, not three try
{
    get<int>(varSafe); // throws exception as variant stores double
}
catch (bad_variant_access&) { // exception handler code}
```

# Using Aggregate Initialization on Classes and Structs
- *aggregate initialization* syntax
```cpp
Type objectName = {argument1, ..., argmentN};
```
- 대신, C++11 이후로는 ...
```cpp
Type objectName {argument1, ..., argumentN};
```
- 배열, 문자열 파트에서 본 배열 초기화에서의 *aggregate initialization*
```cpp
int myNums[] = {9, 5, -1}; // myNums is int[3]
char hello[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
```

- 다음 예제들은 앞서 제시된 aggregate 생성 요건 충족함
- **ORIGINAL**
```cpp
struct Aggregate1 {
    int num;
    double pi;
};
```
- **Initialization**
```cpp
Aggregate1 a1 {2017, 3.14};
```
<details><summary>Another example</summary>
<div markdown="1">

- **ORIGINAL**
```cpp
struct Aggregate2 {
    int num;
    char hello[6];
    int impYears[5];
};
```
- **Initialization**
```
Aggregate2 a2 {42, {'h', 'e', 'l', 'l', 'o'}, {1998, 2003, 2011, 2014, 2017}};
```
</div>
</details>

## CAUTION
```plaintext
Aggregate initialization will initialize only
the first non-static member of a union.
```
<details><summary>예를 들어 설명해보자!</summary>
<div markdown="1">

- some lines of LISTING 9.16
```cpp
union SimpleUnion {
    int num;
    char alphabet;
};

...

int main() {
    SimpleUnion u1, u2;
    u1.num = 2100;
    u2.alphabet = 'C';

    ...
}
```
The aggregate initialization of the unions declared
in Listing 9.16 would be
```cpp
SimpleUnion u1{2100}, u2{'C'};
// In u2, member num (int) is initialized to 'C' (ASCII67)
// Although, you wished to initialize member alphabet (char)
```
```plaintext
의도화 다른 초기화가 실행될 수 있기 때문에,
해당 구문을 union에는 적용하지 않는 게 좋다.
쓸거면 9.16처럼 사용하기!!
```
</div>
</details>

# [`constexpr`](https://modoocode.com/293) with Classes and Objects
- constant 또는 const-expression으로 만들어진 함수를 활용
    - 컴파일러에게 해당 함수를 평가하고 결과 삽입하도록 함
```plaintext
The compiler would ignore constexpr
when the function or class is used with entities that are not constant.
컴파일 타임에 확실히 상수를 사용하고 싶다 -> constexpr
cf) const: 런타임에 상수 확인
```
## `const`와 `constexpr` [차이점](https://m.blog.naver.com/dlcksgod1/221204397624)
```cpp
constexpr int max = 100;

void use(int n) {
    constexpr int c1 = max + 7; // OK: c1 is 107 -> 컴파일타임에 max 값 확정돼있음(constexpr)
    constexpr int c2 = n + 7; // error: we don't know the value of c2 in compile time
    const int c3 = n + 7; // OK: but don't try to change the value of c3
    const int c4; // error: const requires initializer
    c3 = 4; // error: we can't change the value of const variable after initialization
}
```

# The Concept of [Classes](https://en.wikipedia.org/wiki/Class_(computer_programming)) and [Objects](https://en.wikipedia.org/wiki/Object_(computer_science))
- class
    - object를 생성하기위한 확장성있는 코드 템플릿
    - 멤버 변수에 초기 값을 설정
    - 멤버 함수 또는 메소드 실행
```plaintext
클래스의 생성자로 만들어진 object를 클래스의 instance라고 부른다.
그리고 object와 관련된 멤버 변수를 instance variable이라고 한다.
```
```cpp
class Human {
    // Data attributes:
    string Name;
    string DateOfBirth;
    string PlaceOfBirth;
    string Gender;

    // Methods:
    void Talk(string TextToTalk);
    void IntroduceSelf();
    ...
};
```
```plaintext
Methods are essentially functions
that are "members of a class."
```
## Instantiating an Object of a Class
- 휴먼 클래스로 객체 생성 예시는 다른 자료형으로 인스턴스를 생성하는 원리와 비슷하다.
```cpp
double Pi = 3.1415; // 지역 변수로 선언된 double 자료형. (스택에)
Human Tom; // 지역 변수로 선언된 Human 클래스의 객체
```
- `new` 식별자를 사용하는 것처럼 휴먼 클래스의 인스턴스에 동적할당을 할 수 있다.
```cpp
int* pNumber = new int; // free store에 정수가 동적할당
delete pNumber; // 메모리 할당 해제
```
## 포인터로 멤버 접근하기
```cpp
Human* pTom = new Human();
(*pTom).IntroduceSelf();
```
## `->` 연산자로 멤버 접근하기
```cpp
Human* pTom = new Human();
pTom->DateOfBirth="1970";
pTom->IntroduceSelf();
delete pTom;

// 포인터가 있을 때 대신 쓸 수 있는 방법
Human Tom;
Human* pTom = &Tom; // 참조 연산자 &를 사용해 주소 할당
pTom->DateOfBirth="1970"; // Tom.DateOfBirth="1970";과 같음
pTom->IntroduceSelf(); // Tom.IntroduceSelf();와 같음
```
