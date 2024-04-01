# [함수 오버로딩](https://www.tcpschool.com/cpp/cpp_cppFunction_overloading)
- 같은 이름의 함수를 **중복하여 정의**하는 것
- 같은 일을 처리하는 함수를, 매개변수의 형식을 조금씩 달리하여 하나의 이름으로 작성할 수 있게 해준다.
```plaintext
객체 지향 프로그램의 특징 중 다형성(polymorphism)의 구현을 가능하게 해준다.
```
## 함수 시그니처
- **함수의 원형**에 명시되는 <ins>매개변수 리스트</ins>를 가리킨다.
    - 만약 두 함수의 매개변수 개수와 타입이 같다면, 두 함수의 시그니처는 같은 것!
<br>

```plaintext
즉, 함수의 오버로딩은 서로 다른 시그니처를 갖는 여러 함수를
같은 이름으로 정의하는 것이라 할 수 있다.
```
<details><summary>잘못 사용한 예</summary>
<div markdown="1">

```cpp
void Shift(int, int);
void Shift(int, int, int);
void Shift(int, int, int, int);

int main(){
    Shift(1, 2);
    Shift(1, 2, 3);
    Shift(1, 2, 3, 4);

    return 0;
}
```
```plaintext
// OUTPUT
2, 1
2, 3, 1
2, 3, 4, 1
```
</div></details>

# [연산자 오버로딩](https://www.tcpschool.com/cpp/cpp_operatorOverloading_intro)
- **하나의 연산자**를 **여러 의미**로 사용할 수 있게 해준다.
    - [사용자 정의 타입](https://wikidocs.net/29964)까지 확장 가능
- 함수 오버로딩의 개념을 연산자까지 확대한 것이다.

## 연산자 함수
- 문법
    - `operator` 키워드를 사용하여 연산자를 오버로딩한다.
    - operator 키워드와 연산자는 **공백없이 연결하여 표시**해야 한다.
```cpp
operator오버로딩할연산자(매개변수목록)
```
- 장점: **복잡한 함수 이름 대신에** 간편하게 연산자를 사용할 수 있다.
- 예제
    - `-`를 두 Position 객체 사이의 중간 좌표를 구하는 연산으로 오버로딩하여 사용하고 있다.
    - 아래 연산자 오버로딩이 쓰이지 않았다면 뺄셈 연산은 적용이 안될 것이며 오류가 날 것이다.
```cpp
// 두 지점의 중간 지점의 좌표를 구하는 예제
Position Position::operator-(const Position& other){
    return Position((x_ + other.x_)/2, (y_ + other.y_)/2);
}
```

### 연산자 함수의 정의 방법
1. 클래스의 멤버 함수로 정의하는 방법
2. 전역 함수로 정의하는 방법
```cpp
// 전역 함수로 정의한 예제
Position operator-(const Position& pos1, const Position& pos2){
    return Poisition((pos1.x_ + pos2.x_)/2,, (pos1.y_ + pos2.y_)/2);
}
```
- 전역 함수는 **private 멤버**인 <ins>x_</ins>와 <ins>y_</ins>에 접근하지 못하므로, `friend` 키워드를 사용하여 프렌드 함수로 선언하고 있다.
