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
    pr3.Show();

    return 0;
}
