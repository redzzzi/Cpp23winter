# 15_Polymorphism
- 정리를 한 후, 아래 내용에 답해보자.
```plain
1. What polymorphism actually means
- polymorphism(다형성)은 다양한 타입의 객체를 비슷하게 다룰 수 있도록 하는 객체 지향 언어의 특징이다.
2. What virtual functions do and how to use them
-
3. What abstract base classes are and how to declare them
-
4. What virtual inheritance means and where you need it
-
```
## 가상(virtual) 함수에 의해 실행되는 다형적 양상
- 부모 클래스에 virtual을 선언하며 객체와 관한 실행을 확실히 할 수 있다.
- ***virtual***이라는 것은 아래에서 사용된다.
    - 컴파일러가 요청된 베이스 클래스 메서드의 재정의된 변형이 호출되도록 보장합니다.
    - 예를 들어, 아까 Swim()을 virtual로 선언했다면, Fish::Swim()이 아닌 Tuna::Swim()이 실행될 것이다.
