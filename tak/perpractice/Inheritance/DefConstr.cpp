// 파생 클래스의 생성자는 기초 클래스의 생성자를 사용한다.
// 이유: 기초 클래스의 private 멤버에 접근할 수 없기 때문이다.
// -> 기초 클래스의 생성자를 사용해야 기초 클래스의 private 멤버를 초기화할 수 있다.
// 기초 클래스의 생성자를 명시하지 않으면, 프로그램은 기초 클래스의 디폴트 생성자를 사용하게 된다.

#include <iostream>

using namespace std;

class Person {
private:
  string name_;
  int age_;
public:
  Person(const string& name, int age); // 기초 클래스 생성자 선언
  void ShowPersonInfo();
};

class Student: public Person {
private:
  int student_id_;
public:
  Student(int sid, const string& name, int age); // 파생 클래스 생성자의 선언
};

int main() {
  Student hong(12345, "홍길동", 20);
  hong.ShowPersonInfo();

  return 0;
}

Person::Person(const string& name, int age) { // 기초 클래스 생성자의 정의
  name_ = name;
  age_ = age;
}

void Person::ShowPersonInfo() {
  cout << name_ << "의 나이는 " << age_ << "세입니다." << endl;
}

Student::Student(int sid, const string& name, int age): Person(name, age) { // 파생 클래스 생성자의 정의
  student_id_ = sid;
}
