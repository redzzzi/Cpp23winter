// assignment 5 : max heap problem
#include <iostream>
using namespace std;

struct Geometry {
 char type;
 double area;
};

Geometry heap[100005];
int sz = 0; // number of nodes

void swap(Geometry &a, Geometry &b) {
 Geometry tmp = a;
 a = b;
 b = tmp;
}

void push(Geometry g) {
 heap[++sz] = g;
 int idx = sz;
 while (idx != 1) {
  int par = idx / 2;
  if (heap[par].area >= heap[idx].area) break; // exit when parent node bigger (max heap)
  swap(heap[par], heap[idx]);
  idx = par;
 }
}

Geometry top() {
 if (sz == 0) return {'x', 0.00};
 return heap[1];
}

void pop() {
 if (sz == 0) return;
 heap[1] = heap[sz--];
 int idx = 1;
 while (2 * idx <= sz) { // left child index : 2 * idx
  int lc = 2 * idx, rc = 2 * idx + 1;
  int max_child = lc;
  if (rc <= sz && heap[rc].area > heap[lc].area) {
   max_child = rc;
  }
  if (heap[idx].area >= heap[max_child].area) break;
  swap(heap[idx], heap[max_child]);
  idx = max_child;
 }
}

double circle(double x, double y, double r) {
 double areaC = (double)3.14 * r * r;
 return areaC;
}

double rectangle(double x1, double y1, double x2, double y2) {
 double areaR = (double)(x2 - x1) * (y2 - y1);
 return areaR;
}

double square(double x, double y, double l) {
 double areaS = (double)l * l;
 return areaS;
}

int main() {
 string cmd;
 while (cin >> cmd) {

  if (cmd == "I") {
   char type;
   cin >> type;
   if (type == 'c') {
    double a, b, c;
    cin >> a >> b >> c;
    Geometry g = {type, circle(a, b, c)};
    push(g);
   }
   else if (type == 'r') {
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    Geometry g = {type, rectangle(a, b, c, d)};
    push(g);
   }
   else if (type == 's') {
    double a, b, c;
    cin >> a >> b >> c;
    Geometry g = {type, square(a, b, c)};
    push(g);
   }
   else {
    cout << "Wrong type." << '\n';
   }
  } else if (cmd == "get") {
   if (sz == 0) {
    printf("0.00\n");
   } else {
    printf("%.2f\n", top().area);
    pop();
   }
   cout.flush();
  }
  else {
   cout << "Try valid input." << '\n';
  }
 }
 return 0;
}

