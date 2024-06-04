# 함수 템플릿

# [클래스 템플릿](https://www.tcpschool.com/cpp/cpp_template_class#google_vignette)
- 클래스의 **일반화된 선언**을 의미한다.
- 타입에 따라 다르게 동작하는 **클래스 집합**을 만들 수 있다.
    - 템플릿 인수에 따라 별도의 클래스를 만들 수 있다.

## 클래스 템플릿의 문법
- 클래스 템플릿으로부터 객체를 생성할 때는 `< >` 안에 템플릿에 전달된 **인수 타입을 명시**해야한다.
```cpp
template <typename 타입이름>
class 클래스템플릿이름 {
    // 클래스 멤버의 선언
};
```
```plaintext
사용자가 사용하고자 하는 타입을 명시적으로 제공해야 한다.
```

## 클래스 템플릿의 특징
1. `하나 이상의 템플릿 인수를 가지는 클래스 템플릿을 선언할 수 있다.`
```cpp
template <typename T, int i> // 두 개의 템플릿 인수를 가지는 클래스 템플릿
class X {
    ...
};
```
2. `클래스 템플릿에 디폴트 템플릿 인수를 명시할 수 있다.`
```cpp
template <typename T = int, int i> // 디폴트 템플릿 인수의 타입을 int형으로 명시
class X {
    ...
};
```
3. `클래스 템플릿을 기초 클래스로 하여 상속할 수 있다.`
```cpp
template <typename Type>
class Y: public X <Type> { // 클래스 템플릿 X를 상속받음
    ...
};
```

## 중첩(*nested*) 클래스 템플릿
- C++에서는 클래스나 클래스 템플릿 내에 또 다른 템플릿을 중첩하여 정의할 수 있다.
    - 이러한 템플릿을 **멤버 템플릿**이라고 한다.
- <ins>바깥쪽 클래스의 범위 내/외</ins>에서 클래스 템플릿으로 선언된다.
- 예제: 바깥쪽 클래스인 **X**의 외부에 중첩 클래스 템플릿인 **Y**를 정의
    - **클래스 템플릿**의 <ins>템플릿 인수</ins>와 **멤버 템플릿**의 <ins>템플릿 인수</ins>가 둘다 **앞에 명시되어있어야 한다.**
```cpp
template <typename T>
class X {
    template <typename U>
    class Y {
        ...
    }
    ...
};

int main(void) {
    ...
}

template <typename T>
template <typename U>
X<T>::Y<U>::멤버함수이름() {
    ...
};
```

## 명시적 특수화
- 클래스 템플릿은 함수 템플릿과 마찬가지로 **특정 타입이나 값의 템플릿 인수에 대해 특수화**할 수 있다.
    - 특수화를 명시하면, 해당 타입에 대한 특별한 동작 정의가 가능하다.
    - 컴파일러가 전달된 인수에 정확히 대응하는 특수화된 정의를 발견하면, 더 이상 다른 템플릿을 찾지 않고 해당 정의를 사용한다.
- 예제: 클래스 템플릿 X의 double형에 대한 명시적 특수화
```cpp
template <> class X<double> { ... };
```
- 예제: Data 클래스 템플릿에서 double형에 대한 동작만을 변경
```cpp
template <> class Data<double> {
private:
    double data_;
public:
    Data(double dt) { data_ = dt; } // 생성자
    Data(double dt) { data_ = dt; } // 생성자
    double get_data() {
        cout << "double형 테이터를 출력합니다!" << endl;
        return data_;
    }
};
```

## 부분 특수화
- 두 개 이상의 템플릿 인수 중 일부만 특수화
- `< >`에서 특수화하지 않는 타입의 템플릿 인수를 명시하고, 그 다음 특수화하는 타입을 명시한다.
- 예제: 클래스 템플릿 X를 double형에 대해 부분 특수화
    - 아래 코드에서 <ins>T1 타입까지 특수화</ins>하면, **명시적 특수화**를 할 수 있다.
```cpp
template <typename T1> class X<T1, double> { ... };
```

### **typedef** 키워드를 이용한 템플릿 특수화
```cpp
typedef X<double, 3.14> DoubleX;
DoubleX double_x; // double_x는 X<double, 3.14> 타입임.
```
