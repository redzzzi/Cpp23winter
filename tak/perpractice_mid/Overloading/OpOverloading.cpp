#include <iostream>

using namespace std;

class Point {
private:
  int m_x;
  int m_y;
public:
  Point(int x, int y) :m_x(x), m_y(y){}
  Point operator+(const Point& p); // 연산자 오버로딩
  void ShowPoint();
};

Point Point::operator+(const Point& p) { // 연산자 오버로딩 구현
  return Point(m_x + p.m_x, m_y + p.m_y);
}

void Point::ShowPoint() {
  cout << m_x << " " << m_y << endl;
}

int main() {
	Point p1(20, 10);
	Point p2(10, 20);
	Point a = p1 + p2;   //연산자 오버로딩 
	cout << "연산자 오버로딩 결과 : "; //결과는 30 30
	a.ShowPoint();
}
