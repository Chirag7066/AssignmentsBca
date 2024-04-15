#include <iostream>
using namespace std;
class A {
    int a;
public:
    A(int a_val) : a(a_val) {}
    friend class B;
};
class B {
    int b;
public:
    B(int b_val) : b(b_val) {}
    int sum(A &ref) {
        return b+ref.a;
    }
};
int main() {
    A a1(50);
    B b1(10);
    int result = b1.sum(a1);
    cout << "Sum of the private members: "<<result<<endl;
    return 0;
}