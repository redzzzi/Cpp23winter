# 15_Polymorphism
- 정리를 한 후, 아래 내용에 답해보자.
```plain
1. What polymorphism actually means
- polymorphism(다형성)은 다양한 타입의 객체를 비슷하게 다룰 수 있도록 하는 객체 지향 언어의 특징이다.
2. What virtual functions do and how to use them
- 파생 클래스에서 재정의할 것으로 기대하는 멤버 함수이다.
3. What abstract base classes are and how to declare them
- 하나 이상의 순수 가상함수를 포함하는 클래스
- 반드시 사용돼야 하는 멤버 함수를 추상 클래스에 순수 가상 함수로 선언해 놓으면, 이 클래스로부터 파생된 모든 클래스에서는 이 가상 함수를 반드시 재정의해야 함.
4. What virtual inheritance means and where you need it
- 상속이 여러 번 되어 쓸데없는 호출이 여러 번일 때 도움
```
## 가상(virtual) 함수에 의해 실행되는 다형적 양상
- 부모 클래스에 virtual을 선언하며 객체와 관한 실행을 확실히 할 수 있다.
- ***virtual***이라는 것은 아래에서 사용된다.
    - 컴파일러가 요청된 베이스 클래스 메서드의 재정의된 변형이 호출되도록 보장합니다.
    - 예를 들어, 아까 Swim()을 virtual로 선언했다면, Fish::Swim()이 아닌 Tuna::Swim()이 실행될 것이다.

- 기본 클래스에는 소멸자를 항상 virtual로 선언하도록 한다.
```plain
이렇게 하면 Base* 형태의 포인터가 파생 클래스의 소멸자가 호출되지 않는 방식으로 삭제를 호출할 수 없습니다.
-> 파생 클래스 delete 될 때 소멸자도 호출됨
```

- virtual function을 쓰다보면 컴파일러에서는 테이블을 만들게 된다. (VFT)
    - sizeof()로 virtual이 붙은 클래스를 확인해보면 그 크기가 더 크다.
- 파생 클래스가 기본 클래스를 오버라이드 한다.

- 인스턴스가 될 수 없는 기본 클래스를 **abstract base class**라고 부른다. -> 동작이 정의되지 않은 순수 가상 함수를 포함하기 때문
    - **하나 이상의 순수 가상 함수를 포함하는 클래스**
    - 파생 형식으로 활용
- ***순수 가상 함수***: 파생 클래스에서 **반드시** 재정의해야하는 멤버 함수
- 순수 가상 함수를 활용하여 추상 기본 클래스를 만들 수 있다.
- virtual 메소드는 다음처럼 쓰일 때 **pure virtual**이라고도 불린다.
```cpp
class AbstractBase {
public:
    virtual void DoSomething() = 0; // pure virtual method
};

class Derived: public AbstractBase {
public:
    void DoSomething() { // pure virtual method
        cout << "Implemented virtual function" << endl;
    }
};
```

## Specifier `override`
- `override`는 오버라이딩하겠다는 강력한 의도를 뒷받침한다.
- 컴파일 하기 전에 체크해야 할 것
    1. 기본 클래스 함수는 `virtual`이다.
    2. 기본 클래스 가상 함수의 표기는 `override`가 선언됨 파생 클래스 함수의 표기와 정확히 매치돼야한다.

## Specifier `final`: 상속을 방지하는 키워드
- *final*로 선언된 클래스는 기본 클래스로 사용될 수 없다.
- *final*로 선언된 가상 함수는 파생함수에 의해 오버라이딩 될 수 없다.
```cpp
class Tuna: public Fish {
public:
    // override Fish::Swim and make this final
    void Swim() override final {
        cout << "Tuna swims!" << endl;
    }
};
```
